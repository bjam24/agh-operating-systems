#!/bin/bash
# 1. After 1000 iterations 2 player version program printed summarised score e.g. 26, which was  #  the sum of 1000 scores: 1, 0 or -1
echo "Enter parameter"
read game_number
log=gra.log
for(( i=0; i<$game_number; i++ ))
do
    touch komenda.txt
    echo "start" | tee komenda.txt
    source gracz1.sh
    source gracz2.sh
    sleep 0.1
    rm komenda.txt
    value1=$(<los1.txt)
    value2=$(<los2.txt)
    if [ "$value1" == "$value2" ]; then
        echo 0 >> $log
    elif [ "$value1" == "rock" ]; then
        if [ "$value2" == "scissors" ]; then
            echo 1 >> $log
        else
            echo -1 >> $log
        fi
    elif [ "$value1" == "paper" ]; then
	    if [ "$value2" == "rock" ]; then
            echo 1 >> $log
        else
            echo -1 >> $log
        fi
    elif [ "$value1" == "scissors" ]; then
	    if [ "$value2" == "paper" ]; then
            echo 1 >> $log
        else
            echo -1 >> $log
        fi
    fi
    rm los1.txt
    rm los2.txt
done
paste -sd+ gra.log | bc
echo "stop" | tee komenda.txt
sleep 0.1
rm komenda.txt
exit 1
