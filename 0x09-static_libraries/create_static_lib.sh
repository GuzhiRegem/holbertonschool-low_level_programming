#!/bin/bash
gcc -c -O ./*.c
ar rc liball.a ./*.o
ranlib liball.a
