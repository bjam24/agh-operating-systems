#!/bin/bash
FILE=komenda.txt
if [ -f "$FILE" ]; then
    if grep -q "start" "$FILE"; then
	    choice=("rock" "paper" "scissors")
	    if [[ ! -f los1.txt ]] ; then
	        value=${choice[$RANDOM % ${#choice[@]}]}
	        echo "$value" | tee los1.txt
	    elif [[ ! -f los2.txt ]] ; then
	        value=${choice[$RANDOM % ${#choice[@]}]}
	        echo "$value" | tee los2.txt
	    fi
    elif grep -q "stop" "$FILE"; then
	    exit 1
    fi
fi
