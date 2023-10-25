#!/bin/bash

if [ $# -ne 1 ]; then
    echo "Usage: $0 <filename.cpp>"
    exit 1
fi
filename=$1
if [ ! -f "$filename" ]; then
    echo "File '$filename' not found."
    exit 1
fi
g++ "$filename" -std=c++17 -O -Wall -Wextra -Wshadow -Wconversion -Wfloat-equal -pedantic
if [ $? -eq 0 ]; then
    echo "Compilation successful. Executable: ${filename%.*}"
    ./a.out
    exit 1
else
    echo "Compilation failed."
    exit 1
fi