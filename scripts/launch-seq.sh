#!/bin/bash

EXEC="sum.out"
N=$1

for i in $(seq 1 $N); do
    ./$EXEC 1000000000 > /dev/null
done
