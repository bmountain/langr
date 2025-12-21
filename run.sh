#!/bin/bash
cmake --build build
cd build
ctest
cd -
