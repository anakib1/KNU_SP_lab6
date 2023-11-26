#!/bin/bash

name="$1"
perf record -F 99 -a -g "out/${name}.o" 
perf script | FlameGraph/stackcollapse-perf.pl > bin/out.perf-folded
FlameGraph/flamegraph.pl bin/out.perf-folded > bin/perf.svg