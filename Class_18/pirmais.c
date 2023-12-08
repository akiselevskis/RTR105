#undef __STRICT_ANSI__ //nav obligāts, bet tas noņem warning no M_PI izmantošanas
                       //Obligāri jāliek pirms math.h header
#include <stdio.h>
#include <math.h>
int main(){
    float a = 0.01, b = 1.5*M_PI, x, delta_x = 1.3e-3, funkca, funkcb, funkcx;
    int k = 0;

    funkca = sin(a); funkcb = sin(b);
    if(funkca*funkcb>0){    //ja abi punkti ir virs vai zem x ass...
        printf("Inervālā [%.2f;%.2f] sin(x) funkcijai ", a, b);
        printf("Sakņu nav (vai tajā ir pāra sakņu skaits)\n");
        return 1;
    }
    printf("               sin(%7.3f)=%7.3f\t\t\t\t", a, sin(a));
    printf("sin(%7.3f)= %7.3f\n", b, sin(b));

    while((b-a)>delta_x){       //precizitatei
        k++;                    //iteracijas noteiksanai
        x = (a+b)/2;    //ģeniāli atrod vidusspunktu!!!!!
        if(funkca*sin(x)>0) a = x;      //izvelas kurs punkts?????
        else  b = x;
        printf("%2d. iterācija: sin(%7.3f)=%7.3f\t", k, a, sin(a));
        printf("sin(%7.3f)=%7.3f\t", x, sin(x));
        printf("sin(%7.3f)=%7.3f\n", b, sin(b));
    }
    printf("Sakne atrodas pie x = %.3f, jo sin(x) ir %.3f\n", x, sin(x));
    return 0;
}