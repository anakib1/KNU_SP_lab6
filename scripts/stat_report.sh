#!/bin/bash

name="$1"
perf record -F 99 -a -g --output="bin/perf.data" "out/${name}.o" 
perf report -i bin/perf.data