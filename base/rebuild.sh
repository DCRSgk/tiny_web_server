#!/bin/bash

cd $proj/build
cmake ..
make -j6
cd -
