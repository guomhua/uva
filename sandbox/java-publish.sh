#!/bin/bash

# This assumes the temp.java file in current directory has been submitted and passed UVa's tests
# Usage: ./java-publish.sh <UVa problem number>

cp temp.java ../$1.java
rm temp.java
cd ..
git add $1.java
git commit -am "$1"
git push origin master
cd sandbox