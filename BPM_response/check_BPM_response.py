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


################################################################################
# LOCAL DEFINITIONS
################################################################################

def getId(catEntry):
    return int(catEntry.split()[2])

def getDict(file):
    
    #the_dict = {}
    the_dict = ordered_dict()

    vetos = ('@','#','*','logical')
    for line in file:
        if not any(veto in line for veto in vetos): 
            #print line.split()
            info = line.split()
            
            #print the_dict.keys()
            if (info[0] not in the_dict.keys()):
                the_dict[info[0]] = {}
                
            if (info[1] not in the_dict[info[0]].keys()):
                the_dict[info[0]][info[1]] = {}

            the_dict[info[0]][info[1]][info[2]] = info[3]
            #[info[1]][info[2]] = info[3]

    #print the_dict.order()
    #print the_dict['LT.BPM10']['H']['1']
    #print the_dict['LTB.BPM10']['H']['1']
    #print the_dict['BI.BPM10']['H']['1']
    return the_dict        


def diffGraphs(gVar, gRef):
    # sanity check
    if gVar.GetN() != gRef.GetN():
        print "ERROR (diffGraphs): graphs have different number of points"
        exit(-1)
    
    n_points = gVar.GetN()
    gDiff = root.TGraph( n_points )
    
    for i in range(0,n_points):
        xVar, yVar = root.Double(0), root.Double(0)
        xRef, yRef = root.Double(0), root.Double(0)
        
        gVar.GetPoint(int(i), xVar, yVar)
        gRef.GetPoint(int(i), xRef, yRef)

        gDiff.SetPoint(int(i), xVar, yVar-yRef)

    return gDiff


def getEle(dictionary, plane, ring):
    
    return ele 


def getDummyHisto(ele, plane, ring):

    hDummy = root.TH1F( "h_"+plane+"_"+ring,"", len(ele), 0, len(ele) )

    if (plane == 'H'):
        hDummy.GetYaxis().SetTitle("horizontal displacement [mm]")
    if (plane == 'V'):
        hDummy.GetYaxis().SetTitle("vertical displacement [mm]")

    id = 0
    for e in ele:
        hDummy.GetXaxis().SetBinLabel( id+1, e )
        # hDummy.GetXaxis().LabelsOption("v")
        id += 1

    return hDummy


def getMax(graph):

   max = 0
   n_points = graph.GetN()

   for i in range(n_points):
       x, y = root.Double(0), root.Double(0)
       graph.GetPoint(int(i), x, y)
       
       if max < math.fabs(y):
           max = math.fabs(y)
   
   return max
   
def getGraph(dictionary, plane, ring, ele):

    graph = root.TGraph( len(ele) )

    id = 0
    for e in ele:

        value = float( dictionary[e][plane][ring] ) # [micron]       

        graph.SetPoint(id,float(id+0.5),value/1000.) # value in [mm]

        id += 1
    
    graph.SetMarkerStyle(20)

    return graph


def getGraphAverage(listOfGraphs): 
    #print listOfGraphs

    n_points = 0
    y_mean = []
    y_rms  = []
    
    # first sanity checks... and some initialization
    for id in listOfGraphs.keys():
        
        graph = listOfGraphs[id]
        if n_points == 0:
            n_points = graph.GetN()

        if n_points != graph.GetN():
            print 'ERROR (getGraphAverage): different number of points in the graphs'
            exit(1)

        #print listOfGraphs[id]

    # calculate the y_mean for each point
    for i in range(0,n_points):
        
        mean_value = 0
        for id in listOfGraphs.keys():
        
            graph = listOfGraphs[id]
        
            x, y = root.Double(0), root.Double(0)
            graph.GetPoint(int(i), x, y)
            #print x,y
            
            mean_value += y/len(listOfGraphs.keys())
            
        #print mean_value   
        y_mean . append ( mean_value )

