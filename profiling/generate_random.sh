#!/usr/bin/env bash

#--------------------------------------------------------------
# File: generate_random.sh
#
# Brief: Custom script for random number generation
# Author: Juraj Mariani (xmaria03)
# Team: QWERTZ
#--------------------------------------------------------------

args=$@
declare -a arguments=($args)

if [ ${#arguments[@]} -gt 1 ]
then
	echo -e "WARNING, only 1 argument supported.\nOnly the first argument will be taken into account as a number of random numbers."
fi

number=$1
if [[ $number =~ [^[0-9]+] ]]
then
	echo -e "ERROR - Argument 1 must be a number"
	exit 1
fi

i=0
for i in $(seq 1 $number)
do
	echo $((RANDOM))
done

exit 0
