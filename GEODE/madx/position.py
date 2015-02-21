#! /usr/bin/python

import sys
sys.path.append('../../')
from helpers import *

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

#print 'hello'
import re

#with open("lt.seq") as file:
#    for line in file:
#        
#        line_matched = re.match(r"\s+(LT.Q\w+)\s+,\s+AT\s+:=\s+(\d+.\d+)",line, re.I)
#        if line_matched:
#            print line_matched.group(),line_matched.group(1),line_matched.group(2)  

with open("lt.ele") as file:
    for line in file:
        line_matched = re.match(r"(LT.Q\w+)\s+:\s+\w+,\s+L=\s+(\d+.\d+)",line, re.I)
        if line_matched:
            print line_matched.group(),line_matched.group(1),line_matched.group(2)  





str = 'an example word:cat!!'
match = re.search(r'word:\w\w\w', str)
# If-statement after search() tests if it succeeded
if match:                      
    print 'found', match.group() ## 'found word:cat'
else:
    print 'did not find'