#    print y_mean 

    # calculate the RMS w.r.t. the mean/sqrt(n) (standard deviation)
    for i in range(0,n_points):
        
        rms_value = 0
        for id in listOfGraphs.keys():
        
            graph = listOfGraphs[id]
        
            x, y = root.Double(0), root.Double(0)
            graph.GetPoint(int(i), x, y)
            #print x,y
            
            rms_value += root.TMath.Power(y - y_mean[i], 2) 
            rms_value /= len(listOfGraphs.keys()) 
            
            
        #print mean_value   
        y_rms . append ( root.TMath.Sqrt(rms_value) )
    
#    print y_rms

    # construct the average graph +/- rms
    graphAverage = root.TGraphErrors( n_points )

    for i in range(0,n_points):
        
        # just to get the x-axis
        graph = listOfGraphs[0]
        x, y = root.Double(0), root.Double(0)
        graph.GetPoint(int(i), x, y)
        
        graphAverage.SetPoint     ( int(i), x, y_mean[i] )
        graphAverage.SetPointError( int(i), 0, y_rms [i] )
        
#        print y_mean[i], y_rms[i]
    
    return graphAverage



def getGraphMADX(folder, corr, kick, plane, ring, sim):

    filename_p = ''
    filename_m = ''

    if ('LT' in corr or 'BI' in corr):
        filename_p = 'kr_ltltbbi%s_%s_plus.out'  % (ring, corr.lower() )
        filename_m = 'kr_ltltbbi%s_%s_minus.out' % (ring, corr.lower() )
    else:
        filename_p = 'kr_bt%s_btp_%s_plus.out'  % (ring, corr.lower() )
        filename_m = 'kr_bt%s_btp_%s_minus.out' % (ring, corr.lower() )
    
    file_p = folder + filename_p
    file_m = folder + filename_m

    if not os.path.isfile(file_p):
        print 'ERROR(getGraphMADX) %s does not exist' % file_p
        exit(1)

    if not os.path.isfile(file_m):
        print 'ERROR(getGraphMADX) %s does not exist' % file_m
        exit(1)

    ele_p = []
    ele_m = []

    x_p = []
    x_m = []

    y_p = []
    y_m = []
    
    if ('2014' in str(sim)):
        ele_p = commands.getoutput('cat %s | grep BPM | awk \'{print $1}\'' % file_p).replace("\"","").split()
        ele_m = commands.getoutput('cat %s | grep BPM | awk \'{print $1}\'' % file_m).replace("\"","").split()

        x_p = commands.getoutput('cat %s | grep BPM | awk \'{print $3}\'' % file_p).split()
        x_m = commands.getoutput('cat %s | grep BPM | awk \'{print $3}\'' % file_m).split()
                                                                               
        y_p = commands.getoutput('cat %s | grep BPM | awk \'{print $4}\'' % file_p).split()
        y_m = commands.getoutput('cat %s | grep BPM | awk \'{print $4}\'' % file_m).split()

    if ('2011' in str(sim)):
        ele_p = commands.getoutput('cat %s | grep UMA | awk \'{print $1}\'' % file_p).replace("\"","").split()
        ele_m = commands.getoutput('cat %s | grep UMA | awk \'{print $1}\'' % file_m).replace("\"","").split()

        x_p = commands.getoutput('cat %s | grep UMA | awk \'{print $3}\'' % file_p).split()
        x_m = commands.getoutput('cat %s | grep UMA | awk \'{print $3}\'' % file_m).split()
                                                                               
        y_p = commands.getoutput('cat %s | grep UMA | awk \'{print $4}\'' % file_p).split()
        y_m = commands.getoutput('cat %s | grep UMA | awk \'{print $4}\'' % file_m).split()

    #print x_p, x_m
    if ele_p != ele_m:
        print "ERROR (getGraphMADX): graphs have different number of points"
        exit(-1)


    graph = root.TGraph( len(ele_p) )

    id = 0
    for e in ele_p:

        value = -999

        # ask KAJETAN
        if (plane == "H"):
            value = float(x_p[id])-float(x_m[id]) # [m]       
        if (plane == "V"):
            value = float(y_p[id])-float(y_m[id]) # [m]       

        graph.SetPoint(id,float(id+0.5),value*1000.)

        id += 1
    
    graph.SetMarkerStyle(20)

    # return both the graph and the list of elements
    return graph, ele_p


