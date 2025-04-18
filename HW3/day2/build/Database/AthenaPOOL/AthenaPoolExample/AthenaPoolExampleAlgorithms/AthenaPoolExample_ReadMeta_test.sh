#!/bin/bash 
# 
# This script template is used to create the scripts for the package that 
# executes its integration tests. 
# 
 
# Transmit errors: 
#set -e 

read -d '' II <<EOF
s/0\\\\{8\\\\}-0\\\\{4\\\\}-0\\\\{4\\\\}-0\\\\{4\\\\}-0\\\\{12\\\\}/!!!!/g
s/TTree [0-9]\\\\{3\\\\}[0-9]*/TTree ????/g
s/-[0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F]0/-0/g
s/[:=][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F][0-9A-F]0/=0/g
s/0x[0-9a-f]\\\\{7,12\\\\}/0x????/g
s/[0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f][0-9a-f]00*//g
EOF

# Ordering sensitivities
PP="Skipping"
PP="$PP|using release"
PP="$PP|DEBUG endTransaction:"
PP="$PP|Deaccess DbContainer|RootDatabase.close +DEBUG I/O|Database being retired"
PP="$PP|^CoreDumpSvc          INFO Handling signals"
PP="$PP|File version:"
PP="$PP|ReadData             INFO CollectionMetadata, key = UnixTimestamp, value = "
PP="$PP|^$"
PP="$PP|Fd:"

athena.py AthenaPoolExampleAlgorithms/AthenaPoolExample_ReadMeta.py | sed -e "$II"| grep -vE "$PP"

