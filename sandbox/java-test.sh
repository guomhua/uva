#!/bin/bash

# Feature
#
# - Compiles and runs a java program with standard input
# - Compares the output with expected output and print the diff
# - Prints any error encountered

# Usage
#
# - Store input into input.txt, expected output into output.txt
# - Ensure class to run is named Main
# - Run from script directory (e.g. sandbox)
# - Pass path (full or relative) of java file
#   ./java-test.sh ../10812.java

# compile
javac $1 -d ./

# run
java Main < input.txt 2> test.err 1> test.out

# print diff
printf "\n===== Differences =====\n\n"
diff output.txt test.out
printf "\n===== End of Differences =====\n"

# print error
printf "\n\n===== Error =====\n"
cat test.err
printf "\n===== End of Error =====\n"

# clean up
rm *.class
rm *.err
rm *.out