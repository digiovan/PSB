#! /usr/bin/python

import sys
sys.path.append('../')
from helpers import *


def getLine(lines,names,xGEODE,yGEODE,sel_list=""):
    
    #########################################################################################
    # sanity check
    if (len(names) != len(xGEODE)):
        print "ERROR: the names and \"xGEODE\" array different size! Exiting"
        return

    if (len(xGEODE) != len(yGEODE)):
        print "ERROR: the \"xGEODE\" and \"yGEODE\" arrays have different size! Exiting"
        return
    #########################################################################################

    #print lines, names, xGEODE, yGEODE


    names_E = []
    names_S = []

    x    = []
    x_E  = []
    x_S  = []

    y    = []
    y_E  = []
    y_S  = []


    # split the content in Entry and Sortie points
    for i in range( 0, len(names) ):
        
        # check the name is compliant with the list of possible naming convention
        #if not any(sel in names[i] for sel in sel_list):
        #    print names[i], "-- skip"
        #    continue

        #print names[i]

        if (names[i][-2:] == ".E"):
            if (yGEODE[i]):
                names_E.append( lines[i] + "." + names[i] )

                x_E .append( float( xGEODE[i]) )
                y_E .append( float( yGEODE[i]) )
                x   .append( float( xGEODE[i]) )
                y   .append( float( yGEODE[i]) )

        if (names[i][-2:] == ".S"):
            if (yGEODE[i]):
                names_S.append( lines[i] + "." + names[i] )

                x_S .append( float( xGEODE[i]) )
                y_S .append( float( yGEODE[i]) )
                x   .append( float( xGEODE[i]) )
                y   .append( float( yGEODE[i]) )

    # debugging        
    #print names_E
    #print x_E
    #print y_E 
    
    #print names_S
    #print x_S
    #print y_S 

    # middle point
    names_M = []
    x_M  = []
    y_M  = []

    s_start = -999
    x_start = -999
    y_start = -999
    z_start = -999

    # loop over the horizontal offsets
    for ele_E in names_E:
        
        baseName = ele_E[:-2]

        if ( baseName+".S" in names_S ):    
            
            index_E = names_E.index(baseName+".E")
            index_S = names_S.index(baseName+".S")
            
            name_array = baseName.split(".")
            baseName = name_array[0]+"."+name_array[1]+name_array[2]
            #print baseName

            names_M.append(baseName) 
            x_M .append( (float(x_E[index_E]) + float(x_S[index_S]) ) / 2. ) 
                
            if (y_E[index_E] != "" and y_S[index_S] != ""):
                y_M.append( (float(y_E[index_E]) + float(y_S[index_S]) ) / 2. ) 
                # debugging
                #print baseName, y_E[index_E], y_S[index_S],y_M[-1] 
            else:
                y_M.append( -999. ) 

            #print baseName
            is_lt_vvs10 = re.match(r"LT\.VVS10", baseName, re.I)
            if (is_lt_vvs10):          
                x_start = x_M[-1]
                y_start = y_M[-1]
                #z_start = z_M[-1]
                s_start = 0.048000 # m
            is_lt_bhz20 = re.match(r"LT\.BHZ20", baseName, re.I)
            if (is_lt_bhz20):
                
                x_start = x_S[index_S]
                y_start = y_S[index_S]
                #z_start = z_M[-1]
                s_start = 24.01200 - 1.055267849/2 + 1.048402561
#                    print ""
                    
            is_lt_bhz30 = re.match(r"LT\.BHZ30", baseName, re.I)
            if (is_lt_bhz30):
                x_start = x_S[index_S]
                y_start = y_S[index_S]
                #z_start = z_M[-1]
                s_start = 53.472856 + 1.051446528411 - 53.472856
#                    print ""

            s = root.TMath.Sqrt( (x_M[-1] - x_start)*(x_M[-1] - x_start) + 
                                 (y_M[-1] - y_start)*(y_M[-1] - y_start) )#+
                                 #(z_M[-1] - z_start)*(z_M[-1] - z_start) )
            s += s_start

            print "GEODE", baseName, s
  

    #print len(x), len(y)
    # define the graph for entry and sortie points
    graph   = root.TGraphErrors( int(len(x)) )
    for id in range( int(len(x)) ):
        graph.SetPoint     ( id, x[id], y[id] )
        graph.SetPointError( id,     0,     0 )


    # define the graph and tlatex with the middle points    
    graph_M = root.TGraphErrors( int(len(x_M)) )
    for id in range( int(len(x_M)) ):
        graph_M.SetPoint     ( id, x_M[id], y_M[id] )
        graph_M.SetPointError( id,       0,       0 )


    return graph, graph_M


