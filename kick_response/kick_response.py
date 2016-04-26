#! /usr/bin/python

#import sys
#sys.path.append('../')
#from helpers import *

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

# for the options
import optparse
parser = optparse.OptionParser()

# define the options
parser.add_option('-c', '--corr',
                  help='specify which corrector of the LT/LTB/BI lines',
                  dest='CORR',
                  action='store')

parser.add_option('-k', '--kicker',
                  help='specify which kicker of the LT/LTB/BI lines',
                  dest='KICKER',
                  action='store')

parser.add_option('-s', '--save',
                  help='save the plots',
                  dest='SAVE',
                  default = False, 
                  action = 'store_true')

parser.add_option('-d', '--debug',
                  help='to show some debugging plots',
                  dest='DEBUG',
                  default = False, 
                  action = 'store_true')

parser.add_option('-n', '--nobixbpm',
                  help='if you need to remove BIx.BPM40 and BIx.BPM50 from the data plots',
                  dest='NOBIXBPM',
                  default = False, 
                  action = 'store_true')



# get the options
(opts, args) = parser.parse_args()

# Sanity check: Making sure all mandatory options appeared
mandatories = ['CORR','KICKER']
for m in mandatories:
    if not opts.__dict__[m]:
        print "at least the mandatory option %s is missing\n" % m
        parser.print_help()
        exit(-1)

#################################################################################
class ordered_dict(dict):
    def __init__(self, *args, **kwargs):
        dict.__init__(self, *args, **kwargs)
        self._order = self.keys()

    def __setitem__(self, key, value):
        dict.__setitem__(self, key, value)
        if key in self._order:
            self._order.remove(key)
        self._order.append(key)

    def __delitem__(self, key):
        dict.__delitem__(self, key)
        self._order.remove(key)

    def order(self):
        return self._order[:]

    def ordered_items(self):
        return [(key,self[key]) for key in self._order]


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

    #print ele
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
    for graph in listOfGraphs:
        
        if n_points == 0:
            n_points = graph.GetN()
            if (opts.NOBIXBPM):
                n_points -= 2

        if n_points != graph.GetN() and not opts.NOBIXBPM:
            print 'ERROR (getGraphAverage): different number of points in the graphs'
            exit(1)


    # calculate the y_mean for each point
    for i in range(0,n_points):
        
        mean_value = 0
        for graph in listOfGraphs:

            x, y = root.Double(0), root.Double(0)
            graph.GetPoint(int(i), x, y)
            #print x,y
            
            mean_value += y/len(listOfGraphs)
            
        #print mean_value   
        y_mean . append ( mean_value )

    #print y_mean 

    # calculate the RMS w.r.t. the mean/sqrt(n) (standard deviation)
    for i in range(0,n_points):
        
        rms_value = 0
        for graph in listOfGraphs:
        
            x, y = root.Double(0), root.Double(0)
            graph.GetPoint(int(i), x, y)
            #print x,y
            
            rms_value += root.TMath.Power(y - y_mean[i], 2) 
            rms_value /= len(listOfGraphs) 
            
            
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
        
        #print y_mean[i], y_rms[i]
    
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
#        filename_p = 'kr_bt%s_btm_%s_plus.out'  % (ring, corr.lower() )
#        filename_m = 'kr_bt%s_btm_%s_minus.out' % (ring, corr.lower() )
    
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
    
    print file_p
    #    if ('2014' in str(sim)):
    ele_p = commands.getoutput('cat %s | grep BPM | grep -v .E | grep -v .S | awk \'{print $1}\'' % file_p).replace("\"","").split()
    ele_m = commands.getoutput('cat %s | grep BPM | grep -v .E | grep -v .S | awk \'{print $1}\'' % file_m).replace("\"","").split()

    x_p = commands.getoutput('cat %s | grep BPM | grep -v .E | grep -v .S | awk \'{print $3}\'' % file_p).split()
    x_m = commands.getoutput('cat %s | grep BPM | grep -v .E | grep -v .S | awk \'{print $3}\'' % file_m).split()
                                                                               
    y_p = commands.getoutput('cat %s | grep BPM | grep -v .E | grep -v .S | awk \'{print $4}\'' % file_p).split()
    y_m = commands.getoutput('cat %s | grep BPM | grep -v .E | grep -v .S | awk \'{print $4}\'' % file_m).split()

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


# kick in urad
#kick   = 500
#kick   = 100
kick   = int( opts.KICKER )
corr   = opts.CORR

#folder = 'ext.rm.%durad.2014.09.26' % kick
#folder = 'ext.rm.%durad.2014.09.22' % kick
#folder = 'RM.%durad.2014.09.15' % kick
#folder = 'RM.%durad.2014.09.24' % kick

folder = ''
#if ('LT' in corr or 'BI' in corr):
folder = 'RM.%durad/' % kick
#folder = 'RM.%durad.BTBTM/' % kick

