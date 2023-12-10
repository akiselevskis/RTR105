#!/usr/bin/gnuplot -persist
set terminal pngcairo transparent #enhanced font "arial,10" fontscale 1.0 size 600, 400
set output 'integral.png' #names the png file
set xrange [-1:pi]
set yrange [-pi:pi]
set title "Function cos(x/2)*cos(x/2) and its definite integral from 0 to 2"
set object 1 rectangle from screen 0,0 to screen 1,1 fillcolor rgb 'white' behind #lai redzetu grafiku VSC
set grid
set xzeroaxis linetype -1
set yzeroaxis linetype -1
plot cos(x/2)*cos(x/2) with lines title "cos(x/2)*cos(x/2)", \
     [0:2] cos(x/2)*cos(x/2) with filledcurves above y1=0 title "Filled Area" fillstyle solid 0.3