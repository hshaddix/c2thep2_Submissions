#!/usr/bin/bash
#
# Copyright (C) 2002-2022 CERN for the benefit of the ATLAS collaboration
#
# Script used for installing a project for CPack. Hiding any build errors
# from the package generator.
#

# Turn off error reporting:
set +e

# Install the project:
DESTDIR="${DESTDIR}/usr"
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake" --install "/home/shadhm/c2thep2_Submissions/HW3/day2/build" 2>&1 | tee "/home/shadhm/c2thep2_Submissions/HW3/day2/build/cmake_cpack_install.log"

# Remove the .dbg files from being packaged, in case we are in RelWithDebInfo
# build mode:
OUTDIR="${DESTDIR}/WorkDir/25.0.28/InstallArea/x86_64-el9-gcc13-opt"
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake" -E remove -f ${OUTDIR}/bin/*.dbg \
   2>&1 | tee -a "/home/shadhm/c2thep2_Submissions/HW3/day2/build/cmake_cpack_install.log"
"/cvmfs/atlas.cern.ch/repo/ATLASLocalRootBase/x86_64/Cmake/3.29.5/Linux-x86_64/bin/cmake" -E remove -f ${OUTDIR}/lib/*.dbg \
   2>&1 | tee -a "/home/shadhm/c2thep2_Submissions/HW3/day2/build/cmake_cpack_install.log"

# Exit gracefully:
exit 0