#else:
    #folder = 'ext.rm.%durad.2014.09.26' % kick
#    folder = 'ext.rm.%durad.2014.10.01' % kick

planes = []
if ('DHZ' in corr):
 planes = ['H']
if ('DVT' in corr):
 planes = ['V']

rings_corr_map = {}

# LT/LTB/BI line horizontal
rings_corr_map['LT.DHZ10']  =  ['3']  #  ['1','2','3','4']  
rings_corr_map['LT.DHZ20']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['LT.DHZ30']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['LT.DHZ40']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['LT.DHZ50']  =  ['3']  #  ['1','2','3','4']
                         
rings_corr_map['LTB.DHZ10'] =  ['3']  #  ['1','2','3','4']
rings_corr_map['LTB.DHZ20'] =  ['3']  #  ['1','2','3','4']
rings_corr_map['LTB.DHZ30'] =  ['3']  #  ['1','2','3','4']
rings_corr_map['LTB.DHZ40'] =  ['3']  #  ['1','2','3','4']
                         
rings_corr_map['BI.DHZ10']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['BI.DHZ20']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['BI.DHZ30']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['BI.DHZ40']  =  ['3']  #  ['1','2','3','4']

# LT/LTB/BI line vertical
rings_corr_map['LT.DVT10']  =  ['3']  #  ['1','2','3','4']  
rings_corr_map['LT.DVT20']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['LT.DVT30']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['LT.DVT40']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['LT.DVT50']  =  ['3']  #  ['1','2','3','4']

rings_corr_map['LTB.DVT10'] =  ['3']  #  ['1','2','3','4']
rings_corr_map['LTB.DVT20'] =  ['3']  #  ['1','2','3','4']
rings_corr_map['LTB.DVT30'] =  ['3']  #  ['1','2','3','4']
rings_corr_map['LTB.DVT40'] =  ['3']  #  ['1','2','3','4']

rings_corr_map['BI.DVT10']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['BI.DVT20']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['BI.DVT30']  =  ['3']  #  ['1','2','3','4']
rings_corr_map['BI.DVT40']  =  ['3']  #  ['1','2','3','4']

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

# BTM line
rings_corr_map['BTM.DHZ10']  = ['3']

rings_corr_map['BTM.DVT10']  = ['3']

# BTP line
rings_corr_map['BTP.DHZ10']  = ['3']
rings_corr_map['BTP.DHZ20']  = ['3']
rings_corr_map['BTP.DHZ30']  = ['3']

rings_corr_map['BTP.DVT10']  = ['3']
rings_corr_map['BTP.DVT20']  = ['3']
rings_corr_map['BTP.DVT30']  = ['3']
rings_corr_map['BTP.DVT40']  = ['3']

rings = rings_corr_map[corr]


################################################################################
# GATHER ALL THE DATA IN A DICTIONARY AND ALL THE GRAPHS PER PLANE PER RING 

catalog_plus,catalog_minus = getCatalog(folder, corr) 

# for the data plot to store them in case some debugging needed
dict_graphs = {}
dict_graphs_sim = {}

# Every ring can have a different set of BPMs
# Store them in a dictionary which can be re-used
dict_histo  = {}

for p in planes:
    for r in rings:
        #graph_2014, ele = getGraphMADX('madx.%s.%surad/' % ('2014', kick), opts.CORR, kick, p, r, '2014')
        graph_2014, ele = getGraphMADX('madx.%s.%surad_polefaceangles_added/' % ('2015', kick), opts.CORR, kick, p, r, '2014')
        #graph_2014, ele = getGraphMADX('madx.%s.%surad_polefaceangles_hgap_fint/' % ('2015', kick), opts.CORR, kick, p, r, '2014')
        root.SetOwnership(graph_2014,False)

        graph_2014.SetLineColor(629)#root.kViolet+4)
        graph_2014.SetLineStyle(2)
        graph_2014.SetLineWidth(3)

        if (p not in dict_graphs.keys()):
            dict_graphs[p]     = {}
            dict_graphs_sim[p] = {}
            dict_histo[p]      = {}

        if (r not in dict_graphs[p].keys()):
            dict_graphs[p][r]     = []
            dict_graphs_sim[p][r] = []
            dict_histo[p][r]      = []

        if not dict_histo[p][r]:
            histo = getDummyHisto(ele, p, r)
            dict_histo[p][r] = histo 

        #if not dict_graphs_sim[p][r]:
        #    dict_graphs_sim[p][r] = graph_2014 
        dict_graphs_sim[p][r].append ( graph_2014 ) 

        for filename in catalog_plus:
    
            filename_p = folder + '/' + filename
            filename_m = filename_p.replace('plus','minus')

            file_p = open(filename_p, 'r')
            file_m = open(filename_m, 'r')

            dict_plus  = getDict(file_p)
            dict_minus = getDict(file_m)

            #print dict_plus.order()
            graph_p = getGraph(dict_plus,  p, r, ele)
            graph_m = getGraph(dict_minus, p, r, ele)

            graph_diff = diffGraphs( graph_p, graph_m )
            graph_diff.SetName('g%s%s%s' % (p,r,filename.replace(folder,'')) )
            
            dict_graphs[p][r].append(graph_diff)