def getOffset(lines,names,offsets,lonPos,sel_list="",start_point=0):
    
    #########################################################################################
    # sanity check
    if (len(names) != len(offsets)):
        print "ERROR: the names and offsets have different size! Exiting"
        return

    if (len(offsets) != len(lonPos)):
        print "ERROR: the offsets and lonPos have different size! Exiting"
        return
    #########################################################################################


    names_E = []
    names_S = []

    lpos    = []
    lpos_E  = []
    lpos_S  = []

    offs    = []
    offs_E  = []
    offs_S  = []


    # split the content in Entry and Sortie points
    for i in range( 0, len(names) ):
        
        # check the name is compliant with the list of possible naming convention
        if not any(sel in names[i] for sel in sel_list):
            #print names[i], "-- skip"
            continue

        #print names[i]

        if (names[i][-2:] == ".E"):
            if (offsets[i]):
                #print lines[i] + "." + names[i]
                names_E.append( lines[i] + "." + names[i] )
                lpos_E .append( float(  lonPos[i]) + start_point )
                offs_E .append( float( offsets[i]) )
                lpos   .append( float(  lonPos[i]) + start_point )
                offs   .append( float( offsets[i]) )

        if (names[i][-2:] == ".S"):
            if (offsets[i]):
                names_S.append( lines[i] + "." + names[i] )
                lpos_S .append( float(  lonPos[i]) + start_point )
                offs_S .append( float( offsets[i]) )
                lpos   .append( float(  lonPos[i]) + start_point )
                offs   .append( float( offsets[i]) )


    # debugging        
    #print names_E
    #print lpos_E
    #print offs_E 

    #print names_S
    #print lpos_S
    #print offs_S 

    # middle point
    names_M = []
    lpos_M  = []
    offs_M  = []


    # loop over the horizontal offsets
    for ele_E in names_E:
        
        baseName = ele_E[:-2]
        
        if ( baseName+".S" in names_S ):    
            
            index_E = names_E.index(baseName+".E")
            index_S = names_S.index(baseName+".S")
            
            name_array = baseName.split(".")
            baseName = name_array[0]+"."+name_array[1]+name_array[2]
            #print baseName

            names_M.append(baseName) 
            lpos_M .append( (float(lpos_E[index_E]) + float(lpos_S[index_S]) ) / 2. ) 
                
            if (offs_E[index_E] != "" and offs_S[index_S] != ""):
                offs_M.append( (float(offs_E[index_E]) + float(offs_S[index_S]) ) / 2. ) 
                # debugging
                #print baseName, offs_E[index_E], offs_S[index_S],offs_M[-1] 
            else:
                offs_M.append( -999. ) 

    # define the graph for entry and sortie points
    graph   = root.TGraphErrors( int(len(offs  )) )

    for id in range( int(len(offs)) ):
        graph.SetPoint     ( id, lpos[id], offs[id] )
        graph.SetPointError( id,        0,        0 )


    # define the graph and tlatex with the middle points    
    graph_M = root.TGraphErrors( int(len(offs_M)) )
    latex = []

    linear_funcs = []
    for id in range( int(len(offs_M)) ):
        graph_M.SetPoint     ( id, lpos_M[id], offs_M[id] )
        graph_M.SetPointError( id,          0,          0 )

        ele_name = root.TLatex(lpos_M[id]+2,offs_M[id],names_M[id])
        ele_name . SetTextSize(0.015)
        ele_name . SetTextColor(root.kAzure+2)
        latex.append( ele_name )
        
        # skip the last point
        if ( id == (int(len(offs_M))-1) ):
            continue
        
        slope  = (offs_M[id+1]-offs_M[id])/(lpos_M[id+1]-lpos_M[id])
        offset =  offs_M[id] - slope * lpos_M[id]

        linear_func = root.TF1("linear_func_%d" % id, "[0]*x+[1]", lpos_M[id], lpos_M[id+1]);
        linear_func.SetParameters(slope,offset)
        linear_func.SetLineColor(root.kAzure+2)
        linear_func.SetLineWidth(2)
        
        linear_funcs.append( linear_func )

    return graph, graph_M, latex, linear_funcs


