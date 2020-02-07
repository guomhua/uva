#!/bin/bash
cp temp.cpp ../$1.cpp
cd ..
git add $1.cpp
git commit -a -m "$1"
git push origin master
cd sandbox