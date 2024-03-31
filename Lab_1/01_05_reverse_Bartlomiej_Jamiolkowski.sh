#!/bin/bash
echo "Enter parameters e.g. a 1 c 3"
read -a parameters
n=${#parameters[*]}
for((i=$n-1; i>=0; i--))
do
    echo -n "${parameters[i]} "
done