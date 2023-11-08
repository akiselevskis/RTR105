#!/usr/bin/gnuplot -persist
#http://www.gnuplot.info/docs_5.4/Gnuplot_5_4.pdf
set title "Grafiks 1."
#show title
#to var izlaist??
set xlabel "X"
set ylabel "Y"
set grid
#sets main grid
set mxtics 5
set mytics 5
set grid mxtics mytics
#sets minor grid with 5 increments 

set y2tics -100, 10
set ytics nomirror
set yrange [-2:2]
set y2range [-0.5:0.5]

#pointtype 7


plot [-2*pi:2*pi] sin(x) with linespoints pt 7
#f(x) = sin(x)
#plot [-2*pi:2*pi] f(x)

#set size 0.5, 0.5
#set term png size 600, 400
#set output "figure.png"
#plot [0:pi]
