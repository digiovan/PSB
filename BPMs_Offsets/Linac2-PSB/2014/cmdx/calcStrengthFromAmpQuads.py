#! /usr/bin/python

# Excecute this program with the command: >./calcStrengthFromAmpQuads.py

# general
# The momentum is calculated from the kinetic energy of 50 MeV
# According to R.Scrivens 31/7/2014
# Original papers refer only to 50 MeV: https://accelconf.web.cern.ch/accelconf/l76/papers/a07.pdf

momentum = 0.3103662

inj_mag_rig = 3.3356 * momentum  #1.03526 # [Tm]
print  " %s  %7.5f [Tm] " % ("BRHO=", (inj_mag_rig)  )

curr_2014 = {}
cal  = {}

################################################################################
# 2014 settings

# LT
curr_2014["LT.QFN10"] =  293.00 # A
curr_2014["LT.QDN12"] =  225.00 # A
curr_2014["LT.QFN20"] =  125.00 # A
curr_2014["LT.QDN22"] =   85.00 # A
curr_2014["LT.QFN30"] =   43.20 # A
curr_2014["LT.QDN32"] =   59.00 # A
curr_2014["LT.QFN40"] =  114.50 # A
curr_2014["LT.QDN42"] =   97.10 # A
curr_2014["LT.QFN50"] =   92.97 # A
curr_2014["LT.QDN55"] =   53.20 # A
curr_2014["LT.QFN60"] =   45.20 # A
# curr_2014["LT.QDN65"] = -curr_2014["LT.QFN60"]
curr_2014["LT.QFW70"] =   -8.98 # A
curr_2014["LT.QDN75"] =   41.12 # A

# LTB
curr_2014["LTB.QFN10"] =  93.07 # A
curr_2014["LTB.QDN20"] =  42.57 # A
curr_2014["LTB.QFW30"] =  -7.00 # A
curr_2014["LTB.QDW40"] =   8.90 # A
curr_2014["LTB.QFW50"] = -10.89 # A
curr_2014["LTB.QDW60"] =  11.73 # A

# BI
curr_2014["BI.QNO10"] =  16.50 # A
curr_2014["BI.QNO20"] =  19.00 # A
curr_2014["BI.QNO30"] =  10.70 # A
curr_2014["BI.QNO40"] =  14.40 # A

curr_2014["BI1.QNO50"] =  47.25 # A
curr_2014["BI2.QNO50"] =  49.98 # A
curr_2014["BI3.QNO50"] =  50.50 # A
curr_2014["BI4.QNO50"] =  49.75 # A

curr_2014["BI1.QNO60"] =  54.00 # A
curr_2014["BI2.QNO60"] =  54.60 # A
curr_2014["BI3.QNO60"] =  55.10 # A
curr_2014["BI4.QNO60"] =  56.25 # A
################################################################################


# from NORMA
# Quadrupole Gradient Nominal Field at Peak Current / Peak Current (cycled)
cal["LT.QFN10"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QDN12"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QFN20"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QDN22"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QFN30"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QDN32"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QFN40"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QDN42"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QFN50"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QDN55"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QFN60"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QDN65"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LT.QFW70"]  = 1.27/18                           # 7.06E-02 T/m/A  https://edms.cern.ch/file/1100044/1/1100044.pdf
cal["LT.QDN75"]  = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF

cal["LTB.QFN10"] = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LTB.QDN20"] = (2.918+2.937+2.923+2.925)/(4*185) # 1.58E-02 T/m/A  https://edms.cern.ch/file/1021511/2/1021511.PDF
cal["LTB.QFW30"] = (0.3597/5.0 + 0.71669/10. + 1.0765/15. + 1.43518/20.0 + 1.79226/25.0)/5.0 # 7.18E-02 T/m/A https://edms.cern.ch/file/529368/1/CERN-SL-MS-97-15-MeasuresMagnetiquesQuadrupolesTypesBI.pdf
cal["LTB.QDW40"] = (0.3597/5.0 + 0.71669/10. + 1.0765/15. + 1.43518/20.0 + 1.79226/25.0)/5.0 # 7.18E-02 T/m/A https://edms.cern.ch/file/529368/1/CERN-SL-MS-97-15-MeasuresMagnetiquesQuadrupolesTypesBI.pdf
cal["LTB.QFW50"] = (0.3597/5.0 + 0.71669/10. + 1.0765/15. + 1.43518/20.0 + 1.79226/25.0)/5.0 # 7.18E-02 T/m/A https://edms.cern.ch/file/529368/1/CERN-SL-MS-97-15-MeasuresMagnetiquesQuadrupolesTypesBI.pdf
cal["LTB.QDW60"] = (0.3597/5.0 + 0.71669/10. + 1.0765/15. + 1.43518/20.0 + 1.79226/25.0)/5.0 # 7.18E-02 T/m/A https://edms.cern.ch/file/529368/1/CERN-SL-MS-97-15-MeasuresMagnetiquesQuadrupolesTypesBI.pdf

