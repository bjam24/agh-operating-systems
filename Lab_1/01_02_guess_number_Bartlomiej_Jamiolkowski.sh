#!/bin/bash
echo "Set boundaries of an interval (min and max)"
# Checking if condition is met
while true
do
    read minimum
    read maximum
    if (( $minimum<$maximum )); then
	break
    else
	echo "Min boundary cannot be greater than max boundary!"
    fi
done
# Setting number of attempts
echo "Set number of attempts"
read attempts
# Generating random number and trying to guess its value
for((i=0; i<$attempts; i++))
do
    echo "------Attempt $(($i+1))------"
    generated=$(( $minimum + $RANDOM % $maximum ))
    echo "Guess number"
    read guessed
    if(( $guessed==$generated )); then
	echo "Congratulations, you did it!"
	break
    else
	echo "The number is $generated. Better luck next time!"
    fi
done