#!/bin/bash

OUTPUT="samples.txt"
EXEC="launch-$1.sh"
MAX_N=20

TIMEFORMAT="%E"

rm $OUTPUT 2> /dev/nul
for N in $(seq 1 $MAX_N); do
    echo $N: >> $OUTPUT
    for i in $(seq 1 2); do
        (time bash $EXEC $N) 2>> $OUTPUT
    done
done
    