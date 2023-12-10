#include<stdio.h>
#include<math.h>
    //originaalfunckijas deklaracija vieglaakam pielietojumam
float funkcija(float x){
    float y = cos(x/2)*cos(x/2);
    return y;
}
void main(){
    //mainigo deklaracija
    float a, b, precizitate, h, integr1, integr_taisn, integr_trap, integr_simp;
    int k, n = 2;

    //dialogs ar lietotaju
    printf("Luudzu ievadiit izveleto intervaalu. Pirmo mazaako, otro lielaako: ");
    scanf(" %f", &a);
    scanf(" %f", &b);
    printf("Luudzu ievadiit izveleto precizitaati: ");
    scanf(" %f", &precizitate);
    integr_taisn = (b-a)*(funkcija(a)+funkcija(b))/n;

    //taisnstura metode
    while(fabs(integr_taisn-integr1)>precizitate){
        n *= 2;
        h = (b-a)/n;
        integr1 = integr_taisn;
        integr_taisn = 0;
        for(k=0;k<n;k++)
            integr_taisn+=h*funkcija(a+(k+0.5)*h);
    }
    printf("Integraala veertiiba ar taisnstuura metodi: %f\n", integr_taisn);

    //trapechu metode
    integr_trap = (b-a)*(funkcija(a)+funkcija(b))/n;

    while(fabs(integr_trap - integr1) > precizitate){
        n *= 2;
        h = (b - a) / n;
        integr1 = integr_trap;
        integr_trap = 0;
        for(k = 0; k < n; k++)
            integr_trap += 0.5*h*(funkcija(a + k * h)+funkcija(a+(k+1)*h));
    }
    printf("Integraala veertiiba ar trapechu metodi: %f\n", integr_trap);

    //Simpsona metode
    n = 2;
    h = (b-a)/n;
    integr_simp = (b-a)*(funkcija(a)+funkcija(b))/n;
    while(fabs(integr_simp-integr1)>precizitate){
        n *= 2;
        h = (b-a)/n;
        integr1 = integr_simp;
        integr_simp = 0;
        for(k=0;k<n;k++)
            integr_simp += (h/6)*(funkcija(a+k*h) + 4*funkcija(a+(k+0.5)*h) + funkcija(a+(k+1)*h));
    }
    printf("Integraala veertiiba (Simpson's Rule): %f\n", integr_simp);
}
