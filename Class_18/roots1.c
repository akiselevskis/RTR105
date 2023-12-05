#include <stdio.h>
#include <math.h>

float funckija(double x){
    return  cos(x/2)*cos(x/2);
}
void main(){
    double x, y;
    float funkca, funkcb, funkcx;
    printf("Luudzu ievadiit x veertiibu: ");
    scanf("%lf", &x);
    y = funckija(x);
    printf("%lf\n", y);
}