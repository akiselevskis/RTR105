#include <stdio.h>
#include <math.h>

float funkcija(double x) {
    return cos(x/2) * cos(x/2);
}

int main() {
    double a, b;
    double A;
    double funkca, funkcb;
    int k = 0;
    double x, delta_x = 0.001;

    printf("Ludzu ievadiet izveleto intervalu. Pirmo mazako, otro lielako: ");
    scanf("%lf %lf", &a, &b);
    printf("Ludzu ievadiet izveleto funkcijas nobidi (pozitivs skaitlis nobidi funkciju uz leju, bet negativs uz augshu): ");
    scanf("%lf", &A);

    funkca = cos(a/2) * cos(a/2) - A;
    funkcb = cos(b/2) * cos(b/2) - A;

    if (funkca * funkcb > 0) {
        printf("Intervala [%.2lf;%.2lf] cos(x/2)*cos(x/2) funkcijai ", a, b);
        printf("Saknu nav (vai taja ir para saknu skaits)\n");
        printf("Pieradijums: %lf\n", funkca * funkcb);
        return 1;
    }

    do {
        k++;
        x = (a + b) / 2;
        funkca = cos(a/2) * cos(a/2) - A;
        funkcb = cos(x/2) * cos(x/2) - A;

        if (funkca * funkcb > 0) {
            a = x;
        } else {
            b = x;
        }

        printf("%2d. iteracija: cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\t", k, a, a, cos(a/2) * cos(a/2));
        printf("cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\t", x, x, cos(x/2) * cos(x/2));
        printf("cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\n", b, b, cos(b/2) * cos(b/2));
    } while (fabs(funkcb) > delta_x);

    printf("Sakne atrodas pie x = %.3lf, jo cos(x/2)*cos(x/2) ir %.3lf\n", x, cos(x/2) * cos(x/2));

    return 0;
}