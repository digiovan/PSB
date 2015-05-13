#! /usr/bin/python

import os
import commands
import random
import math

import ROOT as root
root.gStyle.SetOptStat(0)
from ROOT import SetOwnership

#root.gROOT.SetBatch(True) 

# for the options
import optparse
parser = optparse.OptionParser()

# define the options
parser.add_option('-f', '--folder',
                  help='specify which folder contains the data',
                  dest='FOLDER',
                  action='store')

parser.add_option('-d', '--dpop_list',
                  help='list of the momentum spreads, e.g. 0.001,0.02,-0.001',
                  dest='DPOP_LIST',
                  action = 'store')


# get the options
(opts, args) = parser.parse_args()

# Sanity check: Making sure all mandatory options appeared
mandatories = ['FOLDER','DPOP_LIST']
for m in mandatories:
    if not opts.__dict__[m]:
        print "at least the mandatory option %s is missing\n" % m
        parser.print_help()
        exit(-1)

################################################################################
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

    #print the_dict
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


def getEle(dictionary, ring):

    ele = []
    for e in dictionary.order():
        #print e
        if 'LT' in e:
            #print e
            ele.append(e)
        if 'BI.' in e:
            #print e
            ele.append(e)
        if ('BI%s.'%ring) in e:
            #print e
            ele.append(e)

    return ele 


def getDummyHisto(dictionary, plane, ring):

    ele = getEle(dictionary, ring)
    
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
   
def getGraph(dictionary, plane, ring):

    ele = getEle(dictionary, ring)

    graph = root.TGraph( len(ele) )


    #graph.GetYaxis().SetTitleOffset(1.2)

    id = 0
    for e in ele:

        value = float( dictionary[e][plane][ring] ) # [mm]       
        graph.SetPoint(id,float(id+0.5),value/1000)

        #graph.GetXaxis().SetBinLabel(id+1,e)

        id += 1
    
    graph.SetMarkerStyle(20)

    return graph#, hDummy


def getGraphAverage(listOfGraphs): 
    #print listOfGraphs

    n_points = 0
    y_min = []
    y_max = []
    
    for graph in listOfGraphs:
        
        if n_points == 0:
            n_points = graph.GetN()
            for i in range(n_points):
                y_min.append(  99999 )
                y_max.append( -99999 )

        if n_points != graph.GetN():
            print 'ERROR (getGraphAverage): different number of points in the graphs'
            exit(1)

        for i in range(0,n_points):
            x, y = root.Double(0), root.Double(0)
            graph.GetPoint(int(i), x, y)
            #print x,y
            
            if y < y_min[i]:
                y_min[i] = y

            if y > y_max[i]:
                y_max[i] = y
 
        #print y_min
        #print y_max

    graphAverage = root.TGraphErrors( n_points )

    for i in range(0,n_points):
        y_avg = (y_min[i]+y_max[i])/2.
        y_err = (y_max[i]-y_min[i])/2.

        graphAverage.SetPoint     ( int(i), float(i)+0.5, y_avg )
        graphAverage.SetPointError( int(i),            0, y_err )


    return graphAverage

def getGraphMADX(folder, corr, kick, plane, ring, sim):

    #folder     = 'madx.%s.%surad/' % (sim, kick)

    filename_p = 'kr_ltltbbi%s_%s_plus.out'  % (ring, corr.lower() )
    filename_m = 'kr_ltltbbi%s_%s_minus.out' % (ring, corr.lower() )
    
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
    
    if ('2014' in str(sim)):
        ele_p = commands.getoutput('cat %s | grep BPM | awk \'{print $1}\'' % file_p).replace("\"","").split()
        ele_m = commands.getoutput('cat %s | grep BPM | awk \'{print $1}\'' % file_m).replace("\"","").split()

        x_p = commands.getoutput('cat %s | grep BPM | awk \'{print $3}\'' % file_p).split()
        x_m = commands.getoutput('cat %s | grep BPM | awk \'{print $3}\'' % file_m).split()
                                                                               
        y_p = commands.getoutput('cat %s | grep BPM | awk \'{print $4}\'' % file_p).split()
        y_m = commands.getoutput('cat %s | grep BPM | awk \'{print $4}\'' % file_m).split()

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
        if (p == "H"):
            value = float(x_p[id])-float(x_m[id]) # [mm]       
        if (p == "V"):
            value = float(y_p[id])-float(y_m[id]) # [mm]       

        #print id,  value/1000
        graph.SetPoint(id,float(id+0.5),value*1000)

        id += 1
    
    graph.SetMarkerStyle(20)

    return graph


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

folder    = opts.FOLDER
dpop_list = opts.DPOP_LIST.split(',')

#print folder,dpop_list, 

