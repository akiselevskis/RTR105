#!/usr/bin/gnuplot --persist
set terminal pngcairo transparent enhanced font "arial,10" fontscale 1.0 size 600, 400
set output 'derivative.png' #names the png file
set yrange [-1.5:1.5]
set object 1 rectangle from screen 0,0 to screen 1,1 fillcolor rgb 'white' behind #lai redzetu grafiku VSC
set grid linewidth 1
set xzeroaxis linetype -1
set yzeroaxis linetype -1
#plot [0:2*pi] sin(x)
#replot [0:2*pi] cos(x) title "cos(x)" #sin atvasinajums ir kosinuss
#replot "derivative.dat" every ::1 using 1:2 with lines title "sin(x) (from file)"
#replot "derivative.dat" every ::1 using 1:3 with lines title "sin'(x) (finite difference)" #sinusa atvasinajums ar forward difference

plot [0:2*pi] cos(x/2)*cos(x/2) title "cos(x/2)^2", \
            "derivative.dat" every ::1 using 1:2 with lines title "cos(x/2)^2 (from file)", \
            "derivative.dat" every ::1 using 1:3 with lines title "(cos(x/2)^2)' (finite difference)", \
            "derivative.dat" every ::1 using 1:4 with lines title "tests", \
            "derivative.dat" every ::1 using 1:5 with lines title "tests (finite difference)", \
            "derivative.dat" every ::1 using 1:6 with lines title "tess (finite difference)"
