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
        graph.SetPoint(id,float(id+0.5),value/1000.)

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
        graph.SetPoint(id,float(id+0.5),value*1000.)

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
measurements = [folder + thefile for thefile in commands.getoutput('ls -t %s' % folder).split()]
measurements = sorted(measurements, key = lambda x: int(x.split("-")[1]))
num_meas  = int( len(measurements) )
num_meas /= len(dpop_list)

print 'List of %d dp/p points:' % len(dpop_list), dpop_list
print 'Number of measurements per dp/p: %d' % num_meas

p = 'H'
r = '1'
planes = ['H','V']
rings  = ['1'] #,'2','3','4']

################################################################################
# create the dictionary needed to handle all the measurements

positions = ordered_dict()
id = -1

for i in range( 0,len(measurements) ):
    #print ''
    if (i%num_meas == 0):
        id += 1

    if (dpop_list[id] not in positions.keys()):
        positions[ dpop_list[id] ] = ordered_dict()

    # open the file    
    thefile = open(measurements[i], 'r')

    vetos = ('@','#','*','logical')
    for line in thefile:
        if not any(veto in line for veto in vetos): 
            info = line.split()
            
            if (info[0] not in positions[ dpop_list[id] ].keys()):
                positions[dpop_list[id]][ info[0] ] = ordered_dict()
                
            if (info[1] not in positions[dpop_list[id]][info[0]].keys()):
                positions[dpop_list[id]][info[0]][ info[1] ] = ordered_dict()

            if (info[2] not in positions[dpop_list[id]][info[0]][info[1]].keys()):
                positions[dpop_list[id]][info[0]][info[1]][ info[2] ] = []

            #print id,measurements[i],dpop_list[id],info[0],info[1],info[2],info[3]    
            positions[dpop_list[id]][info[0]][info[1]][ info[2] ].append(info[3])

    thefile.close()

#print positions.ordered_items()
#print positions['0.01']['LT.BPM10']['H']['1']
################################################################################


# sanity check
length = -999
for mom_spread in dpop_list:
    if length == -999:
        length = len(positions[mom_spread].order())

    if length != len(positions[mom_spread].order()):
        print "ERROR (SANITY CHECK): the \"positions\" dictionary has different BPMS list " \
              "for different momentum spreads"
        exit(-1)



################################################################################
# fill the histogram
histos = ordered_dict()

for mom_spread in positions.order():
    #print mom_spread

    for bpm in positions[mom_spread].order():
        #print bpm

        # create the histogram if not present
        for p in planes:
            for r in rings:
                
                # fill the histogram
                if positions[mom_spread][bpm].get(p) == None:
                    continue
                if positions[mom_spread][bpm][p].get(r) == None:
                    continue

                bpm_name = bpm+"_"+p+"_"+r 
                if bpm_name not in histos.keys():
                    histo2f = root.TH2F('h'+bpm_name,bpm_name,2001,-0.1,0.1,2001,-100,100)
                    histos[bpm_name] = histo2f

                if positions[mom_spread][bpm][p][r]:
                    for value in positions[mom_spread][bpm][p][r]:
                        #print mom_spread, bpm, p, r, value
                        histos[bpm_name].Fill( float(mom_spread), float(value)/1000. )

#print histos.order()
################################################################################


################################################################################
# draw and fit

# find the min and max dispersion measured
mmin, mmax = 999, -999
for mom_spread in positions.order():

    if float(mom_spread) < mmin:
        mmin = float(mom_spread)
    if float(mom_spread) > mmax:
        mmax = float(mom_spread)
    
print mmin, mmax
#exit(0)

dispersions = ordered_dict()
canvases = []

for histo_name in histos.order():
    #print histo_name

    item = histo_name.split("_")
    
    # plane
    if item[0] not in dispersions.keys():
        dispersions[ item[0] ] = ordered_dict()

    if item[1] not in dispersions[item[0]].keys():
        dispersions[item[0]][ item[1] ] = ordered_dict()

    if item[2] not in dispersions[item[0]][item[1]].keys():
        dispersions[item[0]][item[1]][ item[2] ] = []

    x_pos = 0
    y_pos = 0

    canvas = root.TCanvas("canvas_"+histo_name,'',x_pos,y_pos,900,750)
    canvas.cd()

    #histos[histo_name].Draw("COLZ")
    
    profile =  histos[histo_name].ProfileX()
    profile.GetXaxis().SetRangeUser(mmin,mmax)
    profile.GetXaxis().SetTitle("#Deltap/p")
    profile.GetYaxis().SetTitle("Average Position [mm]")
    profile.Draw()

    disp_fit = root.TF1("disp_fit","pol1",mmin,mmax) 
    profile.Fit('disp_fit',"Q")

    print histo_name, disp_fit.GetParameter(1), "\pm", disp_fit.GetParError(1)
    dispersions[item[0]][item[1]][ item[2] ].append(disp_fit.GetParameter(1))
    dispersions[item[0]][item[1]][ item[2] ].append(disp_fit.GetParError(1) )

    # title = root.TLatex(0,0,histo_name )
    # title.SetTextFont(42)
    # title.Draw()

    canvases.append( canvas )
    canvas.Update()

#print dispersions
#exit(0)
################################################################################

################################################################################
# save the data files

# grep BPM MADX/Linac2-PSB/2014/out/ltltbbi1.out | awk '{print $1,$2}'
bpm_pos = ordered_dict()
bpm_pos["LT.BPM10"]  =   1.40000
bpm_pos["LT.BPM20"]  =  17.17750
bpm_pos["LT.BPM30"]  =  20.99500
bpm_pos["LT.BPM40"]  =  34.04513
bpm_pos["LT.BPM50"]  =  52.78314
bpm_pos["LTB.BPM10"] =  60.43754
bpm_pos["LTB.BPM20"] =  67.64204
bpm_pos["LTB.BPM30"] =  82.04604
bpm_pos["BI.BPM00"]  =  89.75904
bpm_pos["BI.BPM10"]  =  95.21204
bpm_pos["BI.BPM20"]  = 104.41364
bpm_pos["BI.BPM30"]  = 107.29405
bpm_pos["BI1.BPM40"] = 124.51225
bpm_pos["BI1.BPM50"] = 127.08525

#for p in planes:
#    for r in rings:
#        
#        thefile = open("dispersion_data_"+p+"_"+r,"w")
#        # header
#        thefile.write('# NAME  S DISPERSION  ERR_DISPERSION\n')
#        for bpm in dispersions.order():
#            thefile.write( "%s %f %f %f 0.0 0.0\n" % (bpm, 
#                                                      bpm_pos[bpm], 
#                                                      dispersions[bpm][p][r][0], 
#                                                      dispersions[bpm][p][r][1]) )
#            
#        thefile.close()

#for p in planes:
for r in rings:
        
    thefile = open("dispersion_data_"+r,"w")
    # header
    thefile.write('# NAME  S DISPERSION  ERR_DISPERSION\n')

    for bpm in dispersions.order():
        thefile.write( "%s %f " % (bpm,bpm_pos[bpm]) )
        for p in planes:
            thefile.write( "%f %f " % (dispersions[bpm][p][r][0], 
                                       dispersions[bpm][p][r][1]) )
        thefile.write( "\n" )
    thefile.close()

################################################################################

