#!/bin/bash
# $1 is the level of search
# $2 is the output file
tree -H '.' -L $1 --noreport --charset utf-8 > $2