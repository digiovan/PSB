#! /usr/bin/python

import sys
sys.path.append('../')
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

    for id in range( int(len(offs_M)) ):
        graph_M.SetPoint     ( id, lpos_M[id], offs_M[id] )
        graph_M.SetPointError( id,          0,          0 )

        ele_name = root.TLatex(lpos_M[id],offs_M[id],names_M[id])
        ele_name . SetTextSize(0.015)
        ele_name . SetTextColor(root.kAzure+2)
        latex.append( ele_name )


    return graph, graph_M, latex


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
        'LT_OFFSETS_28JAN2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_LT)

g_title = ""
y_title = ""
y_min, y_max = -0.008, 0.008
offsets_LT = ""

if   (opts.OFFSET=="rad"):
    offsets_LT  = columns_LT [4][1:]
    #g_title = "LT+LTB+BI Radial Ecarts - Alesage - Spline"
    g_title = "LT/LTB Radial Ecarts - Alesage - Spline"
    y_title = "radial offset [m]"
elif (opts.OFFSET=="ver"):
    offsets_LT =  columns_LT[7][1:]
    #g_title = "LT+LTB+BI Vertical Ecarts - Alesage - Spline"
    g_title = "LT/LTB Vertical Ecarts - Alesage - Spline"
    y_title = "vertical offset [m]"
elif (opts.OFFSET=="lon"):
    offsets_LT  = columns_LT[13][1:]
    #g_title = "LT+LTB+BI Longitudinal Ecarts - Alesage - Spline"
    g_title = "LT/LTB Longitudinal Ecarts - Alesage - Spline"
    y_title = "longitudinal offset [m]"
    y_min, y_max = -0.08, 0.08
else:
    print "no OFFSET defined! Options are \"rad\",\"ver\",\"lon\""
    exit(-1)

## Quadrupole Magnets
gQuad_LT,gQuad_LT_M,quadnames_LT = getOffset( columns_LT [1][1:],
                                              columns_LT [2][1:],
                                              offsets_LT        ,
                                              columns_LT[17][1:],
                                              ['QD','QF'] )


## BPMs
gBPM_LT,gBPM_LT_M,bpmnames_LT = getOffset( columns_LT [1][1:],
                                           columns_LT [2][1:],
                                           offsets_LT        ,
                                           columns_LT[17][1:],
                                           ['BPM'] )


