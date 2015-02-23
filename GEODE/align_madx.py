#! /usr/bin/python

import sys
sys.path.append('../')
from helpers import *

import re

# add the offset of the starting of the LTB line
LTB_start = 53.472856                 # m
BI_start  = LTB_start + 29.2351681947 # m
PSB_start = BI_start  + 46.48747062   # m 

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

        baseName = lines[i] + "." + names[i].split(".")[0] + names[i].split(".")[1] 
        # print baseName, lonPos[i]

        madx_lon_pos = -999
        with open("madx/ltltbbi.seq") as file_seq:
            for line_seq in file_seq:
                
                line_seq_matched = re.match(r"\s+(LT.Q\w+)\s+,\s+AT\s+:=\s+(\d+.\d+)", line_seq, re.I)  or \
                                   re.match(r"\s+(LTB.Q\w+)\s+,\s+AT\s+:=\s+(\d+.\d+)",line_seq, re.I)  or \
                                   re.match(r"\s+(BI.Q\w+)\s+,\s+at\s+=\s+(\d+.\d+)",  line_seq, re.I)  or \
                                   re.match(r"\s+(LT.BP\w+)\s+,\s+AT\s+:=\s+(\d+.\d+)", line_seq, re.I) or \
                                   re.match(r"\s+(LTB.BP\w+)\s+,\s+AT\s+:=\s+(\d+.\d+)",line_seq, re.I) or \
                                   re.match(r"\s+(BI.BP\w+)\s+,\s+at\s+=\s+(\d+.\d+)",  line_seq, re.I) 


                if line_seq_matched:
                    if (baseName == line_seq_matched.group(1)):
                        #print line_seq_matched.group(1),line_seq_matched.group(2)  
                        madx_lon_pos = float( line_seq_matched.group(2) )

                        with open("madx/ltltbbi.ele") as file_ele:
                            for line_ele in file_ele:
                                # for the BPMs I am only interested in the middle point anyway...
                                line_ele_matched = re.match(r"(LT.Q\w+)\s+:\s+\w+,\s+L=\s+(\d+.\d+)",   line_ele, re.I) or \
                                                   re.match(r"(LTB.Q\w+)\s+:\s+\w+,\s+L=\s+(\d+.\d+)",  line_ele, re.I) or \
                                                   re.match(r"\s+(BI.Q\w+)\s+:\s+\w+,\s+L=\s+(\d+.\d+)",line_ele, re.I) 
            
                                if line_ele_matched:
                                    if (baseName == line_ele_matched.group(1)):
                                        #print line_ele_matched.group(1),line_ele_matched.group(2)  
                                        if (names[i][-2:] == ".E"):
                                            madx_lon_pos -= float( line_ele_matched.group(2) ) /2.
                                        if (names[i][-2:] == ".S"):
                                            madx_lon_pos += float( line_ele_matched.group(2) ) /2.

        if (madx_lon_pos != -999):                                    
            lonPos[i] = madx_lon_pos
            
            if ('LTB' in baseName):
                lonPos[i] += LTB_start

            if ('BI' in baseName):
                lonPos[i] += BI_start

            # print "2)", baseName, lonPos[i]                            

        if (names[i][-2:] == ".E"):
            if (offsets[i]):
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
    # print names_E
    # print lpos_E
    # print offs_E 

    # print names_S
    # print lpos_S
    # print offs_S 

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
import optparse
parser = optparse.OptionParser()

