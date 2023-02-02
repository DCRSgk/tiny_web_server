#!/bin/bash

declare -a PROJECTS=(
"base"
"test"
)

for proj in ${PROJECTS[@]}
do
    mkdir -p $proj/build
    cd $proj/build
    cmake ..
    make -j6
    cd -
done


