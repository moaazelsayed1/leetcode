#!/bin/sh

IN=$(echo "$1" | sed -e 's/ //g')
nvim "$IN.cpp"

