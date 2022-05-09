#!/bin/bash
wget -P /home/win.so https://github.com/AgustinGallotti/holbertonschool-low_level_programming/tree/main/0x18-dynamic_libraries/win.so
export LD_PRELOAD=/home/win.so