################################################################################
# LTB line
columns_LTB = defaultdict(list)
readCSV(folder + '/'+ 
        'LTB_OFFSETS_28JAN2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_LTB)

offsets_LTB = ""
if   (opts.OFFSET=="rad"):
    offsets_LTB  = columns_LTB [4][1:]
elif (opts.OFFSET=="ver"):
    offsets_LTB =  columns_LTB[7][1:]
elif (opts.OFFSET=="lon"):
    offsets_LTB  = columns_LTB[13][1:]
else:
    print "no OFFSET defined! Options are \"rad\",\"ver\",\"lon\""
    exit(-1)


## quadrupole magnets, horizontal offsets
gQuad_LTB,gQuad_LTB_M,quadnames_LTB = getOffset( columns_LTB [1][1:],
                                                 columns_LTB [2][1:],
                                                 offsets_LTB        ,
                                                 columns_LTB[17][1:],
                                                 ['QD','QF'],
                                                 54.44503 )

## BPMs
gBPM_LTB,gBPM_LTB_M,bpmnames_LTB = getOffset( columns_LTB [1][1:],
                                              columns_LTB [2][1:],
                                              offsets_LTB        ,
                                              columns_LTB[17][1:],
                                              ['BPM'],
                                              54.44503 )

################################################################################
# BI line
columns_BI = defaultdict(list)
readCSV(folder + '/'+ 
        'BI_OFFSETS_28JAN2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_BI)

offsets_BI = ""
if   (opts.OFFSET=="rad"):
    offsets_BI  = columns_BI [4][1:]
elif (opts.OFFSET=="ver"):
    offsets_BI =  columns_BI[7][1:]
elif (opts.OFFSET=="lon"):
    offsets_BI  = columns_BI[13][1:]
else:
    print "no OFFSET defined! Options are \"rad\",\"ver\",\"lon\""
    exit(-1)

## quadrupole magnets, horizontal offsets
gQuad_BI,gQuad_BI_M,quadnames_BI = getOffset( columns_BI [1][1:],
                                              columns_BI [2][1:],
                                              offsets_BI        ,
                                              columns_BI[17][1:],
                                              ['QNO'],
                                              54.44503+31.8431 )

## BPMs
gBPM_BI,gBPM_BI_M,bpmnames_BI = getOffset( columns_BI [1][1:],
                                           columns_BI [2][1:],
                                           offsets_BI        ,
                                           columns_BI[17][1:],
                                           ['BPM'],
                                           54.44503+31.8431 )


################################################################################
# Draw Offsets

# All Quadrupole Magnets
gQuad_list = []
gQuad_list . append(gQuad_LT_M)
gQuad_list . append(gQuad_LTB_M)
#gQuad_list . append(gQuad_BI_M)

gQuad = addtgrapherrors( gQuad_list )


# BPM center
gBPM_list = []
gBPM_list . append(gBPM_LT_M)
gBPM_list . append(gBPM_LTB_M)
#gBPM_list . append(gBPM_BI_M)

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

gQuad.Draw("AP")
 
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
gQuad_BI.SetLineColor  (root.kOrange+2)
gQuad_BI.SetMarkerColor(root.kOrange+2)          
gQuad_BI.SetLineStyle(0)
gQuad_BI.SetLineWidth(2)
gQuad_BI.SetMarkerStyle(20)
gQuad_BI.SetMarkerSize(1)
gQuad_BI.Draw("P") 


gQuad_BI_M.SetLineColor  (root.kOrange+2)
gQuad_BI_M.SetMarkerColor(root.kOrange+2)
gQuad_BI_M.SetLineStyle(0)
gQuad_BI_M.SetLineWidth(2)
gQuad_BI_M.SetMarkerStyle(20)
gQuad_BI_M.SetMarkerSize(1)
gQuad_BI_M.Draw("L")


# Add the names of the quadrupole magnets
for id in range( 0, len(quadnames_LT) ):
    quadnames_LT[id].Draw()

for id in range( 0, len(quadnames_LTB) ):
    quadnames_LTB[id]. SetTextColor(root.kGreen+2)
    quadnames_LTB[id]. Draw()

#for id in range( 0, len(quadnames_BI) ):
#    quadnames_BI[id]. SetTextColor(root.kOrange+2)
#    quadnames_BI[id]. Draw()


# Add BPMs center position in the plots
gBPM.SetLineStyle(0)
gBPM.SetLineWidth(2)
gBPM.SetMarkerStyle(20)
gBPM.SetMarkerSize(1)
gBPM.Draw("P")

# Add the names of the BPMs
for id in range( 0, len(bpmnames_LT) ):
    bpmnames_LT[id]. SetTextColor(root.kGray+2)
    bpmnames_LT[id]. SetX( bpmnames_LT[id].GetX()+0.3 )
    bpmnames_LT[id]. SetY( -0.006 )
    bpmnames_LT[id].Draw()


for id in range( 0, len(bpmnames_LTB) ):
    bpmnames_LTB[id]. SetTextColor(root.kGray+2)
    bpmnames_LTB[id]. SetX( bpmnames_LTB[id].GetX()+0.3 )
    bpmnames_LTB[id]. SetY( -0.006 )
    bpmnames_LTB[id]. Draw()

#for id in range( 0, len(bpmnames_BI) ):
#    bpmnames_BI[id]. SetTextColor(root.kGray+2)
#    bpmnames_BI[id]. SetX( bpmnames_BI[id].GetX()+0.3 )
#    bpmnames_BI[id]. SetY( -0.006 )
#    bpmnames_BI[id]. Draw()

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
    
 
c1.Update()
 
# add a spline passing through the center of the quadrupole magnets
spline3 = root.TSpline3("grSpl3",gQuad)
spline3.SetLineColor(root.kRed)
spline3.SetLineWidth(3)

if (opts.OFFSET != "lon"):
    spline3.Draw("same")

# add a legend
leg = root.TLegend(0.13, 0.78, 0.33, 0.93)
#leg.SetBorderSize(2)
leg.SetFillColor(0)
leg.SetTextSize(0.015)

leg.AddEntry(gQuad_LT,  "LT Line",  "l")
leg.AddEntry(gQuad_LTB, "LTB Line", "l")
leg.AddEntry(gQuad_BI,  "LT Line",  "l")
leg.AddEntry(gBPM,      "BPM Offsets", "p")
leg.AddEntry(spline3,   "Spline", "l")
leg.Draw("same")

c1.Update()


# wall... the values are indicative
gWall = root.TGraphAsymmErrors()
gWall.SetFillColor(root.kGreen+2)
gWall.SetLineColor(root.kGreen+2)
#gWall.SetLineStyle(0)

gWall.SetPoint(0,107.5,y_min) 
gWall.SetPointError(0,3,0, 0.,0.) 

gWall.SetPoint(1,107.5,y_max) 
gWall.SetPointError(1,3,0, 0.,0.) 

gWall.SetLineWidth(100);
gWall.SetFillStyle(3005);
   
#gWall.Draw("l")

#ps_int = root.TLatex(110,+0.007,"PS Access")
#ps_int.SetTextColor(root.kRed+2)
#ps_int.SetTextSize(0.03)
#ps_int.Draw("")
#
#psb_int = root.TLatex(83,+0.007,"PSB Access")
#psb_int.SetTextColor(root.kRed+2)
#psb_int.SetTextSize(0.03)
#psb_int.Draw("")