# assuming that one took the same number of measurements per each momentum spread
measurements = [folder + thefile for thefile in commands.getoutput('ls %s' % folder).split()]
num_meas  = int( len(measurements) )
num_meas /= len(dpop_list)

print 'List of %d dp/p points:' % len(dpop_list), dpop_list
print 'Number of measurements per dp/p: %d' % num_meas


p = 'H'
r = '1'
#planes = ['H','V']
#rings  = ['1']#,'2','3','4']

histos = ordered_dict()
id = -1

for i in range( 0,len(measurements) ):
    #print ''
    if (i%num_meas == 0):
        id += 1
    
    thefile = open(measurements[i], 'r')
    dictionary = getDict(thefile)

    #print dictionary.ordered_items()
    
    for bpm in dictionary.order():
      
        #print bpm, dictionary[bpm]

        # create the histogram if not present
        if bpm not in histos.keys():
            histo2f = root.TH2F('h'+bpm,'',101,-0.1,0.1,1001,-5,5)
            histos[bpm] = histo2f
            
        # fill the histogram
        if dictionary[bpm][p].has_key(r) and dictionary[bpm][p][r]:
            # print bpm, p, r, dictionary[bpm][p][r], id
            histos[bpm].Fill( float(dpop_list[id]), float(dictionary[bpm][p][r])/1000 )
            
    thefile.close()

canvases = []

for bpm in histos.order():
    #print histo

    x_step = 800
    y_step = 600
    x_pos = 0
    y_pos = 0

    canvas = root.TCanvas("canvas_"+bpm,'',x_pos,y_pos,1100,850)
    canvas.cd()

    #histos[bpm].Draw("COLZ")
    
    profile =  histos[bpm].ProfileX()
    profile.Draw()
    profile.Fit('pol1')
    

    title = root.TLatex(0,0,bpm )
    title.SetTextFont(42)
    title.Draw()

    canvases.append( canvas )
    canvas.Update()


#print histos
exit(0)



catalog_plus,catalog_minus = getCatalog(folder, corr) 

#planes = ['H','V']
planes = []
if ('DHZ' in corr):
 planes = ['H']
if ('DVT' in corr):
 planes = ['V']
 
rings  = ['1']#,'2','3','4']

dict_graphs = {}
dict_histo  = {}

for filename in catalog_plus:
    
    filename_p = folder + '/' + filename
    filename_m = filename_p.replace('plus','minus')

    file_p = open(filename_p, 'r')
    file_m = open(filename_m, 'r')

    dict_plus  = getDict(file_p)
    dict_minus = getDict(file_m)

    for p in planes:
        for r in rings:
            #print filename, p, r
            
            #graph_p, axis = getGraph(dict_plus,  p, r)
            #graph_m, axis = getGraph(dict_minus, p, r)

            graph_p = getGraph(dict_plus,  p, r)
            graph_m = getGraph(dict_minus, p, r)

            graph_diff = diffGraphs( graph_p, graph_m )
            graph_diff.SetName('g%s%s%s' % (p,r,filename.replace(folder,'')) )

            if (p not in dict_graphs.keys()):
                dict_graphs[p] = {}
                dict_histo[p]  = {}

            if (r not in dict_graphs[p].keys()):
                dict_graphs[p][r] = []
                dict_histo[p][r]  = []

            dict_graphs[p][r].append(graph_diff)

            # this is just to display better names, BPMs, etc, etc
            # To avoid runtime warning for each filename
            if not dict_histo[p][r]:
                histo = getDummyHisto(dict_plus,  p, r)
                dict_histo[p][r] = histo 
            
        
