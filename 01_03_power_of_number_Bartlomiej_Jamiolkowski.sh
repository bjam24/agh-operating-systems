#!/bin/bash
result=1
echo "Enter a integer for the base"
read base
echo "Enter a positive integer for the power"
read power
# The usage of operator **
echo "$base to the $power th power is $[$base**$power]"
# The usage of for loop
for((i=0; i<$power; i++))
do
    result=$(($result*$base))
done
echo "$base to the $power th is $result"