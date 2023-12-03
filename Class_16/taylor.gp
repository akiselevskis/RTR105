#!/usr/bin/gnuplot -persist
set terminal pngcairo transparent #enhanced font "arial,10" fontscale 1.0 size 600, 400
set output 'taylor.png' #names the png file
set xrange [-pi:pi]
set yrange [-pi:pi]
set title "Teilors"
set object 1 rectangle from screen 0,0 to screen 1,1 fillcolor rgb 'white' behind #lai redzetu grafiku VSC


plot cos(x/2)*cos(x/2) title "cos(x/2)*cos(x/2)", \
    1 title "S0" with lines, \
    1 - (x*x/2) title "S1" with lines, \
    1 - (x*x/2) + (x*x*x*x/48) title "S2" with lines, \
    1 - (x*x/2) + (x*x*x*x/48) - (x*x*x*x*x*x/1440) title "S3" with lines, \
    1 - (x*x/2) + (x*x*x*x/48) - (x*x*x*x*x*x/1440) + (x*x*x*x*x*x*x*x/80640) title "S4" with lines
