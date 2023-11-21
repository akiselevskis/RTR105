#include<stdio.h>
#include<math.h>
double teilors(double x){
 double a,S,Sg; //Sg ir S gala
 int k=0;

 a = pow(-1, k)*pow(x, 2*k); //pirmā locekla a formula
 S = a; //summas dalas pirmais loceklis (kad k = 0)
 Sg = 1/2 + 1/2*a; //funkcijas vertiba
 printf("%.2f\t%8.2f\t%8.2f\n", x, a, Sg);

 while(k<10){
  k++;
  a = a * (-1) *x*x / (4*k*k - 2*k); //loceklis a reiz rekurences reizinatajs kur mainās k
  S = S + a;
  printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
 }
  return 1/2 + 1/2*S;
}

void main(){
 double x = 5, y, yy;
 y = cos(x/2)*cos(x/2);
 printf("math library funkcija cos(x/2)*cos(x/2) - y=cos(%.2f/2)*cos(%.2f/2)=%.2f\n", x, x, y);

 yy =teilors(x);
 printf("taylor funkcijas vertiba - y=mans_sinuss(%.2f)=%.2f\n", x, yy);
}