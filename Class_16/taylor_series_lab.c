#include <stdio.h>
#include <math.h>
void asci();
int main()
{   
    double a, S, x = 0;
    int k = 0;
    printf("Funckijas - cos(x/2)*cos(x/2) aprekinasana: \n");
    printf("Ievadiet argumentu x: ");
    scanf(" %lf", &x);
    double y = cos(x/2)*cos(x/2);
    printf("cos(%.2lf/2)*cos(%.2lf/2) = %.2lf\n", x, x, y);
    a = pow(-1, k)*pow(x, 2*k);
    S = 1/2 + 1/2*(pow(-1, k)*pow(x, 2*k));
    printf("a0 = %.2lf S0 = %.2lf\n", a, S);
     while(k<30){
        k++;
        a = a* (-1)  *x*x / ((2*k)*(2*k+1));
        S = S + a;
        printf("%.2f\t%8.2f\t%8.2f\n", x, a, S);
    }


    //asci();

    return 0;
}/*void asci(){
    printf("                                               \n
                                    500                    \n
                                  _______                  \n
                                  \\          k    2*x      \n
                     1      1      \\     (-1)  * x         \n
cos(x\2)*cos(x/2) = ___ +  ___ *    >    ______________    \n
                                   \/                       \n
                     2      2     \/______  (2*k)\!;          \n
                                                           \n
                                                           \n
    ");
}*/