# print dict_graphs           
canvases = []
for p in planes:
    for r in rings:

        # print p, r
        # print len(dict_graphs[p][r])

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

        # canvas.SetGridx()
        canvas.SetGridy()

        graph_hw_av = getGraphAverage(dict_graphs[p][r])
        
        graph_hw_av.SetLineColor( root.kGreen+2 )
        #graph_hw_av.SetLineWidth( 3 )

        graph_hw_av.SetMarkerColor( root.kGreen+2 )
        graph_hw_av.SetMarkerStyle( 20 )

        graph_hw_av.SetFillColor(root.kGreen+2);
        graph_hw_av.SetFillStyle(1000);

        hAxes = dict_histo[p][r]

        hAxes.GetYaxis().SetRangeUser(-20,20)
        hAxes.SetTitle( "Corr: %s Plane: %s Ring: %s" % (corr,p,r) )
        hAxes.Draw("")

        graph_hw_av.Draw("PL3")
        root.SetOwnership(graph_hw_av,False)
                

        graph_2014 = getGraphMADX('madx.%s.%surad.fix0f20140826/' % ('2014', kick), opts.CORR, kick, p, r, '2014')
        root.SetOwnership(graph_2014,False)

        graph_2014.SetLineColor(root.kViolet)
        graph_2014.SetLineStyle(3)
        graph_2014.SetLineWidth(3)

        if (graph_hw_av.GetN() != graph_2014.GetN()):
            print "ERROR (main): graphs have different number of points"
            exit(-1)

        graph_2014.Draw("L")


        # graph_2011 = getGraphMADX(opts.CORR, kick, p, r, '2011')
        # root.SetOwnership(graph_2011,False)
        # 
        # graph_2011.SetLineColor(root.kRed)
        # graph_2011.SetLineStyle(7)
        # graph_2011.SetLineWidth(3)
        # 
        # if (graph_hw_av.GetN() != graph_2011.GetN()):
        #     print "ERROR (main): graphs have different number of points"
        #     exit(-1)
        # 
        # graph_2011.Draw("L")
        


        graph_2011v2 = getGraphMADX('madx.%s.%surad/' % ('2011v2', kick), opts.CORR, kick, p, r, '2011')
        root.SetOwnership(graph_2011v2,False)

        graph_2011v2.SetLineColor(root.kAzure+2)
        graph_2011v2.SetLineStyle(9)
        graph_2011v2.SetLineWidth(3)

        if (graph_hw_av.GetN() != graph_2011v2.GetN()):
            print "ERROR (main): graphs have different number of points"
            exit(-1)

        graph_2011v2.Draw("L")

        max = getMax(graph_hw_av)
        
        max_2014   = getMax(graph_2014)
        #max_2011   = getMax(graph_2011)
        max_2011v2 = getMax(graph_2011v2)

        # print max, max_2014, max_2011, max_2011v2

        if (max < max_2014):
            max = max_2014
        #if (max < max_2011):
        #    max = max_2011
        if (max < max_2011v2):
            max = max_2011v2

        # print max, -1*max-10,max+10     
     
        hAxes.GetYaxis().SetRangeUser(-1*max-10,max+10)
        

        leg = root.TLegend(0.15, 0.71, 0.65, 0.88)
        leg.SetBorderSize(1)
        leg.SetFillColor(0)
        leg.SetTextSize(0.025)
        # trick to have the legend not disappearing
        SetOwnership( leg, 0 )   # 0 = release (not keep), 1 = keep, ot

        leg.AddEntry(graph_hw_av,  " Hardware Response", "l")
        leg.AddEntry(graph_2014,   " MADX Sim 2014", "l")
        # leg.AddEntry(graph_2011,   " MADX Sim 2011", "l")
        leg.AddEntry(graph_2011v2, " MADX Sim 2011 (operational 2014 currents)", "l")

        leg.Draw()

        canvas.Update()

        # canvas.SaveAs("plots/r%s/kick_response_%s_%surad_p%s_r%s.png"  % (r,corr,kick,p,r) )
        # canvas.SaveAs("plots/r%s/kick_response_%s_%surad_p%s_r%s.root" % (r,corr,kick,p,r) )
        
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
            