################################################################################


################################################################################
# PLOT THE KICK RESPONSES

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

        canvas = root.TCanvas("canvas_"+p+'_'+r,"",x_pos,y_pos,1100,850)
        canvas.cd()

        canvas.SetGridy()

        # The histogram can be used to fancy display the name of the BPMs    
        hAxes = dict_histo[p][r]
        hAxes.GetYaxis().SetRangeUser(-20,20)
        hAxes.SetTitle( "Corr: %s Plane: %s Ring: %s" % (corr,p,r) )
        hAxes.Draw("")

        graph_hw_av = getGraphAverage(dict_graphs[p][r])
        
        graph_hw_av.SetLineColor( root.kGreen+2 )
        #graph_hw_av.SetLineWidth( 3 )

        graph_hw_av.SetMarkerColor( root.kGreen+2 )
        graph_hw_av.SetMarkerStyle( 20 )

        graph_hw_av.SetFillColor(root.kGreen+2);
        graph_hw_av.SetFillStyle(1000);

        hAxes = dict_histo[p][r]

        #hAxes.GetXaxis().SetRangeUser(  0,12)
        hAxes.GetYaxis().SetRangeUser(-20,20)
        hAxes.SetTitle( "Corr: %s Plane: %s Ring: %s" % (corr,p,r) )
        hAxes.Draw("")

        graph_hw_av.Draw("PL3")
        root.SetOwnership(graph_hw_av,False)

        graph_2014 = dict_graphs_sim[p][r][0]
        if (graph_hw_av.GetN() != graph_2014.GetN() and not opts.NOBIXBPM):
            print "ERROR (main): graphs have different number of points %d != %d" % (graph_hw_av.GetN(), graph_2014.GetN()) 
            exit(-1)
        

        graph_2014.Draw("L")

        max      = getMax(graph_hw_av)
        max_2014 = getMax(graph_2014)

        if (max < max_2014):
            max = max_2014
     
        max += 15

        #hAxes.GetYaxis().SetRangeUser(-1*max-10,max+10)
        hAxes.GetYaxis().SetRangeUser(-1*max,max)
        #hAxes.GetYaxis().SetRangeUser(-20,20)
        
        tlines = []
        for bin in range(0,hAxes.GetNbinsX()):
            tline = root.TLine(0.5 + bin,-1*max, 0.5 + bin,max)
            tline.SetLineStyle(3)
            tline.Draw()
            tlines.append(tline)
            
        leg = root.TLegend(0.15, 0.71, 0.65, 0.88)
        leg.SetBorderSize(1)
        leg.SetFillColor(0)
        leg.SetTextSize(0.025)
        # trick to have the legend not disappearing
        SetOwnership( leg, 0 )   # 0 = release (not keep), 1 = keep, ot

        leg.AddEntry(graph_hw_av,  " Hardware Response (%d #murad)" % kick, "l")
        leg.AddEntry(graph_2014,   " MADX Sim. 2015 (%d #murad)"    % kick, "l")
        leg.Draw()

        canvas.Update()

        if (opts.SAVE):
            if (opts.NOBIXBPM):
                canvas.SaveAs("plots/r%s/kick_response_%s_%surad_p%s_r%s_nobixbpm.png"  % (r,corr,kick,p,r) )
                canvas.SaveAs("plots/r%s/kick_response_%s_%surad_p%s_r%s_nobixbpm.root" % (r,corr,kick,p,r) )
            else:
                canvas.SaveAs("plots/r%s/kick_response_%s_%surad_p%s_r%s.png"  % (r,corr,kick,p,r) )
                canvas.SaveAs("plots/r%s/kick_response_%s_%surad_p%s_r%s.root" % (r,corr,kick,p,r) )

#print opts.DEBUG
if (opts.DEBUG):
    
    x_step = 800
    y_step = 600

    for p in planes:
        for r in rings:
            hAxes = dict_histo[p][r]
            
            hAxes.GetYaxis().SetRangeUser(-20,20)
            hAxes.SetTitle( "Debug Plots Plane: %s Ring: %s" % (p,r) )
            
            x_pos = 0
            y_pos = 0

            if (int(r)%2 == 0):
                x_pos += x_step
            if (int(r) > 2):
                y_pos += y_step

            cDebug = root.TCanvas("cDebug_"+p+'_'+r,"",x_pos,y_pos,800,600)

            showAllPlotsInDict(dict_graphs[p][r], hAxes, cDebug)
            


