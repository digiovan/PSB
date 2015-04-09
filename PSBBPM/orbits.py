#! /usr/bin/python

import sys
sys.path.append('../')
from helpers import *

import csv

################################################################################
# Useful definitions

def getOrbit(filename):

    csvfile  = open(filename, "rb")

    reader = csv.reader(csvfile, delimiter="\t")

    ctime = 275 # ms
    orbits = {}
    for row in reader: 
        if (len(row) != 32):
            print 'error in the format: expecting 16 columns for the' \
                  ' horizontal plane and 16 columns for the vertical plane'
        
        orbits[ctime] = {}
       
        # mean
        mean_hor = 0
        mean_ver = 0

        for i in range(16):
            mean_hor += float(row[i])    / 16.        # horizontal plane
            mean_ver += float(row[i+16]) / 16.        #   vertical plane
        
        # RMS    
        rms_hor = 0
        rms_ver = 0
        for i in range(16):
            rms_hor += root.TMath.Power(float(row[i])    - mean_hor, 2) / 16.
            rms_ver += root.TMath.Power(float(row[i+16]) - mean_ver, 2) / 16.


        orbits[ctime]['H'] = root.TMath.Sqrt(rms_hor)
        orbits[ctime]['V'] = root.TMath.Sqrt(rms_ver)
        
        ctime += 1
            
    #return orbits

    n_points = len( orbits.keys() )
    #print n_points

    gRMS_hor = root.TGraphErrors( n_points )
    gRMS_ver = root.TGraphErrors( n_points )
    
    id = 0
    for ctime in orbits.keys():
        
        gRMS_hor.SetPoint     (id, float(ctime), orbits[ctime]['H'] ) # value in [mm]
        gRMS_hor.SetPointError(id, 0           , 0                  ) # value in [mm]

        gRMS_ver.SetPoint     (id, float(ctime), orbits[ctime]['V'] ) # value in [mm]
        gRMS_ver.SetPointError(id, 0           , 0                  ) # value in [mm]
         
        id+=1

    return gRMS_hor, gRMS_ver



################################################################################


# MAIN
import optparse
parser = optparse.OptionParser()

# define the options
parser.add_option('-u', '--user',
                  help='specify which user',
                  dest='USER',
                  action='store')

parser.add_option('-r', '--ring',
                  help='specify which ring',
                  dest='RING',
                  action = 'store')

parser.add_option('-b', '--batch',
                  help='do not show the plots',
                  dest='BATCH',
                  default = False, 
                  action = 'store_true')

# get the options
(opts, args) = parser.parse_args()


# Sanity check: Making sure all mandatory options appeared
mandatories = ['USER','RING']
for m in mandatories:
    if not opts.__dict__[m]:
        print "at least the mandatory option %s is missing\n" % m
        parser.print_help()
        exit(-1)

if (opts.BATCH):
    root.gROOT.SetBatch(True) 


user = opts.USER
ring = opts.RING

#filename_corr = user + '/PSB.USER.%s_Ring%s_Bare.dat' % (user, ring)
filename_corr = user + '/PSB.USER.%s_Ring%s_EnergyMatching.dat' % (user, ring)
filename_bare = user + '/PSB.USER.%s_Ring%s_Corr.dat' % (user, ring)

#filename_corr = user + '/PSB.USER.%s_Ring%s_Corr.dat' % (user, ring)
#filename_bare = user + '/PSB.USER.%s_Ring%s_Bare.dat' % (user, ring)

print 'Opening file: ', filename_corr
gRMS_hor_corr, gRMS_ver_corr = getOrbit(filename_corr)

print 'Opening file: ', filename_bare
gRMS_hor_bare, gRMS_ver_bare = getOrbit(filename_bare)


# Horizontal Plane
canvas_hor = root.TCanvas("canvas_hor","",0,0,1100,850)
canvas_hor.cd()

canvas_hor.SetGridy()

gRMS_hor_bare.SetTitle("%s: Horizontal Orbit Ring %s" % (user,ring))

