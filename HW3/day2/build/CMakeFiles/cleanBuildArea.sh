#!/usr/bin/bash
#
# Copyright (C) 2002-2019 CERN for the benefit of the ATLAS collaboration
#
# Script to delete stale files from the build area that could be left over from
# a previous build. Typically this happens when source files (or entire packages)
# are removed between incremental builds.
#

# Transmit errors:
set -e

# Find list of all .py[c] files
pyc_files=`find "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/python" -name '*.pyc' | sort`
py_files=`find -L "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/python" -name '*.py' -type f | sort`

# Delete .pyc files without corresponding source file
comm -23 --nocheck-order \
     <(echo "$pyc_files") \
     <(echo "$py_files" | sed 's/\.py$/\.pyc/') \
    | xargs rm -f

# Delete broken __init__.py symlinks and associated configurables (ATLINFR-2417)
broken_init_links=`find "/home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/python" -name __init__.py -xtype l`
IFS=$'\n'
for file in ${broken_init_links}; do
    dir=`dirname "${file}"`
    pkg=`basename "${dir}"`
    rm -f "${file}" "${dir}/${pkg}Conf.py"
done

# Delete merged rootmap files
rm -f /home/shadhm/c2thep2_Submissions/HW3/day2/build/x86_64-el9-gcc13-opt/lib/WorkDir.rootmap