cal["BI.QNO10"] = 1.27 / 18  # 7.06E-02 T/m/A from https://edms.cern.ch/file/1100044/1/1100044.pdf These are the nominal values @ 18 A
cal["BI.QNO20"] = 1.27 / 18  # 7.06E-02 T/m/A from https://edms.cern.ch/file/1100044/1/1100044.pdf These are the nominal values @ 18 A
cal["BI.QNO30"] = 1.27 / 18  # 7.06E-02 T/m/A from https://edms.cern.ch/file/1100044/1/1100044.pdf These are the nominal values @ 18 A
cal["BI.QNO40"] = 1.27 / 18  # 7.06E-02 T/m/A from https://edms.cern.ch/file/1100044/1/1100044.pdf These are the nominal values @ 18 A
cal["BI.QNO50"] = 4.98 / 200 # 2.49E-02 T/m/A from https://edms.cern.ch/file/1100044/1/1100044.pdf These are the nominal values @ 200 A
cal["BI.QNO60"] = 4.98 / 200 # 2.49E-02 T/m/A from https://edms.cern.ch/file/1100044/1/1100044.pdf These are the nominal values @ 200 A


print "\n"
print "\n############################  LT line  ####################################################"
# print quad_2011.keys()

for ele in [
            "LT.QFN10",
            "LT.QDN12",
            "LT.QFN20",
            "LT.QDN22",
            "LT.QFN30",
            "LT.QDN32",
            "LT.QFN40",
            "LT.QDN42",
            "LT.QFN50",
            "LT.QDN55",
            "LT.QFN60",
            # "LT.QDN65",
            "LT.QFW70",
            "LT.QDN75"]:
    print "| %9s | %7.2f [A] |  %.2e [T/m/A] |  %8.5f [T/m]  |  %+7.5f [m^-2]  |" % (ele,
                                      curr_2014[ele],
                                      cal[ele],
                                      (curr_2014[ele]*cal[ele]),
                                      (curr_2014[ele]*cal[ele]/inj_mag_rig)
                                      )

print "\n"
print "\n############################  LTB line  ###################################################"

for ele in ["LTB.QFN10",
            "LTB.QDN20",
            "LTB.QFW30",
            "LTB.QDW40",
            "LTB.QFW50",
            "LTB.QDW60"]:
    print "| %9s | %7.2f [A] |  %.2e [T/m/A] |  %8.5f [T/m]  |  %+7.5f [m^-2]  |" % (ele,
                                      curr_2014[ele],
                                      cal[ele],
                                      (curr_2014[ele]*cal[ele]),
                                      (curr_2014[ele]*cal[ele]/inj_mag_rig)
                                      )



print "\n"
print "\n############################  BI line  ####################################################"

for ele in ["BI.QNO10",
            "BI.QNO20",
            "BI.QNO30",
            "BI.QNO40"]:
    print "| %9s | %7.2f [A] |  %.2e [T/m/A] |  %8.5f [T/m]  |  %+7.5f [m^-2]  |" % (ele,
                                      curr_2014[ele],
                                      cal[ele],
                                      (curr_2014[ele]*cal[ele]),
                                      (curr_2014[ele]*cal[ele]/inj_mag_rig)
                                      )


print "\n"
for ele in ["BI1.QNO50",
            "BI2.QNO50",
            "BI3.QNO50",
            "BI4.QNO50"]:
    print "| %9s | %7.2f [A] |  %.2e [T/m/A] |  %8.5f [T/m]  |  %+7.5f [m^-2]  |" % (ele,
                                      curr_2014[ele],
                                      cal["BI.QNO50"],
                                      (curr_2014[ele]*cal["BI.QNO50"]),
                                      (curr_2014[ele]*cal["BI.QNO50"]/inj_mag_rig)
                                      )


print "\n"
for ele in ["BI1.QNO60",
            "BI2.QNO60",
            "BI3.QNO60",
            "BI4.QNO60"]:
    print "| %9s | %7.2f [A] |  %.2e [T/m/A] |  %8.5f [T/m]  |  %+7.5f [m^-2]  |" % (ele,
                                      curr_2014[ele],
                                      cal["BI.QNO60"],
                                      (curr_2014[ele]*cal["BI.QNO60"]),
                                      (curr_2014[ele]*cal["BI.QNO60"]/inj_mag_rig)
                                      )



print "\n"

