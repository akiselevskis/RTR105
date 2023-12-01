#!/usr/bin/gnuplot -persist
<<<<<<< HEAD
plot cos(x/2)*cos(x/2)
=======
set terminal pngcairo transparent enhanced font "arial,10" fontscale 1.0 size 600, 400
set output 'taylor.png' #names the png file
plot cos(x/2)*cos(x/2), \
    0.5 + 0.5*(1* ((-1) *x*x) / (4*1*1 - 2*1))
>>>>>>> b08ab0ddb035d49f880d0a0fc8c51fc991f6d255
