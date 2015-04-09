#! /usr/bin/python

import sys
sys.path.append('../')

import numpy as np

from helpers import *

def madx_format( a_string , ring):

    if ('PSB.' in a_string):
        a_string = a_string.replace ("PSB.BRMB",  "BR.BHZ").replace("0\"","$\"")
        a_string = a_string.replace ("PSB.BRQF",  "BR.QF" ).replace("11\"","1$\"").replace("15\"","2$\"")
        a_string = a_string.replace ("PSB.BRQD",  "BR.QD" ).replace("13\"","$\"")
        a_string = a_string.replace ("PSB.BRUES", "BR"+ring+".BPM").replace("12\"","L3$\"")

    if ('LT.'     in a_string or
        'LTB.'    in a_string or    
        'BI'      in a_string  ):
        a_string = a_string.replace("\";","$\";")
        
    a_string = a_string.replace("BI.QNO50","BI"+ring+".QNO50")
    a_string = a_string.replace("BI.QNO60","BI"+ring+".QNO60")
    a_string = a_string.replace("BI.BPM40","BI"+ring+".BPM40")
    a_string = a_string.replace("BI.BPM50","BI"+ring+".BPM50")

    return a_string

def append_in_array(ele,array):
    if (ele):
        array.append( float(ele) )
    else:
        array.append ( 0.0 )


def ring_alignment(ele_name, dpsi, ring):
    
    if (ring == '3'):    
        return 0.0

    ele_to_correct = ['PSB','BI.QNO50','BI.QNO60','BI.BPM40','BI.QNO50']  
    if not any(ele in ele_name for ele in ele_to_correct): 
        return 0.0

    if (ring == "4"):
        return -0.360 * np.sin(dpsi)

    if (ring == "2"):
        return +0.360 * np.sin(dpsi)

    if (ring == "1"):
        return +0.720 * np.sin(dpsi)



def printAlignErrs(lines,names,
                   offsets_hor,
                   offsets_ver,
                   offsets_lon,
                   tilts,
                   lonPos,
                   ring,
                   sel_list=""):
    
    #########################################################################################
    # sanity check
    if (len(names) != len(offsets_hor)):
        print "ERROR: the names and offsets_hor have different size! Exiting"
        return

    if (len(offsets_hor) != len(offsets_ver)):
        print "ERROR: the offsets_hor and offsets_ver have different size! Exiting"
        return

    if (len(offsets_ver) != len(offsets_lon)):
        print "ERROR: the offsets_ver and offsets_lon have different size! Exiting"
        return

    if (len(offsets_lon) != len(tilts)):
        print "ERROR: the offsets_lon and tilts have different size! Exiting"
        return

    if (len(tilts) != len(lonPos)):
        print "ERROR: the tilts and lonPos have different size! Exiting"
        return
    #########################################################################################


    #########################################################################################
    # variable to fill
    names_E = []
    names_S = []

    offs_hor_E  = []
    offs_hor_S  = []

    offs_ver_E  = []
    offs_ver_S  = []

    offs_lon_E  = []
    offs_lon_S  = []

    tilts_E  = []
    tilts_S  = []

    lpos_E  = []
    lpos_S  = []
    #########################################################################################

    
    #########################################################################################
    # split the content in Entry and Sortie points
    for i in range( 0, len(names) ):
        
        # check the name is compliant with the list of possible naming convention
        if not any(sel in names[i] for sel in sel_list):
            #print names[i], "-- skip"
            continue

        #print names[i]

        if (names[i][-2:] == ".E"):
            names_E.append( lines[i] + "." + names[i] )

            append_in_array( offsets_hor[i], offs_hor_E )
            append_in_array( offsets_ver[i], offs_ver_E )
            append_in_array( offsets_lon[i], offs_lon_E )
            append_in_array(       tilts[i],    tilts_E )
            append_in_array(      lonPos[i],     lpos_E )

        if (names[i][-2:] == ".S"):

            names_S.append( lines[i] + "." + names[i] )

            append_in_array( offsets_hor[i], offs_hor_S )
            append_in_array( offsets_ver[i], offs_ver_S )
            append_in_array( offsets_lon[i], offs_lon_S )
            append_in_array(       tilts[i],    tilts_S )
            append_in_array(      lonPos[i],     lpos_S )


    # debugging        
    #print names_E, names_S
    #print offs_hor_E, offs_ver_E
    #print offs_hor_S, offs_ver_S
    #print offs_lon_S, offs_lon_S
    #print tilts_S, tilts_S
    #print lpos_E, lpos_S


    # loop over the horizontal offsets
    for ele_E in names_E:
        
        baseName = ele_E[:-2]
        
        if ( baseName+".S" not in names_S ):    
            continue

        #default variables    
        ele_name = "default name"
        dx = 0.0
        dy = 0.0
        ds = 0.0
        dphi   = 0.0
        dtheta = 0.0
        dpsi   = 0.0

        index_E = names_E.index(baseName+".E")
        index_S = names_S.index(baseName+".S")
            
        name_array = baseName.split(".")
        ele_name = name_array[0]+"."+name_array[1]+name_array[2]
        
        if (offs_hor_E[ index_E ]):
            dx =  offs_hor_E[ index_E ]
        if (offs_ver_E[ index_E ]):
            dy =  offs_ver_E[ index_E ]
        if (offs_lon_E[ index_E ] and offs_lon_S[ index_S ]):
            ds = (offs_lon_E[ index_E ] + offs_lon_S[ index_S ])/2.
            
            ds_diff = lpos_S[index_S]-lpos_E[index_E]
            if ds_diff:
                dphi   = np.arctan( (offs_ver_S[index_S]-offs_ver_E[index_E]) / (lpos_S[index_S]-lpos_E[index_E]) )
                dtheta = np.arctan( (offs_hor_S[index_S]-offs_hor_E[index_E]) / (lpos_S[index_S]-lpos_E[index_E]) )

        if (tilts_E[ index_E ]):
            dpsi   = -1.0 * tilts_E[ index_E ]

        dx += ring_alignment(ele_name, dpsi, ring)
    
        #if (ring == "4"):
        #    dx -= 0.360 * np.sin(dpsi)
        #
        #if (ring == "2"):
        #    dx += 0.360 * np.sin(dpsi)
        #
        #if (ring == "1"):
        #    dx += 0.720 * np.sin(dpsi)

        ########################################################################
        print "SELECT, FLAG = ERROR, CLEAR;"
        
        align_error  = "SELECT, FLAG = ERROR, PATTERN = "
        align_error += "\"" + ele_name + "\"; "
        align_error += "EALIGN, DX = " + '{0:.13f}'.format(dx)     + ", "
        align_error +=         "DY = " + '{0:.13f}'.format(dy)     + ", "
        align_error +=         "DS = " + '{0:.13f}'.format(ds)     + ", "
        align_error +=       "DPHI = " + '{0:.13f}'.format(dphi)   + ", "
        align_error +=     "DTHETA = " + '{0:.13f}'.format(dtheta) + ", "
        align_error +=       "DPSI = " + '{0:.13f}'.format(dpsi)   + "; "

        print madx_format(align_error, ring)
       
