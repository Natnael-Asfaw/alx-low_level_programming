#!/bin/bash
wget -q --output-document=$HOME/lib101-makemewin.so https://github.com/holbertonschool/0x18.c
export LD_PRELOAD=$HOME/lib101-makemewin.so
