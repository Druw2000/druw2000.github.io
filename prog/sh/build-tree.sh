#!/bin/bash
# $1 is the base href, usually "https://druw2000.github.io/src"
# $2 is the level of search
# $3 is the output file
src="https://druw2000.github.io"
if [ $1 = "src" ]; then
	tree -H $src -L $2 --noreport --charset utf-8 > $3
else
	tree -H $1 -L $2 --noreport --charset utf-8 > $3
fi
