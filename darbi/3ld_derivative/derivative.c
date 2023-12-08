#include <stdio.h>
#include <math.h>

int main() {
    FILE *pFile;
    float a = 0., b = 2 * M_PI, x, delta_x = 1.e-2;

    pFile = fopen("derivative.dat", "w");
    fprintf(pFile, "\tx\t\tcos(x/2)*cos(x/2)\t\t(cos(x/2)*cos(x/2))'\n");

    x = a;
    while (x < b) {
        fprintf(pFile, "%10.2f\t%10.2f\t%10.2f\n", x, cos(x / 2) * cos(x / 2),
                (cos((x + delta_x) / 2) * cos((x + delta_x) / 2) - cos(x / 2) * cos(x / 2)) / delta_x);
        x += delta_x; // x=x+delta_x;
    }

    fclose(pFile);
    return 0;
}
