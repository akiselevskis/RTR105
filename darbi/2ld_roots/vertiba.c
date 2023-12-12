#include <stdio.h>
#include <math.h>

int vertiba(double y)
{
    //cos(x/2)*cos(x/2) = y
    double A = 0.5; //maini nobīdi
    double x = 2*acos(sqrt((y+A))); //oriģinālfunckijas inversā funckija (bet paturot argumentu nosaukumus)
    printf("x ir %lf vai -%lf", x, x);

    return 0;
}int main(){
    double y = 0; //maini y
    vertiba(y);
    return 0;
}