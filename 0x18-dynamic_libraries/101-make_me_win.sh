#!/bin/bash
wget -P https://github.com/Jon-tim/alx-low_level_programming/blob/master/0x18-dynamic_libraries/libwin.so
export LD_PRELOAD=./libwin.so
