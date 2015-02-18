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

    linear_funcs = []
    for id in range( int(len(offs_M)) ):
        graph_M.SetPoint     ( id, lpos_M[id], offs_M[id] )
        graph_M.SetPointError( id,          0,          0 )

        ele_name = root.TLatex(lpos_M[id],offs_M[id],names_M[id])
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
        linear_func.SetLineWidth(3)
        
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
        'LT_OFFSETS_28JAN2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_LT)

columns_LTB = defaultdict(list)
readCSV(folder + '/'+ 
        'LTB_OFFSETS_28JAN2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv',
        columns_LTB)

g_title = ""
y_title = ""
y_min, y_max = -0.008, 0.008
offsets_LT = ""

if   (opts.OFFSET=="rad"):
    offsets_LT  = columns_LT [4][1:]
    offsets_LTB = columns_LTB[4][1:]
    g_title = "LT/LTB Radial Ecarts - Faisceaux"
    y_title = "radial offset [m]"
elif (opts.OFFSET=="ver"):
    offsets_LT  = columns_LT [7][1:]
    offsets_LTB = columns_LTB[7][1:]
    g_title = "LT/LTB Vertical Ecarts - Faisceaux"
    y_title = "vertical offset [m]"
elif (opts.OFFSET=="lon"):
    offsets_LT  = columns_LT [13][1:]
    offsets_LTB = columns_LTB[13][1:]
    g_title = "LT/LTB Longitudinal Ecarts - Faisceaux"
    y_title = "longitudinal offset [m]"
    y_min, y_max = -0.08, 0.08
else:
    print "no OFFSET defined! Options are \"rad\",\"ver\",\"lon\""
    exit(-1)


# add the offset of the starting of the LTB line
columns_LTB[17][1:] = [float(x)+54.44503 for x in columns_LTB[17][1:]]

## Quadrupole Magnets LT/LTB
gQuad,gQuad_M,quadnames,fQuad  = getOffset( columns_LT [1][1:] + columns_LTB [1][1:],
                                            columns_LT [2][1:] + columns_LTB [2][1:],
                                            offsets_LT         + offsets_LTB        ,
                                            columns_LT[17][1:] + columns_LTB[17][1:],
                                            ['QD','QF'] )


## BPMs
gBPM,gBPM_M,bpmnames,fBPM = getOffset( columns_LT [1][1:] + columns_LTB [1][1:],
                                       columns_LT [2][1:] + columns_LTB [2][1:],
                                       offsets_LT         + offsets_LTB        ,
                                       columns_LT[17][1:] + columns_LTB[17][1:],
                                       ['BPM'] )




################################################################################
# Draw Offsets

# All Quadrupole Magnets
gQuad_list = []
gQuad_list . append(gQuad_M)
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

gQuad.SetLineColor  (root.kAzure+2)
gQuad.SetMarkerColor(root.kAzure+2)
gQuad.SetLineStyle(0)
gQuad.SetLineWidth(2)
gQuad.SetMarkerStyle(20)
gQuad.SetMarkerSize(1)
gQuad.Draw("AP")



# Add the names of the quadrupole magnets
for id in range( 0, len(quadnames) ):
    quadnames[id].Draw()


# Add BPMs center position in the plots
gBPM.SetLineStyle(2)
gBPM.SetLineWidth(2)
gBPM.SetMarkerStyle(20)
gBPM.SetMarkerSize(1)
gBPM.Draw("P")

# Add the names of the BPMs
for id in range( 0, len(bpmnames) ):
    bpmnames[id]. SetTextColor(root.kGray+2)
    bpmnames[id]. SetX( bpmnames[id].GetX()+0.3 )
    bpmnames[id]. SetY( -0.006 )
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

for line in fQuad:
    line.Draw("same")
    
 
# add a legend
leg = root.TLegend(0.13, 0.78, 0.33, 0.93)
#leg.SetBorderSize(2)
leg.SetFillColor(0)
leg.SetTextSize(0.015)

leg.AddEntry(gQuad,  "LT/LTB Lines (Middle Points)", "l")
leg.AddEntry(gBPM,   " BPM Offsets (Middle Points)", "lp")
leg.Draw("same")

c1.Update()

### 
print "\ncalculate absolute BPM offset w.r.t. to the line connecting the center of the " \
      "quadrupole magnets\n"

xBPM, yBPM, xQUAD, yQUAD = root.Double(-999), root.Double(-999), root.Double(-999), root.Double(-999)

# LT.BPM10 is calculated w.r.t. to LT.QFN.10
gBPM .GetPoint(0,xBPM, yBPM)
gQuad.GetPoint(0,xQUAD,yQUAD)
print "LT.BPM10 Absolute Offset = %4.3f mm" % (math.fabs( yBPM-yQUAD ) * 1000.)  
   
# LT.BPM20 is calculated w.r.t. to the line LT.QDN.32-LT.QFN.40
gBPM .GetPoint(1,xBPM, yBPM)
yQUAD = float( fQuad[5].Eval(xBPM) )
print "LT.BPM20 Absolute Offset = %4.3f mm" % (math.fabs( yBPM-yQUAD ) * 1000.)  

# LT.BPM30 is calculated w.r.t. to the line LT.QDN.42-LT.QFN.50
gBPM .GetPoint(2,xBPM, yBPM)
yQUAD = float( fQuad[7].Eval(xBPM) )
print "LT.BPM30 Absolute Offset = %4.3f mm" % (math.fabs( yBPM-yQUAD ) * 1000.)  

# LT.BPM40 is calculated w.r.t. to the line LT.QFN.50-LT.QDN.55
gBPM .GetPoint(3,xBPM, yBPM)
yQUAD = float( fQuad[8].Eval(xBPM) )
print "LT.BPM40 Absolute Offset = %4.3f mm" % (math.fabs( yBPM-yQUAD ) * 1000.)  

# LT.BPM50 is calculated w.r.t. to the line LT.QDN.75-LTB.QFN.10
gBPM .GetPoint(4,xBPM, yBPM)
yQUAD = float( fQuad[12].Eval(xBPM) )
print "LT.BPM50 Absolute Offset = %4.3f mm" % (math.fabs( yBPM-yQUAD ) * 1000.)  
