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
                x_start = x
                y_start = y
                x_previous = x
                y_previous = y
            
            if (x_start == -999 or y_start == -999):
                continue
                
            L = math.sqrt( (x-x_start)*(x-x_start) + 
                           (y-y_start)*(y-y_start) )
            
            z_diff = z - z_ring3
    
            # do not care about the STARTing point(s)
            if (L > 0):
                #print name, L, z
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
# parser = optparse.OptionParser()
# 
# # define the options
# parser.add_option('-f', '--folder',
#                   help='specify the folder',
#                   dest='FOLDER',
#                   action='store')
# 
# parser.add_option('-s', '--save',
#                   help='save the plots',
#                   dest='SAVE',
#                   default = False, 
#                   action = 'store_true')
# 
# parser.add_option('-b', '--batch',
#                   help='do not show the plots',
#                   dest='BATCH',
#                   default = False, 
#                   action = 'store_true')
# 
# # get the options
# (opts, args) = parser.parse_args()
# 
# 
# # Sanity check: Making sure all mandatory options appeared
# mandatories = ['FOLDER']
# for m in mandatories:
#     if not opts.__dict__[m]:
#         print "at least the mandatory option %s is missing\n" % m
#         parser.print_help()
#         exit(-1)
# 

#folder = "PSB-PS/2014/out/"
#folder = "test_bt_btp_strengths"
#folder = "test_bt_dump_strengths"
#folder = "test_bt_hor_emit_largeDx"
folder = "test_bt_hor_emit_smallDx"

BT_lines = ["BT1","BT2","BT3","BT4"]

colors   = {}
colors["BT1"] = root.kRed   +2
colors["BT2"] = root.kAzure +2
colors["BT3"] = root.kGreen +2
colors["BT4"] = root.kOrange+2

BT_graphs = []

for BT in BT_lines:
    
    survey_file = open(folder + ('/%s.survey' % BT) , 'r')
    graph = getSurveyData(survey_file)    


    #print len(line_length), len(line_height)

    graph.SetLineWidth  (3)
    graph.SetLineColor  (colors[BT])
    graph.SetMarkerColor(colors[BT])
    graph.SetFillColor  (colors[BT])
    
    BT_graphs.append( graph )

canvas = root.TCanvas("canvas","",0,0,1100,850)
canvas.cd()
    
canvas.SetGridx()
canvas.SetGridy()

z_ring3 = 2433.660000 

# BT4 is +360 mm w.r.t. ring 3
# BT2 is -360 mm w.r.t. ring 3
# BT1 is -720 mm w.r.t. ring 3
# So just to fit the 4 lines in one graph I move 1 (0.5) m below (above) ring 3 
BT_graphs[0].GetYaxis().SetRangeUser(z_ring3-1,z_ring3+0.5)

BT_graphs[0].SetTitle ("BT Lines")
BT_graphs[0].Draw("AL")
BT_graphs[1].Draw("L")
BT_graphs[2].Draw("L")
BT_graphs[3].Draw("L")
    
canvas.Update()
