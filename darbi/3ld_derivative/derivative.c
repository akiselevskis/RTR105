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
    float a = 0., b = 2 * M_PI, x, delta_x = 1.e-2;

    pFile = fopen("derivative.dat", "w");
    fprintf(pFile, "%9s %17s %14s", "x", "f(x)", "analitiskais f(x)'");
    fprintf(pFile, "%9s %17s %14s\n", "skaitliskais f(x)'", "analitiskais f(x)''", "skaitliskais f(x)''");

    x = a;
    while (x < b) {   
        fprintf(pFile,"%10.2f\t%10.2f\t%10.2f\t",x,funkcija(x),al_atv(x));
        fprintf(pFile,"%10.2f\t%10.2f\t%10.2f\n",skait_atv(x, delta_x),al_atv_2(x),skait_atv_2(x, delta_x));
        x += delta_x;
    }

    fclose(pFile);
    return 0;
}
