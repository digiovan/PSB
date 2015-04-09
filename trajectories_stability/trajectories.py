#! /usr/bin/python

import sys
sys.path.append('../')
from helpers import *

import csv

################################################################################
# Useful definitions

def getTrajectories(filename):

    csvfile  = open(filename, "rb")

    csvfile_noaverage=csvfile.readlines()
    csvfile_noaverage=csvfile_noaverage[:-4]
    
    reader = csv.reader(csvfile_noaverage, delimiter=";")
    
    header1 = reader.next()
    #print header1
    
    header2 = reader.next()
    #print header2
    
    trajectories = {}
    
    #print len(header1)
    
    #for col in header1
    
    for row in reader:
        
        date = row[0]
        if date not in trajectories.keys():
            trajectories[date] = {}
         
        ring_plane = ''        
     
        for icol in range(2,len(row)):
            # somehow the files produced by Abdel have an empty entry at the end... that's why the safety check here...
            if row[icol] == "":
                continue
                
            #print row[icol]
            
            # need to strip the white spaces if any 
            if header1[icol].strip(): 
                #print  header1[icol]
                ring_plane = header1[icol]
    
                if ring_plane not in trajectories[date].keys():
                    trajectories[date][ring_plane] = ordered_dict()
    
            bpm       = header2[icol]
            bpm_value = row    [icol]
    
            if bpm not in trajectories[date][ring_plane].keys():
                trajectories[date][ring_plane][bpm] = bpm_value
                
            
    return trajectories


def calcAverage(traj,ring_plane):
    average_bpms = ordered_dict()
    n_points = len(traj.keys())
    #print n_points
    #print traj
    for date in traj.keys():
    
        #print "==================================="
        for bpm in traj[date][ring_plane].order():
            #print bpm, traj[date][ring_plane][bpm]
            
            bpm_value = float( traj[date][ring_plane][bpm] )
            
            if bpm not in average_bpms.keys():
                average_bpms[bpm]  = bpm_value/n_points
            else:
                average_bpms[bpm] += bpm_value/n_points
                
    
    average_sigma = ordered_dict()
    for date in traj.keys():
    
        #print "==================================="
        for bpm in traj[date][ring_plane].order():
            #print bpm, traj[date][ring_plane][bpm]
            
            bpm_value = float( traj[date][ring_plane][bpm] )
            #print bpm, bpm_value, average_bpms[bpm]
            if bpm not in average_sigma.keys():
                average_sigma[bpm]  = (bpm_value-average_bpms[bpm])**2/n_points
            else:
                average_sigma[bpm] += (bpm_value-average_bpms[bpm])**2/n_points
    
    for bpm in average_sigma.keys():
        average_sigma[bpm] = average_sigma[bpm]**0.5
        #print bpm, average_bpms[bpm], " +/- ", average_sigma[bpm]

    return average_bpms, average_sigma


def getGraph(average_bpms, average_sigma):

    gOrbit = root.TGraphErrors( len(average_bpms) )
    
    id = 0
    for bpm in average_bpms.order():
        gOrbit.SetPoint     (id,float(id+0.5),average_bpms[bpm] ) # value in [mm]
        gOrbit.SetPointError(id,0            ,average_sigma[bpm]) # value in [mm]
        id+=1

    return gOrbit

def gethAxes(average_bpms, ring_plane):

    hDummy = root.TH1F( "h_"+ring_plane,"", len(average_bpms), 0, len(average_bpms) )

    if ('H' in ring_plane):
        hDummy.GetYaxis().SetTitle("horizontal displacement [mm]")
    if ('V' in ring_plane):
        hDummy.GetYaxis().SetTitle(  "vertical displacement [mm]")

    id = 0
    for bpm in average_bpms.order():
        hDummy.GetXaxis().SetBinLabel ( id+1, bpm )
        hDummy.GetXaxis().SetLabelSize( 0.04 )
        hDummy.GetXaxis().SetTickSize ( 0 )
        id += 1

    return hDummy
################################################################################


# MAIN

# for the options
import commands

import optparse
parser = optparse.OptionParser()

# define the options
parser.add_option('-f', '--folder',
                  help='specify the folder',
                  dest='FOLDER',
                  action='store')

parser.add_option('-s', '--save',
                  help='save the plots',
                  dest='SAVE',
                  default = False, 
                  action = 'store_true')

