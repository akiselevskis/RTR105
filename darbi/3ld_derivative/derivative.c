#include <stdio.h>
#include <math.h>
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
//funkcijas definīcija
float funkcija(float x){
    return cos(x/2)*cos(x/2);
}
// Analītiskais atvasinājums
float al_atv(float x) {
    return -cos(0.5*x)*sin(0.5*x);
}
// Skaitliskais atvasinājums
float skait_atv(float x, float delta_x) {
    return (funkcija(x + delta_x) - funkcija(x)) / delta_x;
}
// Analītiskais otro kārtas atvasinājums
float al_atv_2(float x) {
    return -cos(x)/2;
}
// Skaitliskais otro kārtas atvasinājums
float skait_atv_2(float x, float delta_x) {
    return (funkcija(x + delta_x) - 2 * funkcija(x) + funkcija(x - delta_x)) / (delta_x * delta_x);
}
int main() {
    FILE *pFile;
    float a, b, x, delta_x;
    printf("Shii programma apreekina funkcijas cos(x/2)*cos(x/2) veertiibu un pirmo un otro atvasinaajumu (gan skaitliski, gan analiitiski) punktos\n");
    printf("juusu izveeleetajaa intervaalaa un ar juusu izveeleetu soli.\n");
    printf("Luudzu ievadīt izveeleeto intervaalu: ");
    scanf("%lf %lf %lf", &a, &b);
    printf("Luudzu ievadīt izveeleeto soli: ");
    scanf("%lf", &delta_x);
    pFile = fopen("derivative.dat", "w");
    fprintf(pFile, "%7s %14s %15s", "x", "f(x)", "an. f(x)'");
    fprintf(pFile, "%12s %12s %11s\n", "sk. f(x)'", "an. f(x)''", "sk. f(x)''");

    x = a;
    while (x < b) {   
        fprintf(pFile,"%10.2f\t%10.2f\t%10.2f\t",x,funkcija(x),al_atv(x));
        fprintf(pFile,"%10.2f\t%10.2f\t%10.2f\n",skait_atv(x, delta_x),al_atv_2(x),skait_atv_2(x, delta_x));
        x += delta_x;
    }

    fclose(pFile);
    return 0;
}
