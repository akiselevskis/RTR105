#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Funkcija, kas iegūst simbolu rindu no lietotāja
void iegutRindu(char *rinda) {
    printf("Ievadiet simbolu rindu: ");
    fgets(rinda, 100, stdin);
}

// Funkcija, kas aprēķina minimālo vērtību
int minVertiba(char *rinda) {
    int min = rinda[0];
    for (int i = 1; i < strlen(rinda); i++) {
        if (rinda[i] < min) {
            min = rinda[i];
        }
    }
    return min;
}

// Funkcija, kas aprēķina maksimālo vērtību
int maxVertiba(char *rinda) {
    int max = rinda[0];
    for (int i = 1; i < strlen(rinda); i++) {
        if (rinda[i] > max) {
            max = rinda[i];
        }
    }
    return max;
}

// Funkcija, kas aprēķina vidējo vērtību
double videjaVertiba(char *rinda) {
    int summa = 0;
    for (int i = 0; i < strlen(rinda); i++) {
        summa += rinda[i];
    }
    return (double)summa / strlen(rinda);
}

// Funkcija, kas aprēķina mediānas vērtību
int medianaVertiba(char *rinda) {
    int garums = strlen(rinda);
    if (garums % 2 == 0) {
        return (rinda[garums / 2 - 1] + rinda[garums / 2]) / 2;
    } else {
        return rinda[garums / 2];
    }
}

int main() {
    char rinda[100];
    iegutRindu(rinda);

    int min = minVertiba(rinda);
    int max = maxVertiba(rinda);
    double videja = videjaVertiba(rinda);
    int mediana = medianaVertiba(rinda);

    printf("\nMinimālā vērtība: %d\n", min);
    printf("Maksimālā vērtība: %d\n", max);
    printf("Vidējā vērtība: %.2f\n", videja);
    printf("Mediānas vērtība: %d\n", mediana);

    // Šeit notiek simbolu rindas kārtošana alfabēta secībā
    printf("\nSakārtotā simbolu rinda:\n");
    for (char c = 'A'; c <= 'z'; c++) {
        for (int i = 0; i < strlen(rinda); i++) {
            if (rinda[i] == c) {
                printf("%c", rinda[i]);
            }
        }
    }
    printf("\n");

    // Atbilstošie ASCII skaitļi
    printf("Atbilstošie ASCII skaitļi:\n");
    for (char c = 'A'; c <= 'z'; c++) {
        for (int i = 0; i < strlen(rinda); i++) {
            if (rinda[i] == c) {
                printf("%d ", rinda[i]);
            }
        }
    }
    printf("\n");

    return 0;
}