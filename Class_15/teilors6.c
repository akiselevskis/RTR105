#include<stdio.h>
#include<math.h>
double mans_sinuss(double x){
 double a,S;
 int k=0;

 a = pow(-1,k)*pow(x,2*k+1)/(1.); //calculate the first element of the sum
 S = a; //push it to the sums value
 printf("%.2f\t%8.2f\t%8.2f\n", x, a, S); //printf those

 while(k<3){ //4 loops
  k++; //k = 1
  a = a* (-1)  *x*x / ((2*k)*(2*k+1)); //rekurences reizinatajs ar ieprieksejo a vertibu
  S = S + a; //jaunais sum (pieskaitot jauno a)
  printf("%.2f\t%8.2f\t%8.2f\n", x, a, S); //print those
 }
  return S;
}

void main(){
 double x = 2.05, y, yy;
 y = sin(x);
 printf("standarta funkcija sin - y=sin(%.2f)=%.2f\n", x, y);

 yy = mans_sinuss(x);
 printf("lietotaaja funkcija - y=mans_sinuss(%.2f)=%.2f\n", x, yy);
}