def showAllPlotsInDict(listOfGraphs, hAxes, cDebug): 
    #print listOfGraphs

    cDebug.cd()

    color = 0 # black

    hAxes.Draw("")

    leg = root.TLegend(0.15, 0.71, 0.35, 0.88)
    leg.SetBorderSize(1)
    leg.SetFillColor(0)
    # trick to have the legend not disappearing
    SetOwnership( leg, 0 )   # 0 = release (not keep), 1 = keep, ot

    for graph in listOfGraphs:
        
        color += 1
        leg.AddEntry( graph, "Kick Response Meas #%d" % color, "lp")
        
        # skip the color white
        if (color == 10):
            color = 11
        graph.SetLineColor  ( color )
        graph.SetMarkerColor( color )
        graph.SetMarkerStyle(20)
        
        graph.Draw("LP")
    
    leg.Draw()    

    cDebug.Update()


def getCatalog(folder,corr):
    
    if not os.path.isdir(folder):
        catalog_plus  = ''        
        catalog_minus = ''
        
        print 'ERROR: DATA folder %s does not exist: the plots will not have data point' % folder
        exit(1)

    catalog_plus  = commands.getoutput("ls %s | grep -i %s | grep  plus" % (folder, corr) ).split()
    catalog_minus = commands.getoutput("ls %s | grep -i %s | grep minus" % (folder, corr) ).split()
    
    if len(catalog_plus)==0:
        print "ERROR (getCatalog): no positive kick response measurements"
        exit(1)

    if len(catalog_minus)==0:
        print "ERROR (getCatalog): no negative kick response measurements"
        exit(1)

    if len(catalog_plus)!=len(catalog_minus):
        print "ERROR (getCatalog): different number of positive and negative kick response measurements"
        print "len(catalog_plus)=%d" % len(catalog_plus)
        print "len(catalog_minus)=%d" % len(catalog_minus)
        exit(1)
        
    return catalog_plus,catalog_minus


################################################################################


################################################################################
# for the options
################################################################################

import optparse
parser = optparse.OptionParser()

# define the options
parser.add_option('-f', '--folder',
                  help='specify which folder contains the data',
                  dest='DATAFOLDER',
                  action='store')

parser.add_option('-c', '--corr',
                  help='specify which corrector of the line',
                  dest='CORR',
                  action='store')