################################################################################
# MAIN
################################################################################

# for the options
#import optparse
#
#
folder_madx = "./MADX/Survey/"
filename = folder_madx + '/' + 'ltltbbi3.sur'

import numpy as n

# hardcoded coming from http://project-ps-optics.web.cern.ch/project-PS-optics/cps/TransLines/Linac2-PSB/2014/sequence/lt.seq
s_start = -999
x_start = -999
y_start = -999
z_start = -999

x = []
y = []
z = []

x_drift = 0
y_drift = 0
z_drift = 0

import re

with open(filename, 'rb') as file:
    
    vetos = ('@','*','$','#','DVT','BEGLT','BEGLTB','BEGBI')
    for line in file:
        if not any(veto in line for veto in vetos): 
            info = line.split()
            #print info
            
            if ('DRIFT' in info[0]):
                x_drift = float( info[3] )
                y_drift = float( info[4] )
                z_drift = float( info[5] )
            else:
                x.append( (x_drift + float(info[3])) /2. )
                y.append( (y_drift + float(info[4])) /2. )
                z.append( (z_drift + float(info[5])) /2. )

                is_lt_vvs10 = re.match(r"\"LT\.VVS10\"", info[0], re.I)
                if (is_lt_vvs10):
                    x_start = x[-1]
                    y_start = y[-1]
                    z_start = z[-1]
                    s_start = 0.048000 # m

                is_lt_bhz20 = re.match(r"\"LT\.BHZ20\"", info[0], re.I)
                if (is_lt_bhz20):
                    x_start = float(info[3])
                    y_start = float(info[4])
                    z_start = float(info[5])
                    s_start = 24.01200 - 1.055267849/2 + 1.048402561
#                    print ""

                is_lt_bhz30 = re.match(r"\"LT\.BHZ30\"", info[0], re.I)
                if (is_lt_bhz30):
                    x_start = float(info[3])
                    y_start = float(info[4])
                    z_start = float(info[5])
                    s_start = 53.472856 + 1.051446528411 - 53.472856
#                    print ""

                is_ltb_bhz40 = re.match(r"\"LTB\.BHZ40\"", info[0], re.I)
                if (is_ltb_bhz40):
                    x_start = float(info[3])
                    y_start = float(info[4])
                    z_start = float(info[5])
                    s_start = 0.9 #53.472856 + 1.051446528411 - 53.472856
#                    print ""

                s = root.TMath.Sqrt( (x[-1] - x_start)*(x[-1] - x_start) + 
                                     (y[-1] - y_start)*(y[-1] - y_start) +
                                     (z[-1] - z_start)*(z[-1] - z_start) )
                s += s_start

                #print info[0], x[-1],y[-1],z[-1], x_start,y_start,z_start, s
                #print info[0], s



# LT line
folder_geode = './GEODE/Points/'
columns_LT = defaultdict(list)
readCSV(folder_geode + '/'+ 
        'LT_Faisceaux_ZCCS_Courantes_20150402.csv',
        columns_LT)

#print columns_LT

#print columns_LT [1][1:]
#print columns_LT [2][1:]
#print columns_LT [3][1:]
#print columns_LT [4][1:]


gGEODE, gGEODE_M = getLine(columns_LT[1][1:], 
                           columns_LT[2][1:],
                           columns_LT[3][1:], 
                           columns_LT[4][1:])
 

## Canvas
c1 = root.TCanvas("c1","",0,0,1900,1100)
c1.cd()

x_axis =n.array( x )
y_axis =n.array( y )

gLTLTBBI = root.TGraph( int(len(x)), x_axis, y_axis )

gLTLTBBI.SetMarkerColor(root.kAzure+2)
gLTLTBBI.SetMarkerStyle(20)
gLTLTBBI.SetMarkerSize(1)
gLTLTBBI.Draw("AP")

#print gGEODE_M.GetN()
gGEODE_M.SetMarkerColor(root.kRed+2)
gGEODE_M.SetMarkerStyle(20)
gGEODE_M.SetMarkerSize(1)
gGEODE_M.Draw("P")

#gLTLTBBI.Fit("pol1")

c1.Update()
