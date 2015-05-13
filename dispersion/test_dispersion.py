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

    graph_x.GetXaxis().SetTitle("s_pos [m]")
    graph_y.GetXaxis().SetTitle("s_pos [m]")

    graph_x.GetYaxis().SetTitle("horizontal dispersion [m]")
    graph_y.GetYaxis().SetTitle(  "vertical dispersion [m]")

    return graph_x, graph_y



def getGraphDATA(filename):

    
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

        graph_x.SetPoint( id, float(s[id]),  float(x[id])/1000.)
        graph_x.SetPointError( id, float(0), float(x_err[id])/1000.)

        graph_y.SetPoint( id, float(s[id]),  float(y[id])/1000.)
        graph_y.SetPointError( id, float(0), float(y_err[id])/1000.)

        id += 1
    
    graph_x.SetMarkerStyle(20)
    graph_y.SetMarkerStyle(20)

    return graph_x, graph_y


################################################################################



folder = './'

gDisp_x,gDisp_y  = getGraphMADX('ltltbbi1_dispersions.out')

root.SetOwnership(gDisp_x,False)
root.SetOwnership(gDisp_y,False)


gDispData_x,gDispData_y = getGraphDATA('dispersion_data_1')

root.SetOwnership(gDispData_x,False)
root.SetOwnership(gDispData_y,False)


gDispData_2014_x,gDispData_2014_y = getGraphDATA('dispersion_data_2014')

root.SetOwnership(gDispData_2014_x,False)
root.SetOwnership(gDispData_2014_y,False)

gDispData_2014_x.SetMarkerStyle(23)
gDispData_2014_y.SetMarkerStyle(23)

gDispData_2014_x.SetMarkerColor(root.kGreen+2)
gDispData_2014_y.SetMarkerColor(root.kGreen+2)




canvas_x = root.TCanvas("canvas_x","",0,0,1100,850)
canvas_x.cd()

gDisp_x.Draw("AL")
gDispData_x.Draw("P")
gDispData_2014_x.Draw("P")

title_x = root.TLatex(40,8, "Horizontal Dispersion" )
title_x.SetTextFont(42)
title_x.Draw()

#leg = root.TLegend(0.15, 0.71, 0.65, 0.88)

leg = root.TLegend(0.40, 0.71, 0.75, 0.88)
leg.SetBorderSize(1)
leg.SetFillColor(0)
leg.SetTextSize(0.025)

# trick to have the legend not disappearing
SetOwnership( leg, 0 )   # 0 = release (not keep), 1 = keep, ot

leg.AddEntry(gDispData_x,      " Measured Dispersion (2015)", "p")
leg.AddEntry(gDispData_2014_x, " Measured Dispersion (2014)", "p")
leg.AddEntry(gDisp_x,          " MADX Sim 2014",              "l")

leg.Draw()

hor_line = root.TLine(0,0,140,0)
hor_line.SetLineStyle(3)
hor_line.Draw()

canvas_y = root.TCanvas("canvas_y","",800,0,1100,850)
canvas_y.cd()

gDisp_y.Draw("AL")
gDispData_y.Draw("P")
gDispData_2014_y.Draw("P")

title_y = root.TLatex(40,4, "Vertical Dispersion" )
title_y.SetTextFont(42)
title_y.Draw()

leg.Draw()
