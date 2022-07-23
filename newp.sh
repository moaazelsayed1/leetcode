#!/bin/sh

IN=$(echo "$1" | sed -e 's/ //g')
nvim "./$2/$IN.cpp"