parser.add_option('-b', '--batch',
                  help='do not show the plots',
                  dest='BATCH',
                  default = False, 
                  action = 'store_true')

# get the options
(opts, args) = parser.parse_args()


# Sanity check: Making sure all mandatory options appeared
mandatories = ['FOLDER']
for m in mandatories:
    if not opts.__dict__[m]:
        print "at least the mandatory option %s is missing\n" % m
        parser.print_help()
        exit(-1)


list_of_csvfiles = commands.getoutput( 'ls -l %s | grep csv | awk \'{print $9}\'' % opts.FOLDER ).split()

user = opts.FOLDER.replace('/','')
for i in range( len(list_of_csvfiles) ):
    name_array = list_of_csvfiles[i].split('_')
    
    #if not user.strip():
    #    user = name_array[4]
    
    #if (user != name_array[4]):
    #    print 'error, two different users in the files: %s vs %s' % (date,name_array[4])
    #    exit(-1)
        
    list_of_csvfiles[i] = opts.FOLDER + "/" + list_of_csvfiles[i]
    list_of_csvfiles[i] = list_of_csvfiles[i].replace('//','/')

#print list_of_csvfiles

import mapping

ring_plane_list = mapping.ring_plane_user_map[user]

if (opts.BATCH):
    root.gROOT.SetBatch(True) 

colors = [root.kBlack,root.kRed+2,root.kAzure+2,root.kViolet,root.kOrange+2,root.kGreen+2,root.kBlue,root.kGray+2,root.kCyan,root.kYellow+4,
          root.kSpring+2,root.kTeal,root.kPink,root.kMagenta,root.kRed-5,root.kPink-5,root.kTeal-5,root.kCyan-5]
canvases = []
max = -999.

for ring_plane in ring_plane_list:
    
    iColor = 0
    canvas = root.TCanvas("canvas_"+ring_plane,"",0,0,1100,850)
    canvas.cd()

    canvas.SetGridy()

    leg = root.TLegend(0.15, 0.65, 0.40, 0.93)
    leg.SetBorderSize(1)
    leg.SetFillColor(0)
    leg.SetTextSize(0.025)
    # trick to have the legend not disappearing
    SetOwnership( leg, 0 )   # 0 = release (not keep), 1 = keep, ot

    date = ''
    hAxes = ''
    for csvfile in list_of_csvfiles:

        name_array = csvfile.split('/')[1].split('_')
        date = name_array[0]+'/'+name_array[1]+'/'+name_array[2]+", "+name_array[3][:-2]+":"+name_array[3][-2:]


        traj = getTrajectories( csvfile )
        average_bpms, average_sigma = calcAverage(traj, ring_plane)

        if not hAxes:
            hAxes = gethAxes(average_bpms, ring_plane)
            SetOwnership( hAxes, 0 )   # 0 = release (not keep), 1 = keep, ot
            hAxes.SetTitle( user + ": " + ring_plane )
            hAxes.GetXaxis().SetRangeUser(0,5)
            hAxes.Draw("")


        gOrbit = getGraph(average_bpms, average_sigma)
        SetOwnership( gOrbit, 0 ) # 0 = release (not keep), 1 = keep, ot

        maxOrbit = getAbsMax(gOrbit)
        if (maxOrbit > max):
            max = maxOrbit + 15
        hAxes.GetYaxis().SetRangeUser(-max,max)

        tlines = []
        for bin in range(0,hAxes.GetNbinsX()):
            tline = root.TLine(0.5 + bin,-1*max, 0.5 + bin,max)
            tline.SetLineStyle(3)
            tline.Draw()
            tlines.append(tline)

        gOrbit.SetLineWidth  (3)
        gOrbit.SetLineColor  (colors[iColor])
        gOrbit.SetMarkerColor(colors[iColor])
        gOrbit.SetFillColor  (colors[iColor])
        iColor+=1
        gOrbit.Draw("L")

        leg.AddEntry(gOrbit, date, "l")
        leg.Draw()

        canvas.Update()

    if (opts.SAVE):
        canvas.SaveAs("plots/trajectories_%s_%s.png" % (user,ring_plane.replace(" ","_"))  )
        canvas.SaveAs("plots/trajectories_%s_%s.root" % (user,ring_plane.replace(" ","_")) )
        
    canvases.append(canvas)
