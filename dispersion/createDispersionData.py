#! /usr/bin/python

import sys
sys.path.append('../')
from helpers import *

import os
import commands
import random
import math

import ROOT as root
root.gStyle.SetOptStat(0)
from ROOT import SetOwnership

#root.gROOT.SetBatch(True) 

# for the options
import optparse
parser = optparse.OptionParser()

# define the options
parser.add_option('-f', '--folder',
                  help='specify which folder contains the data',
                  dest='FOLDER',
                  action='store')

parser.add_option('-d', '--dpop_list',
                  help='list of the momentum spreads, e.g. 0.001,0.02,-0.001',
                  dest='DPOP_LIST',
                  action = 'store')

parser.add_option('-b', '--batch',
                  help='do not show the plots',
                  dest='BATCH',
                  default = False, 
                  action = 'store_true')

# get the options
(opts, args) = parser.parse_args()

# Sanity check: Making sure all mandatory options appeared
mandatories = ['FOLDER','DPOP_LIST']
for m in mandatories:
    if not opts.__dict__[m]:
        print "at least the mandatory option %s is missing\n" % m
        parser.print_help()
        exit(-1)

# go in batch mode if needed
if (opts.BATCH):
    root.gROOT.SetBatch(True) 


################################################################################
# MAIN
################################################################################
folder    = opts.FOLDER
dpop_list = opts.DPOP_LIST.split(',')

#print folder,dpop_list, 

# assuming that one took the same number of measurements per each momentum spread
measurements = [folder + thefile for thefile in commands.getoutput('ls -t %s' % folder).split()]
measurements = sorted(measurements, key = lambda x: int(x.split("-")[1]))
num_meas  = int( len(measurements) )
num_meas /= len(dpop_list)

print 'List of %d dp/p points:' % len(dpop_list), dpop_list
print 'Number of measurements per dp/p: %d' % num_meas

p = 'H'
r = '1'
planes = ['H','V']
rings  = ['1'] #,'2','3','4']

################################################################################
# create the dictionary needed to handle all the measurements

positions = ordered_dict()
id = -1

for i in range( 0,len(measurements) ):
    #print ''
    if (i%num_meas == 0):
        id += 1

    if (dpop_list[id] not in positions.keys()):
        positions[ dpop_list[id] ] = ordered_dict()

    # open the file    
    thefile = open(measurements[i], 'r')

    vetos = ('@','#','*','logical')
    for line in thefile:
        if not any(veto in line for veto in vetos): 
            info = line.split()
            
            if (info[0] not in positions[ dpop_list[id] ].keys()):
                positions[dpop_list[id]][ info[0] ] = ordered_dict()
                
            if (info[1] not in positions[dpop_list[id]][info[0]].keys()):
                positions[dpop_list[id]][info[0]][ info[1] ] = ordered_dict()

            if (info[2] not in positions[dpop_list[id]][info[0]][info[1]].keys()):
                positions[dpop_list[id]][info[0]][info[1]][ info[2] ] = []

            #print id,measurements[i],dpop_list[id],info[0],info[1],info[2],info[3]    
            positions[dpop_list[id]][info[0]][info[1]][ info[2] ].append(info[3])

    thefile.close()

#debugging printout    
#print positions.ordered_items()
#print positions['0.01']['LT.BPM10']['H']['1']
################################################################################


# sanity check
length = -999
for mom_spread in dpop_list:
    if length == -999:
        length = len(positions[mom_spread].order())

    if length != len(positions[mom_spread].order()):
        print "ERROR (SANITY CHECK): the \"positions\" dictionary has different BPMS list " \
              "for different momentum spreads"
        exit(-1)



################################################################################
# fill the histogram
histos = ordered_dict()

