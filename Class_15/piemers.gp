#!/usr/bin/gnuplot -persist
# set terminal pngcairo  transparent enhanced font "arial,10" fontscale 1.0 size 600, 400 
# set output 'vector.1.png'
set label 1 "-q" at -1.00000, 0.00000, 0.00000 center norotate back nopoint
set label 2 "+q" at 1.00000, 0.00000, 0.00000 center norotate back nopoint
unset parametric
set view map scale 1
set isosamples 31, 31
unset surface
set contour base
set cntrparam levels 17
set cntrparam levels discrete -3,-2 ,-1 ,-0.5 ,-0.2 ,-0.1 ,-0.05 ,-0.02 ,0 ,0.02 ,0.05 ,0.1 ,0.2 ,0.5 ,1 ,2 ,3 
set trange [ -5.00000 : 5.00000 ] noreverse nowriteback
set urange [ -5.00000 : 5.00000 ] noreverse nowriteback
set vrange [ -5.00000 : 5.00000 ] noreverse nowriteback
set xrange [ -10.0000 : 10.0000 ] noreverse nowriteback
set x2range [ -10.0000 : 10.0000 ] noreverse nowriteback
set yrange [ -10.0000 : 10.0000 ] noreverse nowriteback
set y2range [ -10.0000 : 10.0000 ] noreverse nowriteback
set zrange [ -10.0000 : 10.0000 ] noreverse nowriteback
set cbrange [ -10.0000 : 10.0000 ] noreverse nowriteback
set rrange [ 0.00000 : 10.0000 ] noreverse nowriteback
set colorbox vertical origin screen 0.9, 0.2 size screen 0.05, 0.6 front  noinvert bdefault
r(x,y)=sqrt(x*x+y*y)
v1(x,y)=  q1/(r((x-x0),y))
v2(x,y)=  q2/(r((x+x0),y))
vtot(x,y)=v1(x,y)+v2(x,y)
e1x(x,y)= q1*(x-x0)/r(x-x0,y)**3
e1y(x,y)= q1*(y)/r(x-x0,y)**3
e2x(x,y)= q2*(x+x0)/r(x+x0,y)**3
e2y(x,y)= q2*(y)/r(x+x0,y)**3
etotx(x,y)=e1x(x,y)+e2x(x,y)
etoty(x,y)=e1y(x,y)+e2y(x,y)
enorm(x,y)=sqrt(etotx(x,y)*etotx(x,y)+etoty(x,y)*etoty(x,y))
dx1(x,y)=coef*etotx(x,y)/enorm(x,y)
dy1(x,y)=coef*etoty(x,y)/enorm(x,y)
dx2(x,y)=coef*etotx(x,y)
dy2(x,y)=coef*etoty(x,y)
NO_ANIMATION = 1
q1 = 1
x0 = 1.0
q2 = -1
coef = 0.7
xmin = -10.0
xmax = 10.0
ymin = -10.0
ymax = 10.0
splot vtot(x,y) w l
