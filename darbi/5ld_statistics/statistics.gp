#!/usr/bin/gnuplot --persist
set terminal pngcairo enhanced font "arial,10.3" fontscale 1.0 size 600, 400
set output 'histogramma.png'
set title "Simbolu rindas ASCII vērtības augošā secībā"
set xlabel "Simbols"
set ylabel "Simbola ASCII vērtība"
set boxwidth 0.8

plot "statistics.dat" using 2:xtic(1) with boxes fillstyle solid 0.3 notitle
