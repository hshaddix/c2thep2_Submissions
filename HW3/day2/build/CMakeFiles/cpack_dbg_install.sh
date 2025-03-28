#!/usr/bin/bash
#
# Copyright (C) 2002-2022 CERN for the benefit of the ATLAS collaboration
#
# Script used for installing a project for CPack. Hiding any build errors
# from the package generator.
#

# Turn off error reporting:
set +e

# Set the output directory:
OUTDIR="${DESTDIR}/usr/WorkDir/25.0.28/InstallArea/x86_64-el9-gcc13-opt"

# Create the bin and lib directories:
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake" -E make_directory "${OUTDIR}/bin" \
    2>&1 | tee "/home/shadhm/c2thep2_Submissions/HW3/day2/build/cmake_cpack_dbg_install.log"
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake" -E make_directory "${OUTDIR}/lib" \
    2>&1 | tee -a "/home/shadhm/c2thep2_Submissions/HW3/day2/build/cmake_cpack_dbg_install.log"

# Copy the debug files into the place CPack expects to find them:
RUNTIME_OUTPUT_DIR="/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/bin"
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake" -E copy ${RUNTIME_OUTPUT_DIR}/*.dbg \
    "${OUTDIR}/bin/" 2>&1 | \
    tee -a "/home/shadhm/c2thep2_Submissions/HW3/day2/build/cmake_cpack_dbg_install.log"
LIBRARY_OUTPUT_DIR="/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib"
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake" -E copy ${LIBRARY_OUTPUT_DIR}/*.dbg \
    "${OUTDIR}/lib/" 2>&1 | \
    tee -a "/home/shadhm/c2thep2_Submissions/HW3/day2/build/cmake_cpack_dbg_install.log"

# Exit gracefully:
exit 0
