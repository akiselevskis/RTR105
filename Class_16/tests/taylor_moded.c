#include<stdio.h>
#include<math.h>
double mans_sinuss(double x){
 double a,S,Sg;
 int k=0;

 a = 1; //calculate the first element of the sum
 S = a; //push it to the sums value
 printf("%.2f\t%8.2f\t%8.2f\n", x, a, S); //printf those

 while(k<500){ //4 loops
  k++; //k = 1
  a = a* ((-1) *x*x) / (4*k*k - 2*k); //rekurences reizinatajs ar ieprieksejo a vertibu
  S = S + a; //jaunais sum (pieskaitot jauno a)
  Sg = 0.5 + 0.5*S;
  printf("%.2f\t%8.2f\t%8.2f\n", x, a, Sg); //print those
 }
  return Sg;
}

void main(){
 double x = 0.9, y, yy;
 y = cos(x/2)*cos(x/2);
 printf("standarta funkcija sin - y=sin(%.2f)=%.2f\n", x, y);

 yy = mans_sinuss(x);
 printf("lietotaaja funkcija - y=mans_sinuss(%.2f)=%.2f\n", x, yy);
}