# define the options
parser.add_option('-o', '--offset',
                  help='specify the offset (radial,vertical,longitudinal)',
                  dest='OFFSET',
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
mandatories = ['OFFSET']
for m in mandatories:
    if not opts.__dict__[m]:
        print "at least the mandatory option %s is missing\n" % m
        print "\nExamples: python -o rad"
        print   "          python -o ver"
        print   "          python -o lon"
        parser.print_help()
        exit(-1)

if (opts.BATCH):
    root.gROOT.SetBatch(True)
 


folder = 'offsets_files/'


################################################################################
# LT line
columns_LT = defaultdict(list)
readCSV(folder + '/'+ 
        'LT_OFFSETS_17FEB2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_LT)

columns_LTB = defaultdict(list)
readCSV(folder + '/'+ 
        'LTB_OFFSETS_17FEB2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_LTB)

columns_BI = defaultdict(list)
readCSV(folder + '/'+ 
        'BI_OFFSETS_17FEB2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_BI)

columns_PSB = defaultdict(list)
readCSV(folder + '/'+ 
        'PSB_OFFSETS_17FEB2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_PSB)


g_title = ""
y_title = ""
y_min, y_max = -0.008, 0.008

offsets_LT  = ""
offsets_LTB = ""
offsets_BI  = ""
offsets_PSB = ""

if   (opts.OFFSET=="rad"):
    offsets_LT  = columns_LT [4][1:]
    offsets_LTB = columns_LTB[4][1:]
    offsets_BI  = columns_BI [4][1:]
    offsets_PSB = columns_PSB[4][1:]
    g_title = "LT/LTB/BI Radial Ecarts - Faisceaux - Theorique Bumpees"
    y_title = "radial offset [m]"
elif (opts.OFFSET=="ver"):
    offsets_LT  = columns_LT [7][1:]
    offsets_LTB = columns_LTB[7][1:]
    offsets_BI  = columns_BI [7][1:]
    offsets_PSB = columns_PSB[7][1:]
    g_title = "LT/LTB/BI Vertical Ecarts - Faisceaux - Theorique Bumpees"
    y_title = "vertical offset [m]"
elif (opts.OFFSET=="lon"):
    offsets_LT  = columns_LT [13][1:]
    offsets_LTB = columns_LTB[13][1:]
    offsets_BI  = columns_BI [13][1:]
    offsets_PSB = columns_PSB[13][1:]
    g_title = "LT/LTB/BI Longitudinal Ecarts - Faisceaux - Theorique Bumpees"
    y_title = "longitudinal offset [m]"
    y_min, y_max = -0.08, 0.08
else:
    print "no OFFSET defined! Options are \"rad\",\"ver\",\"lon\""
    exit(-1)



columns_LTB[17][1:] = [float(x)+LTB_start           for x in columns_LTB[17][1:]]
columns_BI [17][1:] = [float(x)+ BI_start           for x in columns_BI [17][1:]]
columns_PSB[17][1:] = [float(x)-float(x)+PSB_start  for x in columns_PSB[17][1:]]

## All the line for calculation purpouses
## Quadrupole Magnets LT/LTB/BI
gQuad,gQuad_M,quadnames,fQuad  = getOffset( columns_LT [1][1:] + columns_LTB [1][1:] + columns_BI [1][1:] + columns_PSB [1][1:],
                                            columns_LT [2][1:] + columns_LTB [2][1:] + columns_BI [2][1:] + columns_PSB [2][1:],
                                            offsets_LT         + offsets_LTB         + offsets_BI         + offsets_PSB        ,
                                            columns_LT[17][1:] + columns_LTB[17][1:] + columns_BI[17][1:] + columns_PSB[17][1:],
                                            ['QFN','QDN','QFW','QDW','QNO','BRMB.1620'] )
# to debug
#for i in quadnames:
#    print i.GetTitle()

# to debug
#for i in range(gQuad.GetN()):
#    x, y = root.Double(0),root.Double(0)
#    gQuad.GetPoint(i,x,y)
#    print x

## These are useful handles for graphical purpouses
## Quadrupole Magnets LT
gQuad_LT,gQuad_LT_M,quadnames_LT,fQuad_LT  = getOffset( columns_LT [1][1:],
                                                        columns_LT [2][1:],
                                                        offsets_LT        ,
                                                        columns_LT[17][1:],
                                                        ['QD','QF'] )

gQuad_LTB,gQuad_LTB_M,quadnames_LTB,fQuad_LTB = getOffset( columns_LTB [1][1:],
                                                           columns_LTB [2][1:],
                                                           offsets_LTB        ,
                                                           columns_LTB[17][1:],
                                                           ['QD','QF'])

gQuad_BI,gQuad_BI_M,quadnames_BI,fQuad_BI = getOffset( columns_BI [1][1:],
                                                       columns_BI [2][1:],
                                                       offsets_BI        ,
                                                       columns_BI[17][1:],
                                                       ['QNO'] )

gQuad_PSB,gQuad_PSB_M,quadnames_PSB,fQuad_PSB = getOffset( columns_PSB [1][1:],
                                                           columns_PSB [2][1:],
                                                           offsets_PSB        ,
                                                           columns_PSB[17][1:],
                                                           ['BRMB.1620'] )

## BPMs
gBPM,gBPM_M,bpmnames,fBPM = getOffset( columns_LT [1][1:] + columns_LTB [1][1:] + columns_BI [1][1:],
                                       columns_LT [2][1:] + columns_LTB [2][1:] + columns_BI [2][1:],
                                       offsets_LT         + offsets_LTB         + offsets_BI        ,
                                       columns_LT[17][1:] + columns_LTB[17][1:] + columns_BI[17][1:],
                                       ['BPM'] )




################################################################################
# Draw Offsets

# All Quadrupole Magnets
gQuad_list = []
#gQuad_list . append(gQuad_M)
gQuad_list = []
gQuad_list . append(gQuad_LT_M)
gQuad_list . append(gQuad_LTB_M)
gQuad_list . append(gQuad_BI_M)
gQuad_list . append(gQuad_PSB_M)
gQuad = addtgrapherrors( gQuad_list )


# BPM center
gBPM_list = []
gBPM_list . append(gBPM_M)
gBPM = addtgrapherrors( gBPM_list )



# Canvas
c1 = root.TCanvas("c1","",0,0,1900,1100)
c1.cd()
 
# Graphs with all 3 transfer lines
gQuad.SetTitle( g_title )

gQuad.GetYaxis().SetRangeUser(y_min,y_max)

gQuad.GetXaxis().SetTitle("mechanical position [m]")
gQuad.GetYaxis().SetTitle( y_title )
 
gQuad.GetXaxis().SetTitleOffset(1.2)
gQuad.GetYaxis().SetTitleOffset(1.4)

gQuad.SetLineColor  (root.kBlack)
#gQuad.SetMarkerColor(root.kAzure+2)
#gQuad.SetLineStyle(0)
gQuad.SetLineWidth(2)
gQuad.SetMarkerStyle(20)
#gQuad.SetMarkerSize(1)
gQuad.Draw("AL")


#for line in fQuad:
#    line.Draw("same")
   
# LT line style
gQuad_LT.SetLineColor  (root.kAzure+2)
gQuad_LT.SetMarkerColor(root.kAzure+2)
gQuad_LT.SetLineStyle(0)
gQuad_LT.SetLineWidth(2)
gQuad_LT.SetMarkerStyle(20)
gQuad_LT.SetMarkerSize(1)
gQuad_LT.Draw("P")

gQuad_LT_M.SetLineColor  (root.kAzure+2)
gQuad_LT_M.SetMarkerColor(root.kAzure+2)
gQuad_LT_M.SetLineStyle(0)
gQuad_LT_M.SetLineWidth(2)
gQuad_LT_M.SetMarkerStyle(20)
gQuad_LT_M.SetMarkerSize(1)
gQuad_LT_M.Draw("L")

#for line in fQuad_LT:
#    line.Draw("same")

# LTB line style
gQuad_LTB.SetLineColor  (root.kGreen+2)
gQuad_LTB.SetMarkerColor(root.kGreen+2)    
gQuad_LTB.SetLineStyle(0)
gQuad_LTB.SetLineWidth(2)
gQuad_LTB.SetMarkerStyle(20)
gQuad_LTB.SetMarkerSize(1)
gQuad_LTB.Draw("P") 

gQuad_LTB_M.SetLineColor  (root.kGreen+2)
gQuad_LTB_M.SetMarkerColor(root.kGreen+2)
gQuad_LTB_M.SetLineStyle(0)
gQuad_LTB_M.SetLineWidth(2)
gQuad_LTB_M.SetMarkerStyle(20)
gQuad_LTB_M.SetMarkerSize(1)
gQuad_LTB_M.Draw("L")


# BI line style
gQuad_BI.SetLineColor  (root.kRed+2)
gQuad_BI.SetMarkerColor(root.kRed+2)          
gQuad_BI.SetLineStyle(0)
gQuad_BI.SetLineWidth(2)
gQuad_BI.SetMarkerStyle(20)
gQuad_BI.SetMarkerSize(1)
gQuad_BI.Draw("P") 


gQuad_BI_M.SetLineColor  (root.kRed+2)
gQuad_BI_M.SetMarkerColor(root.kRed+2)
gQuad_BI_M.SetLineStyle(0)
gQuad_BI_M.SetLineWidth(2)
gQuad_BI_M.SetMarkerStyle(20)
gQuad_BI_M.SetMarkerSize(1)
gQuad_BI_M.Draw("L")

# PSB line style
gQuad_PSB.SetLineColor  (root.kBlack)
gQuad_PSB.SetMarkerColor(root.kBlack)
gQuad_PSB.SetLineStyle(0)
gQuad_PSB.SetLineWidth(2)
gQuad_PSB.SetMarkerStyle(20)
gQuad_PSB.SetMarkerSize(1)
gQuad_PSB.Draw("P")


# Add the names of the quadrupole magnets
#for id in range( 0, len(quadnames) ):
#    quadnames[id].Draw()

# Add the names of the quadrupole magnets
for id in range( 0, len(quadnames_LT) ):
    quadnames_LT[id].Draw()

for id in range( 0, len(quadnames_LTB) ):
    quadnames_LTB[id]. SetTextColor(root.kGreen+2)
    quadnames_LTB[id]. Draw()

for id in range( 0, len(quadnames_BI) ):
    quadnames_BI[id]. SetTextColor(root.kRed+2)
    quadnames_BI[id]. Draw()

for id in range( 0, len(quadnames_PSB) ):
    quadnames_PSB[id]. SetTextColor(root.kBlack)
    quadnames_PSB[id]. Draw()


# Add BPMs center position in the plots
gBPM.SetLineStyle(2)
gBPM.SetLineWidth(2)
gBPM.SetMarkerStyle(20)
gBPM.SetMarkerSize(1)
gBPM.Draw("P")

# Add the names of the BPMs
#bpm_list = ['LT.BPM.30', 'LTB.BPM.20','BI.BPM.00','BI.BPM.30','BI.BPM.50']
bpm_list = ['LT.BPM30', 'LTB.BPM20','BI.BPM00','BI.BPM30','BI.BPM50']

for id in range( 0, len(bpmnames) ):
    bpmnames[id]. SetTextColor(root.kGray+2)
    bpmnames[id]. SetX( bpmnames[id].GetX()-2+0.3 )
    bpmnames[id]. SetY( -0.006 )
    #print bpmnames[id].GetTitle() 
    for name in bpm_list:
        if name == bpmnames[id].GetTitle():
            bpmnames[id]. SetY( -0.0055 )

    bpmnames[id].Draw()


# draw vertical lines at the BPM position to help visualize them
lineBPM = []
for id in range( int(gBPM.GetN()) ):

    x, y = root.Double(0), root.Double(0)     
    gBPM.GetPoint(id,x,y)

    tline = root.TLine(x,y_min,x,y_max)
    tline.SetLineColor(root.kGray+2)
    tline.SetLineWidth(2)
    tline.SetLineStyle(2)
    lineBPM.append(tline)

for line in lineBPM:
    line.Draw("same")

 
# add a legend
leg = root.TLegend(0.13, 0.78, 0.33, 0.93)
#leg.SetBorderSize(2)
leg.SetFillColor(0)
leg.SetTextSize(0.015)

leg.AddEntry(gQuad_LT,  " LT Line Offsets", "l")
leg.AddEntry(gQuad_LTB, "LTB Line Offsets", "l")
leg.AddEntry(gQuad_BI,  " BI Line Offsets", "l")
#leg.AddEntry(gQuad,  "LT/LTB/BI Lines (Middle Points)", "l")
leg.AddEntry(gBPM,   " BPM Offsets (Middle Points)", "lp")
leg.Draw("same")

c1.Update()

if (opts.SAVE):
    canvas_name = 'png/LT_LTB_BI_Offsets_'
    if (opts.OFFSET=="rad"):
        canvas_name += 'Radial'
    if (opts.OFFSET=="ver"):
        canvas_name += 'Vertical'
    if (opts.OFFSET=="lon"):
        canvas_name += 'Longitudinal'

    c1.SaveAs(canvas_name + '.png' )
    c1.SaveAs(canvas_name + '.root')


### THIS PART IS SORT OF HARDCODED ...
print "\ncalculate absolute BPM offset w.r.t. to the line connecting the center of the " \
      "quadrupole magnets\n"

xBPM, yBPM, xQUAD, yQUAD = root.Double(-999), root.Double(-999), root.Double(-999), root.Double(-999)

# LT.BPM10 is calculated w.r.t. to LT.QFN.10
gBPM .GetPoint(0,xBPM, yBPM)
gQuad.GetPoint(0,xQUAD,yQUAD)
print "LT.BPM10 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.)  
   
# LT.BPM20 is calculated w.r.t. to the line LT.QDN.32-LT.QFN.40
gBPM .GetPoint(1,xBPM, yBPM)
yQUAD = float( fQuad[5].Eval(xBPM) )
print "LT.BPM20 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.)  

# LT.BPM30 is calculated w.r.t. to the line LT.QDN.42-LT.QFN.50
gBPM .GetPoint(2,xBPM, yBPM)
yQUAD = float( fQuad[7].Eval(xBPM) )
print "LT.BPM30 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.)  

# LT.BPM40 is calculated w.r.t. to the line LT.QFN.50-LT.QDN.55
gBPM .GetPoint(3,xBPM, yBPM)
yQUAD = float( fQuad[8].Eval(xBPM) )
print "LT.BPM40 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.)  

# LT.BPM50 is calculated w.r.t. to the line LT.QDN.75-LTB.QFN.10
gBPM .GetPoint(4,xBPM, yBPM)
yQUAD = float( fQuad[12].Eval(xBPM) )
print "LT.BPM50 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 


# LTB.BPM10/20 are calculated w.r.t. to the line LTB.QDN.20-LTB.QFW.30
gBPM .GetPoint(5,xBPM, yBPM)
yQUAD = float( fQuad[14].Eval(xBPM) )
print "LTB.BPM10 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 

gBPM .GetPoint(6,xBPM, yBPM)
yQUAD = float( fQuad[14].Eval(xBPM) )
print "LTB.BPM20 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 


# LTB.BPM30 is calculated w.r.t. to the line LTB.QDW.60-BI.QNO.10
gBPM .GetPoint(7,xBPM, yBPM)
yQUAD = float( fQuad[18].Eval(xBPM) )
print "LTB.BPM30 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 


#BI.BPM00/10 are calculated w.r.t. to the line LTB.QDW.60-BI.QNO.10
gBPM .GetPoint(8,xBPM, yBPM)
yQUAD = float( fQuad[18].Eval(xBPM) )
print "BI.BPM00 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 

gBPM .GetPoint(9,xBPM, yBPM)
yQUAD = float( fQuad[18].Eval(xBPM) )
print "BI.BPM10 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 


#BI.BPM20 is calculated w.r.t. to the line BI.QNO.20-BI.QNO.30
gBPM .GetPoint(10,xBPM, yBPM)
yQUAD = float( fQuad[20].Eval(xBPM) )
print "BI.BPM20 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 


#BI.BPM30 is calculated w.r.t. to the line BI.QNO.30-BI.QNO.40
gBPM .GetPoint(11,xBPM, yBPM)
yQUAD = float( fQuad[21].Eval(xBPM) )
print "BI.BPM30 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 


#BI.BPM40/50 are calculated w.r.t. to the line BI.QNO.60-PSB.BRMB.1620
gBPM .GetPoint(12,xBPM, yBPM)
yQUAD = float( fQuad[24].Eval(xBPM) )
print "BI.BPM40 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 

gBPM .GetPoint(13,xBPM, yBPM)
yQUAD = float( fQuad[24].Eval(xBPM) )
print "BI.BPM50 Offset = %4.3f mm" % ( (yQUAD-yBPM ) * 1000.) 

