#!/usr/bin/bash
#
# Copyright (C) 2002-2021 CERN for the benefit of the ATLAS collaboration
#
# This script is used by CTest to run the test AthenaPoolExample_WriteMeta with the correct
# environment setup, and post processing.
#

# Set up the runtime environment:
source /home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/setup.sh

# Turn off xAOD monitoring for the test:
export XAOD_ACCESSTRACER_FRACTION=0

# Set variables for post-processing script:
export ATLAS_CTEST_PACKAGE='AthenaPoolExampleAlgorithms'
export ATLAS_CTEST_TESTNAME='AthenaPoolExample_WriteMeta'
export ATLAS_CTEST_LOG_SELECT_PATTERN=''
export ATLAS_CTEST_LOG_IGNORE_PATTERN='Warning in <TFile::Init>: no StreamerInfo found|BYTES_READ|READ_CALLS|DEBUG lookupPFN|DEBUG registered PFN|XMLCatalog +INFO|Found address:|DEBUG.*ThinningCacheTool|DEBUG setAttribute|DEBUG Failed to find TTree:.*to set POOL property|DEBUG.*failed process POOL.*attributes.|metadataItemList|Creating branch for new dynamic|::getBranchInfo|Cache alignment|DEBUG index_ref|DEBUG EventInfo'

# Run a possible pre-exec script:
/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/test/pre_check.sh AthenaPoolExample_WriteMeta

# Run the test:
/home/shadhm/c2thep2_Submissions/HW3/day2/build/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/test-bin/AthenaPoolExample_WriteMeta.exe 2>&1 | tee AthenaPoolExample_WriteMeta.log

# Set the test's return code:
export ATLAS_CTEST_TESTSTATUS=${PIPESTATUS[0]}
# temporary for backwards-compatibilty:
export testStatus=${ATLAS_CTEST_TESTSTATUS}

# Put the reference file in place if it exists:
if [ -f /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/share/AthenaPoolExample_WriteMeta.ref ] &&
    [ "/home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms" != "/home/shadhm/c2thep2_Submissions/HW3/day2/build/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms" ]; then
    /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake -E make_directory ../share
    /cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake -E create_symlink \
     /home/shadhm/c2thep2_Submissions/HW3/day2/athena/Database/AthenaPOOL/AthenaPoolExample/AthenaPoolExampleAlgorithms/share/AthenaPoolExample_WriteMeta.ref ../share/AthenaPoolExample_WriteMeta.ref
fi

# Set exit code in case no post-processing follows:
default_return() { return ${ATLAS_CTEST_TESTSTATUS} ; }
default_return

# Run a possible post-exec script:
if type post.sh >/dev/null 2>&1; then
    post.sh AthenaPoolExample_WriteMeta  -i 'Warning in <TFile::Init>: no StreamerInfo found|BYTES_READ|READ_CALLS|DEBUG lookupPFN|DEBUG registered PFN|XMLCatalog +INFO|Found address:|DEBUG.*ThinningCacheTool|DEBUG setAttribute|DEBUG Failed to find TTree:.*to set POOL property|DEBUG.*failed process POOL.*attributes.|metadataItemList|Creating branch for new dynamic|::getBranchInfo|Cache alignment|DEBUG index_ref|DEBUG EventInfo'
else
    exit $testStatus
fi
