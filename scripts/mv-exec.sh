#!/bin/sh
find . -type f -executable ! \( -path './build/*' -o -name '*.sh' -o -name '*.sample' \) -exec mv {} build \;
