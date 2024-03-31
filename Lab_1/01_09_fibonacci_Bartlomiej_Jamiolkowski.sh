#!bin/bash
echo "Enter n elements of fibonacci sequence"
read n

fibonacci=(0 1)

for(( i=0; i<$n-2; i++ ))
do
    new_element=$(( ${fibonacci[$i]}+${fibonacci[$i+1]} ))
    fibonacci+=($new_element)
done
echo "${fibonacci[@]}"