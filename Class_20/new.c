#include <stdio.h>
#include <math.h>

float funkcija(float x){
    float y = cos(x/2)*cos(x/2);
    return y;
}

int main(void) {
    double a,b,c, sk1=0,sk2=0,sk3=0,sk4=0;
    int k,n=2;
    //vērtībām
    printf("Lūdzu ievadiet pirmo vērtību: ");
    scanf("%lf", &a);
    printf("\nLūdzu ievadiet otro vērtību: ");
    scanf("%lf", &b);
    printf("\nLūdzu ievadiet precizitātes vērtību: ");
    scanf("%lf", &c);
    double h = (b-a)/n;
    sk2=(b-a)*(funkcija(a)+funkcija(b))/n;
    while(fabs(sk2-sk1)>c){
        n*=2;
        h = (b-a)/n;
        sk1=sk2;
        sk2=0;
        for(k=0;k<n;k++)
            sk2 += h*funkcija(a+(k+0.5)*h);
    }
    //Taisnstūru metode
    printf("Integrālis taisnstūru metodei: %f\n",sk2);

    n = 2;
    h = (b-a)/n;
    sk3 = (b-a)*(funkcija(a)+funkcija(b))/n;
    while(fabs(sk3-sk1)>c){
        n*=2;
        h = (b-a)/n;
        sk1=sk3;
        sk3=0;
        for(k=0;k<n;k++)
            sk3 += (h*funkcija(a+k*h) + h*funkcija(a+(k+1)*h))/2;
    }
    //Trapeču metode
    printf("Integrālis trapeču metodei: %f\n",sk3);
    
    n = 2;
    h = (b-a)/n;
    sk4 = (b-a)*(funkcija(a)+funkcija(b))/n;
    while(fabs(sk4-sk1)>c){
        n *= 2;
        h = (b-a)/n;
        sk1 = sk4;
        sk4 = 0;
        for(k=0;k<n;k++)
            sk4 += (h/6)*(funkcija(a+k*h) + 4*funkcija(a+(k+0.5)*h) + funkcija(a+(k+1)*h));
    }
    //Simpsona metode
    printf("Integrālis simpsona metodei: %f\n", sk4);
    return 0;
}