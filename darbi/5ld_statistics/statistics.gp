#!/usr/bin/gnuplot --persist
set terminal pngcairo enhanced font "arial,10" fontscale 1.0 size 600, 400
 set title "Simbolu rindas ASCII vērtības augošā secībā"
set xlabel "Simbola kārtas numurs"
set ylabel "Simbolu ASCII vērtība"
set boxwidth 0.8

plot "statistics.dat" using 2:xtic(1) with boxes title "Histogram" fillstyle solid 0.3