gRMS_hor_bare.GetXaxis().SetTitle("ctime [ms]")
gRMS_hor_bare.GetYaxis().SetTitle("RMS [mm]")
gRMS_hor_bare.GetXaxis().SetRangeUser(280,800)
gRMS_hor_bare.GetYaxis().SetRangeUser(  0,  5)

gRMS_hor_bare.SetLineWidth  (3)
gRMS_hor_bare.SetLineColor  (root.kRed+2)
gRMS_hor_bare.SetMarkerColor(root.kRed+2)
gRMS_hor_bare.SetFillColor  (root.kRed+2)

gRMS_hor_corr.SetLineWidth  (3)
gRMS_hor_corr.SetLineColor  (root.kGreen+2)
gRMS_hor_corr.SetMarkerColor(root.kGreen+2)
gRMS_hor_corr.SetFillColor  (root.kGreen+2)

gRMS_hor_bare.Draw("APL")
gRMS_hor_corr.Draw("PL")

leg_hor = root.TLegend(0.15, 0.76, 0.40, 0.87)
leg_hor.SetBorderSize(1)
leg_hor.SetFillColor(0)
leg_hor.SetTextSize(0.025)
# trick to have the legend not disappearing
SetOwnership( leg_hor, 0 )   # 0 = release (not keep), 1 = keep, ot

#leg_hor.AddEntry(gRMS_hor_bare, "Bare Orbit", "l")
#leg_hor.AddEntry(gRMS_hor_corr, "Corr Orbit", "l")
leg_hor.AddEntry(gRMS_hor_bare, "Corr Orbit", "l")
leg_hor.AddEntry(gRMS_hor_corr, "Energy Matched Orbit", "l")
leg_hor.Draw()

canvas_hor.Update()
#canvas_hor.SaveAs("png/%s_hor_ring%s.png" % (user,ring) )
canvas_hor.SaveAs("png/%s_hor_ring%s_afterEM.png" % (user,ring) )

# Vertical Plane
canvas_ver = root.TCanvas("canvas_ver","",0,0,1100,850)
canvas_ver.cd()

canvas_ver.SetGridy()

gRMS_ver_bare.SetTitle("%s: Vertical Orbit Ring %s" % (user,ring))

gRMS_ver_bare.GetXaxis().SetTitle("ctime [ms]")
gRMS_ver_bare.GetYaxis().SetTitle("RMS [mm]")
gRMS_ver_bare.GetXaxis().SetRangeUser(280,800)
gRMS_ver_bare.GetYaxis().SetRangeUser(  0,  5)

gRMS_ver_bare.SetLineWidth  (3)
gRMS_ver_bare.SetLineColor  (root.kRed+2)
gRMS_ver_bare.SetMarkerColor(root.kRed+2)
gRMS_ver_bare.SetFillColor  (root.kRed+2)

gRMS_ver_corr.SetLineWidth  (3)
gRMS_ver_corr.SetLineColor  (root.kGreen+2)
gRMS_ver_corr.SetMarkerColor(root.kGreen+2)
gRMS_ver_corr.SetFillColor  (root.kGreen+2)

gRMS_ver_bare.Draw("APL")
gRMS_ver_corr.Draw("PL")

leg_ver = root.TLegend(0.15, 0.76, 0.30, 0.87)
leg_ver.SetBorderSize(1)
leg_ver.SetFillColor(0)
leg_ver.SetTextSize(0.025)
# trick to have the legend not disappearing
SetOwnership( leg_ver, 0 )   # 0 = release (not keep), 1 = keep, ot

#leg_ver.AddEntry(gRMS_ver_bare, "Bare Orbit", "l")
#leg_ver.AddEntry(gRMS_ver_corr, "Corr Orbit", "l")
leg_ver.AddEntry(gRMS_ver_bare, "Corr Orbit", "l")
leg_ver.AddEntry(gRMS_ver_corr, "Energy Matched Orbit", "l")
leg_ver.Draw()

canvas_ver.Update()
#canvas_ver.SaveAs("png/%s_ver_ring%s.png" % (user,ring) )
canvas_ver.SaveAs("png/%s_ver_ring%s_afterEM.png" % (user,ring) )