parser.add_option('-r', '--ring',
                  help='specify which corrector of the line',
                  dest='RING',
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
mandatories = ['DATAFOLDER','CORR']
for m in mandatories:
    if not opts.__dict__[m]:
        print "at least the mandatory option %s is missing\n" % m
        parser.print_help()
        print 'examples:'
        print 'python -i check_BPM_response.py -f MD_LHC50_YASP/ -c LT.DHZ20'
        print 'python -i check_BPM_response.py -f MD_LHC50_YASP/ -c LT.DHZ20 -b -s'
        print 'python -i check_BPM_response.py -f MD_LHC50_YASP/ -c LT.DHZ20 -r 3'
        exit(-1)
################################################################################


# go in batch mode if needed
if (opts.BATCH):
    root.gROOT.SetBatch(True) 


corr   = opts.CORR

rings_corr_map = {}

# LT/LTB/BI line horizontal
rings_corr_map['LT.DHZ10']  =  ['1','2','3','4']   #['3']    
rings_corr_map['LT.DHZ20']  =  ['1','2','3','4']   #['3']  
rings_corr_map['LT.DHZ30']  =  ['1','2','3','4']   #['3']  
rings_corr_map['LT.DHZ40']  =  ['1','2','3','4']   #['3']  
rings_corr_map['LT.DHZ50']  =  ['1','2','3','4']   #['3']  
                                                           
rings_corr_map['LTB.DHZ10'] =  ['1','2','3','4']   #['3']  
rings_corr_map['LTB.DHZ20'] =  ['1','2','3','4']   #['3']  
rings_corr_map['LTB.DHZ30'] =  ['1','2','3','4']   #['3']  
rings_corr_map['LTB.DHZ40'] =  ['1','2','3','4']   #['3']  
                                                           
rings_corr_map['BI.DHZ10']  =  ['1','2','3','4']   #['3']  
rings_corr_map['BI.DHZ20']  =  ['1','2','3','4']   #['3']  
rings_corr_map['BI.DHZ30']  =  ['1','2','3','4']   #['3']  
rings_corr_map['BI.DHZ40']  =  ['1','2','3','4']   #['3']  
                                                           
# LT/LTB/BI line vertical                                  
rings_corr_map['LT.DVT10']  =  ['1','2','3','4']   #['3']  
rings_corr_map['LT.DVT20']  =  ['1','2','3','4']   #['3']  
rings_corr_map['LT.DVT30']  =  ['1','2','3','4']   #['3']  
rings_corr_map['LT.DVT40']  =  ['1','2','3','4']   #['3']  
rings_corr_map['LT.DVT50']  =  ['1','2','3','4']   #['3']  
                                                           
rings_corr_map['LTB.DVT10'] =  ['1','2','3','4']   #['3']  
rings_corr_map['LTB.DVT20'] =  ['1','2','3','4']   #['3']  
rings_corr_map['LTB.DVT30'] =  ['1','2','3','4']   #['3']  
rings_corr_map['LTB.DVT40'] =  ['1','2','3','4']   #['3']  
                                                           
rings_corr_map['BI.DVT10']  =  ['1','2','3','4']   #['3']  
rings_corr_map['BI.DVT20']  =  ['1','2','3','4']   #['3']  
rings_corr_map['BI.DVT30']  =  ['1','2','3','4']   #['3']  
rings_corr_map['BI.DVT40']  =  ['1','2','3','4']   #['3']  


# BT1 line
rings_corr_map['BT1.DHZ10']  = ['1']

# BT2 line
rings_corr_map['BT2.DVT40']  = ['1','2']

rings_corr_map['BT2.DHZ10']  = ['2']
rings_corr_map['BT2.DVT10']  = ['2']
rings_corr_map['BT2.DVT20']  = ['2']

# BT3 line
rings_corr_map['BT3.DHZ10']  = ['3']
rings_corr_map['BT3.DVT10']  = ['3']
rings_corr_map['BT3.DVT20']  = ['3']

rings_corr_map['BT3.DVT30']  = ['3','4']
rings_corr_map['BT3.DVT40']  = ['3','4']

# BT4 line
rings_corr_map['BT4.DHZ10']  = ['4']

# BT line
rings_corr_map['BT.DVT50']  = ['1','2','3','4']
rings_corr_map['BT.DVT60']  = ['1','2','3','4']

# BTP line
rings_corr_map['BTP.DHZ10']  = ['3']
rings_corr_map['BTP.DHZ20']  = ['3']
rings_corr_map['BTP.DHZ30']  = ['3']

rings_corr_map['BTP.DVT10']  = ['3']
rings_corr_map['BTP.DVT20']  = ['3']
rings_corr_map['BTP.DVT30']  = ['3']
rings_corr_map['BTP.DVT40']  = ['3']

rings = rings_corr_map[corr]

if (opts.RING):
    rings = opts.RING

################################################################################


# list of folders
folders = commands.getoutput('ls %s | grep RM ' % opts.DATAFOLDER).split()


planes = []
if ('DHZ' in corr):
 planes = ['H']
if ('DVT' in corr):
 planes = ['V']


## since the folder list can be mixed, I need to order the data for kicker
## strength. Remember that any folder will contain one kick plus and one minus,
## so we will have number of points which are twice the numbers of folders
kick_array = [] 
for folder in folders:
    kick = float( folder.split(".")[1] )
    kick_array.append(kick)
    kick_array.append(-kick)

kick_array = sorted(kick_array)
#print kick_array
#print kick_array.index(700)

unitOfMeasure = None

dict_graphs = {}

for folder in folders:

    folder = opts.DATAFOLDER + "/" + folder

    #print folder
    # preliminary information
    kick = float( folder.split(".")[1] )

    if (unitOfMeasure is None):
        unitOfMeasure = folder.split(".")[2]
    
    if (unitOfMeasure != folder.split(".")[2]):
        print '\nERROR at %s' % folder
        print 'ERROR: change of unit of measure: do not mix folders!\n'
        exit(-1)

#    print kick, unitOfMeasure

    # get the catalogs. In general this could contains more measurements
    # The catalog is essentially the list of files in a folder corresponding 
    # to a given corrector kick
    catalog_plus,catalog_minus = getCatalog(folder, corr) 

#    print catalog_plus

    for filename in catalog_plus:
        
        filename_p = folder + '/' + filename
        filename_m = filename_p.replace('plus','minus')
        
        file_p = open(filename_p, 'r')
        file_m = open(filename_m, 'r')

        dict_plus  = getDict(file_p)
        dict_minus = getDict(file_m)
        
        file_p.close()
        file_m.close()
        
#        print "\n\n\n\n",filename_p
#        print dict_plus
        
        for p in planes:
            for r in rings:
#                print p, r

                bpms_list = commands.getoutput('grep BPM %s | grep \'%s %s\' | awk \'{print $1}\'' % (filename_p,p,r) ).split('\n')
#                print bpms_list
#                continue

                if (p not in dict_graphs.keys()):
                    dict_graphs[p]     = {}

                if (r not in dict_graphs[p].keys()):
                    dict_graphs[p][r]  = {}

                file_id = catalog_plus.index( filename )
#                print file_id

                for bpm in bpms_list:
                    
                    #print bpm
                    #print bpms_list.index( bpm )
                    #print dict_graphs[p][r].keys()

                    if (bpm not in dict_graphs[p][r].keys()):
                        dict_graphs[p][r][bpm]  = {}

                    if (bpm in dict_graphs[p][r].keys()) and (file_id not in dict_graphs[p][r][bpm].keys()):
                        graph = root.TGraph( len(kick_array) )
                        graph.SetName("g%s_%s_%s_%s" % (bpm,p,r,file_id) )
                        root.SetOwnership(graph,False)
                        dict_graphs[p][r][bpm][file_id]  = graph

                    #if (kick == 100 and bpm=='LT.BPM50'):    
                    #    print  kick_array.index(kick),     bpm,     kick, float(  dict_plus[bpm][p][r] ) # [micron]       
                    #    print  kick_array.index(-1.*kick), bpm, -1.*kick, float( dict_minus[bpm][p][r] ) # [micron]       
                    dict_graphs[p][r][bpm][file_id].SetPoint(kick_array.index(kick),        kick,float(  dict_plus[bpm][p][r] )/1000.)
                    dict_graphs[p][r][bpm][file_id].SetPoint(kick_array.index(-1.*kick),-1.*kick,float( dict_minus[bpm][p][r] )/1000.)


#print  dict_graphs
#print dict_graphs['V']['1']['LT.BPM10']
#dict_graphs['V']['1']['LT.BPM10'][4].Draw("ALP")

#print dict_graphs['V']['1']['BI1.BPM40'].keys()

# EXITING!!!
#exit(0)

#################################################################################
# PLOT THE BPM RESPONSES
#################################################################################

trans_lines = ['LT', 'LTB', 'BI']
colors = [root.kAzure+2,root.kGreen+2,root.kRed,root.kViolet,root.kBlack,root.kCyan,root.kBlue]

canvases = []

for p in planes:
    for r in rings:
        
        # Options for the canvases
        x_step = 800
        y_step = 600
        x_pos = 0
        y_pos = 0

        if (int(r)%2 == 0):
            x_pos += x_step
        if (int(r) > 2):
            y_pos += y_step

#        print '\n##################### RING %s #####################'   % r 
#        print   '#################### PLANE %s #####################\n' % p 

#        for tl in trans_lines:
            
#        canvas = root.TCanvas("canvas_"+tl+'_'+p+'_'+r,"",x_pos,y_pos,1100,850)

        bpms_list = commands.getoutput('grep BPM %s | grep \'%s %s\' | awk \'{print $1}\'' % (filename_p,p,r) ).split('\n')
        #print bpms_list
           
        for bpm in bpms_list:#dict_graphs[p][r].keys():
##            if (tl+'.' in bpm) and (bpm in dict_graphs[p][r].keys()):
##                    print "\n",bpm
                    

            canvas = root.TCanvas("canvas_"+bpm+"_"+p+'_'+r,"",x_pos,y_pos,1100,850)
            canvas.cd()

            canvas.SetGridx()
            canvas.SetGridy()

            is_first = True
            iColor   = 0

            leg = root.TLegend(0.075, 0.860, 0.240, 0.94)
            leg.SetBorderSize(1)
            leg.SetFillColor(0)
            root.SetOwnership(leg,False)

            # this is the method to calculate the average...
            graph = getGraphAverage( dict_graphs[p][r][bpm] )
            SetOwnership( graph, 0 )   # 0 = release (not keep), 1 = keep, ot

            graph.SetMarkerColor( colors[iColor] )
            graph.SetLineColor  ( colors[iColor] )
            #iColor += 1

            graph.SetMarkerStyle( 20 )
            graph.SetLineWidth( 2 )
                    
            graph.SetTitle( "Corr: %s Plane: %s Ring: %s" % (corr,p,r) )
                    
            graph.GetXaxis().SetTitle( '%s, Kick [%s]' % (corr,unitOfMeasure.replace("urad","#murad")) )
            graph.GetXaxis().SetTitleOffset(1.2)

            #graph.GetYaxis().SetRangeUser(-20,20)
            graph.GetYaxis().SetTitle( 'Beam Position [mm]')

            #if is_first:
            graph.Draw("APL")
            #is_first = False
            #        else:
            #            graph.Draw("PL")

            linear_fit = root.TF1("linear_fit","[0]*x+[1]",-700,700)
            linear_fit . SetParameter(0,0.5)
            linear_fit . SetParameter(1,0.0)
            linear_fit . SetParName(0,"slope")
            linear_fit . SetParName(1,"constant")
                    
            graph.Fit("linear_fit","RQ")
                    
            slope = linear_fit.GetParameter(0)
            variable = 'X'
            if (p == 'V'):
                variable = 'Y'

            #print '(table(twiss, %s, %s) - (%+0.5f * %s->KICK))^2' % (bpm.ljust(10), variable, slope, corr)
            #print linear_fit.GetChisquare(),"/",linear_fit.GetNDF(), linear_fit.GetProb()
                    
            leg.AddEntry( graph,        "%s" % bpm, "lp")
            leg.AddEntry( linear_fit, "linear fit", "l" )
            leg.Draw()

            canvas.Update()
            canvases.append(canvas)
            
            if (opts.SAVE):
                
                if ('LT' in corr or 'BI' in corr):
                    canvas.SaveAs("plots/LTLTBBI/r%s/bpm_response_%s_%s_p%s_r%s.png"  % (r,bpm,corr,p,r) )
                    canvas.SaveAs("plots/LTLTBBI/r%s/bpm_response_%s_%s_p%s_r%s.root" % (r,bpm,corr,p,r) )
                    canvas.SaveAs("plots/LTLTBBI/r%s/bpm_response_%s_%s_p%s_r%s.C"    % (r,bpm,corr,p,r) )
        



