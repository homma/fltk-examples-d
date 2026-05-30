#!/bin/sh -x

if [ -z "${1}" ]
  then
    file=src/*.d
  else
    file=${1}
fi

# D

dub run dfmt -- -i ${file}

# C++

clang-format -i src/*.cpp
clang-format -i src/*.h
