#! /usr/bin/python

import os
import commands
import random
import math

import ROOT as root
root.gStyle.SetOptStat(0)
from ROOT import SetOwnership

#from ROOT import SetMemoryPolicy, kMemoryStrict
#SetMemoryPolicy( kMemoryStrict )

# root.gROOT.SetBatch(True) 


################################################################################
# LOCAL DEFINITIONS
################################################################################

def getGraphMADX(filename):

    
    if not os.path.isfile(filename):
        print 'ERROR(getGraphMADX) %s does not exist' % filename
        exit(1)

    thefile = open(filename, 'r')
    
    vetos = ('@','#','*','$','DRIFT','START','END')     

    ele = []
    s   = [] 
    x   = []
    y   = []

    for line in thefile:
        if not any(veto in line for veto in vetos): 

            info = line.split()

            ele . append( info[0] )
            s   . append( info[1] ) 
            x   . append( info[2] )
            y   . append( info[3] )
            
            #print info[0], info[1], info[2], info[3]   

    graph_x = root.TGraph( len(ele) )
    graph_y = root.TGraph( len(ele) )

    id = 0
    for e in ele:

        value = -999

        graph_x.SetPoint( id, float(s[id]), -1*float(x[id]))
        graph_y.SetPoint( id, float(s[id]), float(y[id]))

        id += 1
    
    graph_x.SetMarkerStyle(20)
    graph_y.SetMarkerStyle(20)

    graph_x.SetLineColor(root.kRed+2)
    graph_x.SetLineStyle(1)
    graph_x.SetLineWidth(3)

    graph_y.SetLineColor(root.kRed+2)
    graph_y.SetLineStyle(1)
    graph_y.SetLineWidth(3)

    graph_x.SetTitle()
    graph_y.SetTitle()

    graph_x.GetXaxis().SetTitle("MADX \"s position\" [m]")
    graph_y.GetXaxis().SetTitle("MADX \"s position\" [m]")

    graph_x.GetXaxis().SetTitleOffset(1.2)
    graph_y.GetXaxis().SetTitleOffset(1.2)

    graph_x.GetYaxis().SetTitle("horizontal dispersion [m]")
    graph_y.GetYaxis().SetTitle(  "vertical dispersion [m]")

    return graph_x, graph_y



def getGraphDATA(filename,scale_factor):

    
    if not os.path.isfile(filename):
        print 'ERROR(getGraphDATA) %s does not exist' % filename
        exit(1)

    thefile = open(filename, 'r')
    
    vetos = ('#')     

    ele   = []
    s     = [] 
    x     = []
    x_err = []
    y     = []
    y_err = []

    for line in thefile:
        if not any(veto in line for veto in vetos): 

            info = line.split()
            #print info
            
            ele   . append( info[0] )
            s     . append( info[1] ) 
            x     . append( info[2] )
            x_err . append( info[3] )
            y     . append( info[4] )
            y_err . append( info[5] )
            

    graph_x = root.TGraphErrors( len(ele) )
    graph_y = root.TGraphErrors( len(ele) )

    id = 0
    for e in ele:

        value = -999

        graph_x.SetPoint( id, float(s[id]),  float(x[id])/scale_factor)
        graph_x.SetPointError( id, float(0), float(x_err[id])/scale_factor)

        graph_y.SetPoint( id, float(s[id]),  float(y[id])/scale_factor)
        graph_y.SetPointError( id, float(0), float(y_err[id])/scale_factor)

        id += 1
    
    graph_x.SetMarkerStyle(20)
    graph_y.SetMarkerStyle(20)

    return graph_x, graph_y


################################################################################
# Options
################################################################################

import optparse
parser = optparse.OptionParser()

# define the options
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

# go in batch mode if needed
if (opts.BATCH):
    root.gROOT.SetBatch(True) 


################################################################################
# MAIN
################################################################################

gDisp_x,gDisp_y  = getGraphMADX('ltltbbi1_dispersions.out')

root.SetOwnership(gDisp_x,False)
root.SetOwnership(gDisp_y,False)


gDispData_x,gDispData_y = getGraphDATA('dispersion_data_1',1000.)

root.SetOwnership(gDispData_x,False)
root.SetOwnership(gDispData_y,False)

gDispData_x.SetLineColor(1)
gDispData_x.SetLineStyle(1)
gDispData_x.SetLineWidth(3)


gDispData_2014_x,gDispData_2014_y = getGraphDATA('dispersion_data_2014',1000.)

root.SetOwnership(gDispData_2014_x,False)
root.SetOwnership(gDispData_2014_y,False)

gDispData_2014_x.SetMarkerStyle(23)
gDispData_2014_y.SetMarkerStyle(23)

gDispData_2014_x.SetMarkerColor(root.kGreen+2)
gDispData_2014_y.SetMarkerColor(root.kGreen+2)

gDispData_2014_x.SetLineColor(root.kGreen+2)
gDispData_2014_x.SetLineStyle(1)
gDispData_2014_x.SetLineWidth(3)

gDispData_t3d_x,gDispData_t3d_y = getGraphDATA('dispersion_t3d',-1.)

root.SetOwnership(gDispData_t3d_x,False)
root.SetOwnership(gDispData_t3d_y,False)

gDispData_t3d_x.SetMarkerStyle(23)
gDispData_t3d_x.SetMarkerColor(root.kAzure+2)
gDispData_t3d_x.SetLineColor(root.kAzure+2)
gDispData_t3d_x.SetLineWidth(3)
gDispData_t3d_x.SetLineStyle(2)


gDispData_path_x,gDispData_path_y = getGraphDATA('dispersion_path',-0.000017)

root.SetOwnership(gDispData_path_x,False)
root.SetOwnership(gDispData_path_y,False)

gDispData_path_x.SetMarkerStyle(23)
gDispData_path_x.SetMarkerColor(root.kOrange+2)
gDispData_path_x.SetLineColor(root.kOrange+2)
gDispData_path_x.SetLineWidth(3)
gDispData_path_x.SetLineStyle(2)




canvas_x = root.TCanvas("canvas_x","",0,0,1100,850)
canvas_x.cd()

gDisp_x.Draw("AL")
gDispData_x.Draw("P")
gDispData_2014_x.Draw("P")
gDispData_t3d_x.Draw("L")
#gDispData_path_x.Draw("L")

title_x = root.TLatex(35,4, "Horizontal Dispersion (Ring 1)" )
title_x.SetTextFont(42)
title_x.Draw()

#leg = root.TLegend(0.15, 0.71, 0.65, 0.88)

leg = root.TLegend(0.40, 0.71, 0.75, 0.88)
leg.SetBorderSize(1)
leg.SetFillColor(0)
leg.SetTextSize(0.025)

# trick to have the legend not disappearing
SetOwnership( leg, 0 )   # 0 = release (not keep), 1 = keep, ot

leg.AddEntry(gDispData_x,      " Measured Dispersion (2015)",  "lp")
leg.AddEntry(gDispData_2014_x, " Measured Dispersion (2014)",  "lp")
leg.AddEntry(gDispData_t3d_x,  " Trace 3D Sim" ,               "l")
leg.AddEntry(gDisp_x,          " MADX Simulation (2014 Model)","l")

leg.Draw()

hor_line = root.TLine(0,0,140,0)
hor_line.SetLineStyle(3)
hor_line.Draw()


if (opts.SAVE):
    canvas_x.SaveAs("png/horizontal_dispersion_r1.png")
