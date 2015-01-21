#! /usr/bin/python

import sys
sys.path.append('../')
from helpers import *

import csv

################################################################################
# Useful local definitions
def getSurveyData(survey_file):
    
    print "\n============================================================="
    x_start = -999
    y_start = -999
    x_previous = -999
    y_previous = -999
    z_ring3 = 2433.660000
    
    line_length = array ('d')
    line_height = array ('d')
    
    
    vetos = ('@','#','*','%')
    for line in survey_file:
        if not any(veto in line for veto in vetos):
    
            survey_data = line.split()
            
            name = survey_data[0]
            x = float(survey_data[3])
            y = float(survey_data[4])
            z = float(survey_data[5])
            
            if ("START" in name):
                if (x_start == -999 and y_start == -999):
                    x_start = x
                    y_start = y
                    x_previous = x
                    y_previous = y
                else:
                    continue

            if (x_start == -999 or y_start == -999):
                continue
                
            L = math.sqrt( (x-x_start)*(x-x_start) + 
                           (y-y_start)*(y-y_start) )
            
            z_diff = z - z_ring3
    
            # do not care about the STARTing point(s)
            if (L > 0):
                # print name, L, z
                line_length.append(L)
                line_height.append(z)
            
            if ("BPM" in name):
                # calculate mid-point
                x_mid = (x+x_previous)/2.
                y_mid = (y+y_previous)/2.
    
                L_mid = math.sqrt( (x_mid-x_start)*(x_mid-x_start) + 
                                   (y_mid-y_start)*(y_mid-y_start) )
    
                print name, L, L_mid, z_diff
    
            x_previous = x
            y_previous = y
            
            # exit at the first element representing the END of the line    
            if ("END" in name):
                continue

    graph = root.TGraph( len(line_length), line_length, line_height)
    return graph

################################################################################


# MAIN

# for the options
import commands
import math
from array import array

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
        print "\nExamples: python -i ./bpms_offsets.py -f PSB-PS/2014/out/"
        print   "          python -i ./bpms_offsets.py -f Linac2-PSB/2014/out/\n"
        parser.print_help()
        exit(-1)

if (opts.BATCH):
    root.gROOT.SetBatch(True)

#folder = "PSB-PS/2014/out/"
#folder = "Linac2-PSB/2014/out/"

folder = opts.FOLDER

rings = ["1","2","3","4"]

colors   = {}
colors["1"] = root.kRed   +2
colors["2"] = root.kAzure +2
colors["3"] = root.kGreen +2
colors["4"] = root.kOrange+2

r_graphs = []
title_graph = ""
save_name = ""

for r in rings:
    
    # unfortunately there is a different convention for the naming of the 
    # transfer line files...
    survey_file = ""
    if ("PSB-PS" in folder):
        survey_file = open(folder + ('/BT%s.survey'   % r) , 'r')
        title_graph = "BT Lines"
        save_name   = "BT_Lines"
    if ("Linac2-PSB" in folder):
        survey_file = open(folder + ('/ltltbbi%s.sur' % r) , 'r')
        title_graph = "LT-LTB-BI Lines"
        save_name   = "LT-LTB-BI_Lines"
        
    if (survey_file == ""):
        print "the folder was not properly defined"
        exit(-1)

    graph = getSurveyData(survey_file)    


    #print len(line_length), len(line_height)

    graph.SetLineWidth  (3)
    graph.SetLineColor  (colors[r])
    graph.SetMarkerColor(colors[r])
    graph.SetFillColor  (colors[r])
    
    r_graphs.append( graph )

canvas = root.TCanvas("canvas","",0,0,1200,850)
canvas.cd()
    
canvas.SetGridx()
canvas.SetGridy()

z_ring3 = 2433.660000 

# r4 is +360 mm w.r.t. ring 3
# r2 is -360 mm w.r.t. ring 3
# r1 is -720 mm w.r.t. ring 3
# So just to fit the 4 lines in one graph I move 1 (0.5) m below (above) ring 3 
r_graphs[0].GetYaxis().SetRangeUser(z_ring3-1,z_ring3+0.5)
r_graphs[0].GetYaxis().SetTitle("Vertical Position [mm]")
r_graphs[0].GetYaxis().SetTitleOffset(1.5)

r_graphs[0].GetXaxis().SetTitle("Longitudinal Position [mm]")
r_graphs[0].GetXaxis().SetTitleOffset(1.2)

r_graphs[0].SetTitle (title_graph)

r_graphs[0].Draw("AL")
r_graphs[1].Draw("L")
r_graphs[2].Draw("L")
r_graphs[3].Draw("L")
    
canvas.Update()

if (opts.SAVE):
    canvas.SaveAs( "png/"+save_name+".png" )    
    canvas.SaveAs("root/"+save_name+".root")
