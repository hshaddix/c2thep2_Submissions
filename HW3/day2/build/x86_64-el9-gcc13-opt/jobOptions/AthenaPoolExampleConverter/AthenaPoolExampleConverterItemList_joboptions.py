## Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration
##
## @file AthenaPoolExampleConverterItemList_joboptions.py
## @brief File adding all possible items provided by the POOL converters
##        of this package.
##
# Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration

try:
    fullItemList += [ "ExampleHitContainer#*" ]
except:
    fullItemList = []
    fullItemList += [ "ExampleHitContainer#*" ]
    pass
# Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration

try:
    fullItemList += [ "ExampleTrackContainer#*" ]
except:
    fullItemList = []
    fullItemList += [ "ExampleTrackContainer#*" ]
    pass
# Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration

try:
    fullItemList += [ "xAOD::ExampleElectron#*" ]
except:
    fullItemList = []
    fullItemList += [ "xAOD::ExampleElectron#*" ]
    pass
# Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration

try:
    fullItemList += [ "xAOD::ExampleElectronContainer#*" ]
except:
    fullItemList = []
    fullItemList += [ "xAOD::ExampleElectronContainer#*" ]
    pass
# Copyright (C) 2002-2017 CERN for the benefit of the ATLAS collaboration

try:
    fullItemList += [ "xAOD::ExampleElectronAuxContainer#*" ]
except:
    fullItemList = []
    fullItemList += [ "xAOD::ExampleElectronAuxContainer#*" ]
    pass
