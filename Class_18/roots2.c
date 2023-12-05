#include <stdio.h>
#include <math.h>

float funckija(double x){
    return cos(x/2)*cos(x/2);
}
void main(){
    double x, y;
    double a, b;
    printf("Luudzu ievadiit izveleto intervaalu. Pirmo mazaako, otro lielaako: ");
    scanf("%lf", &a);
    scanf("%lf", &b);
    
    y = funckija(x);
    printf("%lf\n", y);
}