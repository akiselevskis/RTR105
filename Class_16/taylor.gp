#!/usr/bin/gnuplot -persist
set terminal pngcairo transparent enhanced font "arial,10" fontscale 1.0 size 600, 400
set output 'taylor.png' #names the png file
plot cos(x/2)*cos(x/2), \
    0.5 + 0.5*(1* ((-1) *x*x) / (4*1*1 - 2*1))