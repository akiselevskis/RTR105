#!/usr/bin/gnuplot -persist
set terminal pngcairo transparent #enhanced font "arial,10" fontscale 1.0 size 600, 400
set output 'roots.png'
set xrange [-2*pi:2*pi]
set yrange [-1:1]
set title "Funckija cos(x/2)*cos(x/2)-0.5 un tās sakne intervālā [0;2]."
set object 1 rectangle from screen 0,0 to screen 1,1 fillcolor rgb 'white' behind #lai redzetu grafiku VSC
set grid linewidth 1
set xzeroaxis linetype -1
set yzeroaxis linetype -1
set label "(1.571;0)" at 1.7, 0.1
plot cos(x/2)*cos(x/2)-0.5 with lines title "cos(x/2)*cos(x/2)-0.5", \
          "saknes.dat" title "funckijas sakne" linetype 7 linecolor 0