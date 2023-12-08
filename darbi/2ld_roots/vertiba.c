#include <stdio.h>
#include <math.h>

int vertiba(double y)
{
    //cos(x/2)*cos(x/2) = y
    double x = 2*acos(sqrt(y));
    printf("x ir %lf vai -%lf", x, x);

    return 0;
}int main(){
    double y = 0.1;
    vertiba(y);
    return 0;
}