#
#refLabel = 'Reference for Sim vs HW Test'
#hwLabel  = 'HW ' + corr
#simLabel_2011    = 'Sim %s +500.0 urad 2011 MADX file' % corr
#simLabel_2014_v1 = 'Sim %s +500.0 urad 2014 MADX file v1' % corr
#simLabel_2014_v2 = 'Sim %s +500.0 urad 2014 MADX file v2' % corr
#
#refId = -999
#hwId  = -999
#simId_2011    = -999
#simId_2014_v1 = -999
#simId_2014_v2 = -999
#
#for line in catalog:
#    if refLabel in line:
#        refId = getId(line)
#
#    if hwLabel in line:
#        hwId = getId(line)
#
#    if simLabel_2011 in line:
#        simId_2011 = getId(line)
#
#    if simLabel_2014_v1 in line:
#        simId_2014_v1 = getId(line)
#
#    if simLabel_2014_v2 in line:
#        simId_2014_v2 = getId(line)
#
#
##print refId, hwId, simId_2011, simId_2014_v1, simId_2014_v2
#if refId == -999:
#    print 'ERROR: file not found for reference'
#    exit(-1)
#if hwId == -999:
#    print 'ERROR: file not found for hardware'
#    exit(-1)
#if simId_2011 == -999:
#    print 'ERROR: file not found for 2011 MADX simulation'
#    exit(-1)
#if simId_2014_v1 == -999:
#    print 'ERROR: file not found for 2014 v1 MADX simulation'
#    exit(-1)
#if simId_2014_v2 == -999:
#    print 'ERROR: file not found for 2014 v2 MADX simulation'
#    exit(-1)
#
#
#
#refFile = open('pstt2cat/tt2ref-%d' % refId, 'r')
#refDict = getDict(refFile)
#
#hwFile = open('pstt2cat/tt2ref-%d' % hwId, 'r')
#hwDict = getDict(hwFile)
#
#simFile_2011 = open('pstt2cat/tt2ref-%d' % simId_2011, 'r')
#simDict_2011 = getDict(simFile_2011)
#
#simFile_2014_v1 = open('pstt2cat/tt2ref-%d' % simId_2014_v1, 'r')
#simDict_2014_v1 = getDict(simFile_2014_v1)
#
#simFile_2014_v2 = open('pstt2cat/tt2ref-%d' % simId_2014_v2, 'r')
#simDict_2014_v2 = getDict(simFile_2014_v2)
#
#
#
#
#canvases = []
#
#for r in rings:
#    for p in planes:
#        
#        cName = 'c_' + r + '_' + p 
#        pos = 100 * float(r)
#        shift = 0
#        if (p == 'V'):
#            shift = 200
#
#        canvas = root.TCanvas(cName,"",int(pos+shift),int(pos),1000,750)
#        canvas.cd()
#
#        canvas.SetGridx()
#        canvas.SetGridy()
#        
#        refGraph, axis = getGraph(refDict, p, r, root.kGreen+2)
#        refGraph.SetLineWidth(3)
#
#        hwGraph,  axis = getGraph(hwDict , p, r, 629)
#
#        simGraph_2011,    axis = getGraph(simDict_2011    , p, r, root.kBlack)
#        simGraph_2014_v1, axis = getGraph(simDict_2014_v1 , p, r, root.kAzure+2)
#        simGraph_2014_v2, axis = getGraph(simDict_2014_v2 , p, r, root.kViolet+2)
#
#        #axis.GetYaxis().SetRangeUser(-10000,10000)
#        axis.GetYaxis().SetRangeUser(-15,15)
#
#        axis.Draw("")
#
#        refGraph.Draw("PL")
#        hwGraph.Draw("PL")
#        simGraph_2011.Draw("PL")
#        simGraph_2014_v1.Draw("PL")
#        #simGraph_2014_v2.Draw("PL")
#        
#        title = root.TLatex(2.6,16, "Ring %s/%s kick of 500.0 urad" % (r,corr) )
#        title.SetTextFont(42)
#        title.Draw()
#
#
#        leg = root.TLegend(0.15, 0.71, 0.35, 0.88)
#        leg.SetBorderSize(1)
#        leg.SetFillColor(0)
#        leg.AddEntry(refGraph, "Reference", "lp")
#        leg.AddEntry(hwGraph,  "HW kick +500 urad", "lp")
#        leg.AddEntry(simGraph_2011, "SIM kick +500 urad (2011)", "lp")
#        leg.AddEntry(simGraph_2014_v1, "SIM kick +500 urad (2014)", "lp")
#        leg.Draw()
#        
#        canvases.append( canvas )
#        canvas.Update()
#        canvas.SaveAs("png/ring%s/corr%s_p%s_r%s.png" % (r,corr.replace(".","_"),p,r) )
#        
#
#
#        canvas_diff = root.TCanvas(cName+"_diff","",int(pos+shift),int(pos),1000,750)
#        canvas_diff.cd()
#        
#        canvas_diff.SetGridx()
#        canvas_diff.SetGridy()
#
#        hwGraphDiff          = diffGraphs(hwGraph, refGraph)
#        simGraphDiff_2011    = diffGraphs(simGraph_2011   , refGraph)
#        simGraphDiff_2014_v1 = diffGraphs(simGraph_2014_v1, refGraph)
#        
#        axis.GetYaxis().SetTitle( "difference w.r.t. ref, " + axis.GetYaxis().GetTitle() )
#        axis.Draw("")
#        hwGraphDiff.Draw("PL")
#        simGraphDiff_2011.Draw("PL")    
#        simGraphDiff_2014_v1.Draw("PL")
# 
#        title.Draw()
#
#        leg_diff = root.TLegend(0.15, 0.71, 0.35, 0.88)
#        leg_diff.SetBorderSize(1)
#        leg_diff.SetFillColor(0)
#        leg_diff.AddEntry(hwGraphDiff,  "HW kick +500 urad", "lp")
#        leg_diff.AddEntry(simGraphDiff_2011, "SIM kick +500 urad (2011)", "lp")
#        leg_diff.AddEntry(simGraphDiff_2014_v1, "SIM kick +500 urad (2014)", "lp")
#        leg_diff.Draw()
#        
#        canvases.append( canvas_diff )
#        canvas_diff.Update()
#        canvas_diff.SaveAs("png/ring%s/diff_corr%s_p%s_r%s.png" % (r,corr.replace(".","_"),p,r) )
