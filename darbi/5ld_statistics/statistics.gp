#!/usr/bin/gnuplot --persist
set terminal pngcairo enhanced font "arial,10" fontscale 1.0 size 600, 400
set output 'histogramma.png'

# Generate random data for the example
# In your case, replace this block with the actual data file and column references
# For example: plot 'your_data_file.dat' using 1:2 with boxes title "Your Data"
rand_data(n) = int(rand(0)*n) + 1
set table $Data
    plot '+' using (rand_data(10)):(1) smooth freq with boxes
unset table

set title "Simbolu rindas ASCII vērtības augošā secībā"
set xlabel "Simbola kārtas numurs"
set ylabel "Simbolu ASCII vērtība"
set boxwidth 0.8

plot "statistics.dat" using 2:xtic(1) with boxes title "Histogram" fillstyle solid 0.3
