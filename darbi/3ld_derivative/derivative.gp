#!/usr/bin/gnuplot --persist
set terminal pngcairo transparent enhanced font "arial,10" fontscale 1.0 size 600, 400
set output 'derivative.png' #names the png file

set grid

#plot [0:2*pi] sin(x)
#replot [0:2*pi] cos(x) title "cos(x)" #sin atvasinajums ir kosinuss
#replot "derivative.dat" every ::1 using 1:2 with lines title "sin(x) (from file)"
#replot "derivative.dat" every ::1 using 1:3 with lines title "sin'(x) (finite difference)" #sinusa atvasinajums ar forward difference

plot [0:2*pi] cos(x/2)*cos(x/2) title "cos(x/2)^2", \
              "derivative.dat" every ::1 using 1:2 with lines title "cos(x/2)^2 (from file)", \
               "derivative.dat" every ::1 using 1:3 with lines title "(cos(x/2)^2)' (finite difference)" #sinusa atvasinajums ar forward difference