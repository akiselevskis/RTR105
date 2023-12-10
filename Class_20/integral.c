#include<stdio.h>
#include<math.h>

float funkcija(float x){
    float y = cos(x/2)*cos(x/2);
    return y;
}
void main(){
    float a, b, precizitate, h, integr1 = 0., integr2;
    int k, n = 2;

    printf("Luudzu ievadiit izveleto intervaalu. Pirmo mazaako, otro lielaako: ");
    scanf(" %f", &a);
    scanf(" %f", &b);
    printf("Luudzu ievadiit izveleto precizitaati: ");
    scanf(" %f", &precizitate);
    integr2 = (b-a)*(funkcija(a)+funkcija(b))/n;

    //taisnstura metode

    while(fabs(integr2-integr1)>precizitate){
        n *= 2;
        h = (b-a)/n;
        integr1 = integr2;
        integr2 = 0.;
        for(k=0;k<n;k++)
            integr2+=h*funkcija(a+(k+0.5)*h);
    }
    printf("Integraala veertiiba ar taisnstuura metodi: %2f\n", integr2);

    //trapechu metode

    h = (b - a) / n;
    float integr2_trap = (funkcija(a) + funkcija(b)) / 2.0;

    while(fabs(integr2_trap - integr1) > precizitate){
        n *= 2;
        h = (b - a) / n;
        integr1 = integr2_trap;
        integr2_trap = 0.;

        for(k = 1; k < n; k++)
            integr2_trap += funkcija(a + k * h);

        integr2_trap = h * (integr2_trap + funkcija(a) + funkcija(b)) / 2.0;
    }
    printf("Integraala veertiiba ar trapechu metodi: %2f\n", integr2_trap*2);

    //Simpsona metode
    n = 2;
    h = (b - a) / n;
    float integr2_simp = funkcija(a) + funkcija(b);

    for(k = 1; k < n; k += 2)
        integr2_simp += 4.0 * funkcija(a + k * h);

    for(k = 2; k < n-1; k += 2)
        integr2_simp += 2.0 * funkcija(a + k * h);

    integr2_simp = h * integr2_simp / 3.0;

    printf("Integraala veertiiba (Simpson's Rule): %2f\n", integr2_simp);

    //trapechu metode test

    h = (b - a) / n;
    float integr2_trap = (funkcija(a) + funkcija(b)) / 2.0;

    while(fabs(integr2_trap - integr1) > precizitate){
        n *= 2;
        h = (b - a) / n;
        integr1 = integr2_trap;
        integr2_trap = 0.;

        for(k = 1; k < n; k++)
            integr2_trap += funkcija(a + k * h);

        integr2_trap = h * (integr2_trap + funkcija(a) + funkcija(b)) / 2.0;
    }
    printf("Integraala veertiiba ar trapechu metodi: %2f\n", integr2_trap*2);
}
