#include<stdio.h>
#include<math.h>
double mans_sinuss(double x){
 double a,S;
 int k=0;

 //a = pow(-1,k)*pow(x,2*k+1)/(1.);
 a = pow(-1, k)*pow(x, 2*k)/
 //S = a;
 S = (1/2 + 1/2)*a;
 printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);

 while(k<3){
  k++;
  //a = a* (-1)  *x*x / ((2*k)*(2*k+1)); //this is R
  a = a * (-1) *x*x / (4*k*k - 2*k);
  S = S + a;
  printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
 }
  return S;
}

void main(){
 double x = 2.05, y, yy;
 y = cos(x/2)*cos(x/2);
 printf("standarta funkcija sin - y=sin(%.2f)=%.2f\n", x, y);

 yy = mans_sinuss(x);
 printf("lietotaaja funkcija - y=mans_sinuss(%.2f)=%.2f\n", x, yy);
}