#include <stdio.h>
#include <math.h>
int main(){
    float a = 0.01, b = 1.5*M_PI, x, delta_x = 1.3e-3, funkca, funkcb, funkcx;
    int k = 0;

    funkca = cos(a/2)*cos(a/2); funkcb = cos(b/2)*cos(b/2);
    if(funkca*funkcb>0){
        printf("Inervālā [%.2f;%.2f] sin(x) funkcijai ", a, b);
        printf("Sakņu nav (vai tajā ir pāra sakņu skaits)\n");
        return 1;
    }
    printf("               cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\t\t\t\t", a, a, cos(a/2)*cos(a/2));
    printf("cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\n", b, b, cos(b/2)*cos(b/2));

    while((b-a)>delta_x){
        k++;
        x = (a+b)/2;
        if(funkca*(cos(x/2)*cos(x/2))>0) a = x;
        else  b = x;
        printf("%2d. iterācija: cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\t", k, a, cos(a/2)*cos(a/2));
        printf("cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\t", x, cos(x/2)*cos(x/2));
        printf("cos(%7.3f/2)*cos(%7.3f/2)=%7.3f\n", b, cos(b/2)*cos(b/2));
    }
    printf("Sakne atrodas pie x = %.3f, jo cos(x/2)*cos(x/2) ir %.3f\n", x, cos(x/2)*cos(x/2));
    return 0;
}