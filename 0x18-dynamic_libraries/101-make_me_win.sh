#!/bin/bash
wget -P /tmp/ https://github.com/MennatallahMo/alx-low_level_programming/raw/master/0x18-dynamic_libraries/libgame.so
export LD_PRELOAD=/tmp/libgame.so
