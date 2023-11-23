#include<stdio.h>
#include<math.h>
void ascii(); //funckiju ar ASCII zimejumu deklare atseviski lai ta netraucetu koda uztverei
double teilors(double x){
 double a,S,Sg; //a ir pirmais elements, S ir summa, kas mainas pec katras cilpas atkartosanas reizes 
 int k=0;       //Sg ir gala funckijas rezultats

 a = 1; //pirmais funckijas elements ir 1 (aprekinats atseviski)
 S = a; //S ir vertibas uztures mainigais (pie ta pieskaitis katru elementu)
 Sg = 0.5 + 0.5*S; //vert
 printf("Pirmais summas elements a0 = S0 = %.2f\n", a, Sg);

 while(k<500){
  k++; //k = 1
  a = a* ((-1) *x*x) / (4*k*k - 2*k); //rekurences reizinatajs ar ieprieksejo a vertibu
  S = S + a; //jaunais sum (pieskaitot jauno a)
  Sg = 0.5 + 0.5*S;
  //printf("%.2f\t%8.2f\t%8.2f\n", x, a, Sg); //So printf var aktivizet lai redzetu mainigo
 }                                            //vertibas visa cikla garumaa
  double a499 = a/((-1) *x*x) / (4*k*k - 2*k);
  double s499 = 0.5 + 0.5*((Sg-0.5)/0.5)-(a/((-1) *x*x) / (4*k*k - 2*k)); //nevajadzigi gara iztekme
  printf("a499 = %.2f S499 = %.2f\n", a499, s499);                        //bet pierada, ka s499 un S500
  printf("a500 = %.2f S500 = %.2f\n", a, Sg);                             //ir praktiski identiski
  return Sg;
}

void main(){
 double x, y, yy;
 printf("Funckijas cos(x/2)*cos(x/2) aprekinasana: \n"); //Funckija ir defineta pie visam x vertibam
 printf("Ludzu ievadit izveleto vertibu x: ");
 scanf(" %lf", &x);
 y = cos(x/2)*cos(x/2);
 printf("cos(%.2f/2)*cos(%.2f/2) = %.2f\n\n", x, x, y);
 yy = teilors(x);
 printf("Funckijas cos(%.2f/2)*cos(%.2f/2) vertiba izmantojot Teilora rindas saskaitisanu = %.2f\n", x, x, yy);
 ascii();
}void ascii(){
    printf("\n                                       500                      \n");
    printf("                                     _______                    \n");
    printf("                                    \\                          \n");
    printf("                                     \\          k   2*k        \n");
    printf("                      1     1         \\     (-1) * x           \n");
    printf("   cos(x\2)*cos(x/2) = ___ + ___  *      > _______________      \n");
    printf("                                      /                         \n");
    printf("                      2     2        /       (2*k)!             \n");
    printf("                                    /_______                    \n");
    printf("                                       k=0                      \n\n");
    printf("                                       2                        \n");
    printf("                               (-1) * x                         \n");
    printf("   rekurences reizinatajs = _________________                   \n");
    printf("                                                                \n");
    printf("                                  2                             \n");
    printf("                               4*k  - 2*k                       \n\n");
}