for mom_spread in positions.order():
    #print mom_spread

    for bpm in positions[mom_spread].order():
        #print bpm

        # create the histogram if not present
        for p in planes:
            for r in rings:
                
                # fill the histogram
                if positions[mom_spread][bpm].get(p) == None:
                    continue
                if positions[mom_spread][bpm][p].get(r) == None:
                    continue

                bpm_name = bpm+"_"+p+"_"+r 
                if bpm_name not in histos.keys():
                    histo2f = root.TH2F('h'+bpm_name,bpm_name,2001,-0.1,0.1,2001,-100,100)
                    histos[bpm_name] = histo2f

                if positions[mom_spread][bpm][p][r]:
                    for value in positions[mom_spread][bpm][p][r]:
                        #print mom_spread, bpm, p, r, value
                        histos[bpm_name].Fill( float(mom_spread), float(value)/1000. )

#print histos.order()
################################################################################


################################################################################
# draw and fit

# find the min and max dispersion measured
mmin, mmax = 999, -999
for mom_spread in positions.order():

    if float(mom_spread) < mmin:
        mmin = float(mom_spread)
    if float(mom_spread) > mmax:
        mmax = float(mom_spread)
    
print mmin, mmax
#exit(0)

dispersions = ordered_dict()
canvases = []

for histo_name in histos.order():
    #print histo_name

    item = histo_name.split("_")
    
    # plane
    if item[0] not in dispersions.keys():
        dispersions[ item[0] ] = ordered_dict()

    if item[1] not in dispersions[item[0]].keys():
        dispersions[item[0]][ item[1] ] = ordered_dict()

    if item[2] not in dispersions[item[0]][item[1]].keys():
        dispersions[item[0]][item[1]][ item[2] ] = []

    x_pos = 0
    y_pos = 0

    canvas = root.TCanvas("canvas_"+histo_name,'',x_pos,y_pos,900,750)
    canvas.cd()

    #histos[histo_name].Draw("COLZ")
    
    profile =  histos[histo_name].ProfileX()
    profile.GetXaxis().SetRangeUser(mmin,mmax)
    profile.GetXaxis().SetTitle("#Deltap/p")
    profile.GetYaxis().SetTitle("Average Position [mm]")
    profile.Draw()

    disp_fit = root.TF1("disp_fit","pol1",mmin,mmax) 
    profile.Fit('disp_fit')#,"Q")

    print histo_name, disp_fit.GetParameter(1), "\pm", disp_fit.GetParError(1)
    dispersions[item[0]][item[1]][ item[2] ].append(disp_fit.GetParameter(1))
    dispersions[item[0]][item[1]][ item[2] ].append(disp_fit.GetParError(1) )

    # title = root.TLatex(0,0,histo_name )
    # title.SetTextFont(42)
    # title.Draw()

    canvases.append( canvas )
    canvas.Update()

#print dispersions
#exit(0)
################################################################################

################################################################################
# save the data files

# grep BPM MADX/Linac2-PSB/2014/out/ltltbbi1.out | awk '{print $1,$2}'
bpm_pos = ordered_dict()
bpm_pos["LT.BPM10"]  =   1.40000
bpm_pos["LT.BPM20"]  =  17.17750
bpm_pos["LT.BPM30"]  =  20.99500
bpm_pos["LT.BPM40"]  =  34.04513
bpm_pos["LT.BPM50"]  =  52.78314
bpm_pos["LTB.BPM10"] =  60.43754
bpm_pos["LTB.BPM20"] =  67.64204
bpm_pos["LTB.BPM30"] =  82.04604
bpm_pos["BI.BPM00"]  =  89.75904
bpm_pos["BI.BPM10"]  =  95.21204
bpm_pos["BI.BPM20"]  = 104.41364
bpm_pos["BI.BPM30"]  = 107.29405
bpm_pos["BI1.BPM40"] = 124.51225
bpm_pos["BI1.BPM50"] = 127.08525


#for p in planes:
for r in rings:
        
    thefile = open("dispersion_data_"+r,"w")
    # header
    thefile.write('# NAME S DISP_X ERR_DISP_X DISP_Y ERR_DISP_Y\n')

    for bpm in dispersions.order():
        thefile.write( "%s %f " % (bpm,bpm_pos[bpm]) )
        for p in planes:
            thefile.write( "%f %f " % (dispersions[bpm][p][r][0], 
                                       dispersions[bpm][p][r][1]) )
        thefile.write( "\n" )
    thefile.close()

################################################################################

