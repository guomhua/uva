#!/bin/bash
g++ -std=c++0x -g $1.cpp -o $1
#g++ -g $1.cpp -o $1
#./$1 < tests/$2.in
./$1 < input.txt 2> $1.err 1> $1.out
diff output.txt $1.out
#diff error.txt $1.err
rm $1
#rm *~