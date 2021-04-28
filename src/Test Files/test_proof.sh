#!/usr/bin/env bash


#--------------------------------------------------------
# File: test_proof.sh
# 
# Brief: Custom script for test output analysis
# Author: Juraj Mariani (xmaria03)
# Team: QWERTZ
#--------------------------------------------------------

mathl_dir="Math Lib Test"
hfunc_dir="HFunc Test"
file_name="res.txt"

#----------------------

buffer_mathl=""

buffer_hfunc=""

ok=0

#----------------------

cd "$mathl_dir"

while read line
do
	buffer_mathl=$line

done < $file_name

cd ..

if [[ $buffer_mathl =~ YAY! ]]
then
	ok=$((ok+1))
fi

#----------------------

cd "$hfunc_dir"

while read line
do
        buffer_hfunc=$line

done < $file_name

cd ..

if [[ $buffer_hfunc =~ YAY! ]]
then    
        ok=$((ok+1))
fi

#----------------------

if [ $ok -eq 2 ]
then
	echo "Test Results: OK"
else
	echo -e "Something Happened.\nThere has been an error during the tests.\nType 'make test_vocal' for more details."
fi

