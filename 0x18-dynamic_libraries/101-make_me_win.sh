#!/bin/bash

wget -p .. https://raw.githubusercontent.com/monoprosito/holbertonschool-low_level_promming/master/0x18-dynamic_libraries/libgiga.so
export LD_PRELOAD="$PWD/../libgiga.so"