################################################################################
# MAIN
################################################################################

# for the options
import optparse
parser = optparse.OptionParser()

# define the options
parser.add_option('-f', '--csvfile',
                  help='specify the name of the csv file with the offsets',
                  dest='CSVFILE',
                  action='store')

parser.add_option('-r', '--ring',
                  help='specify the ring',
                  dest='RING',
                  action='store')

# get the options
(opts, args) = parser.parse_args()


# Sanity check: Making sure all mandatory options appeared
mandatories = ['CSVFILE','RING']
for m in mandatories:
    if not opts.__dict__[m]:
        print "at least the mandatory option %s is missing\n" % m
        parser.print_help()
        exit(-1)


csvfilename = opts.CSVFILE

if ('LT' in csvfilename and opts.RING != '3'):
        print "\n\tLT and LTB lines are only at ring 3 height level, use \"-r 3\" option only\n"
        exit(-1)

#file_name = 'ecarts/PSB_OFFSETS_31MAR2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv'
#file_name = 'ecarts/LT_OFFSETS_31MAR2015_Faisceau_Derniers_TheoriquesBumpees_Existant.csv'


################################################################################
#
columns = defaultdict(list)
readCSV(csvfilename, columns)

offsets_hor  = columns [4][1:]
offsets_ver  = columns [7][1:]
offsets_lon  = columns[13][1:]
tilts        = columns[10][1:]
lonPos       = columns[17][1:]


ele_map = ['BRMB', 'BRQF', 'BRQD', 'BRUES']

if ('LT_'  in csvfilename or
    'LTB_' in csvfilename or
    'BI_'  in csvfilename  ):
    ele_map = ['QFN','QDN','QFW','QDW','QNO','BHZ','BPM']
    

for ele in ele_map:
    printAlignErrs ( columns [1][1:],
                     columns [2][1:],
                     offsets_hor,
                     offsets_ver,
                     offsets_lon,
                     tilts,
                     lonPos,
                     opts.RING,
                     [ele] )
    print '\n\n'

