#!/bin/bash

filename=$1
out="a.out"

mpiCC -g -Wall -o $out $filename
file $out
size $out

mpiexec -n $(nproc) $out

rm -rf $out
