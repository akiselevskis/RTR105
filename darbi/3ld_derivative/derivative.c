#include <stdio.h>
#include <math.h>

int main() {
    FILE *pFile;
    float a = 0., b = 2 * M_PI, x, delta_x = 1.e-2;

    pFile = fopen("derivative.dat", "w");
    fprintf(pFile, "%9s %17s %14s\n", "x", "cos(x/2)^2", "(cos(x/2)^2)'");

    x = a;
    while (x < b) {
        fprintf(pFile, "%12.2f %12.6f %12.6f\n", x, cos(x / 2) * cos(x / 2),
                (cos((x + delta_x) / 2) * cos((x + delta_x) / 2) - cos(x / 2) * cos(x / 2)) / delta_x);
        x += delta_x;
    }

    fclose(pFile);
    return 0;
}
