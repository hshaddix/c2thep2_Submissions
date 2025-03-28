#!/usr/bin/bash
#
# Copyright (C) 2002-2020 CERN for the benefit of the ATLAS collaboration
#
# This script is used during the build to set up a functional runtime
# environment for running scripts/executables.
#

# Transmit errors:
set -e

# Set up the environment:
source /home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/setup.sh || exit 1

# Run the command:
exec "$@" || exit 1
