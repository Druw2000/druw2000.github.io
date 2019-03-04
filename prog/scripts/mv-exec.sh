#!/bin/sh
find . -type f -executable ! \( -name 'build/*' -o -name '*.sh' -o -name '*.sample' \) -exec mv {} build \;
