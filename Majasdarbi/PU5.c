#include <stdio.h>
int main(void) {
    int skaitlis = 0;
    char datu_tips = 0;
    int si = 1; // mainīgais, kas uzturēs faktoriāļa vērtību int datu tipā
    char sc = 1; // mainīgais, kas uzturēs faktoriāļa vērtību char datu tipā
    long long sll = 1; // mainīgais, kas uzturēs faktoriāļa vērtību long long datu tipā
    int reize = 1;

    printf("Ievadiet decimālu skaitli: ");
    scanf("%d", &skaitlis);

    printf("Ievadiet datu tipu.\n"
           "c priekš char, i priekš int un l priekš long long: ");
    scanf(" %c", &datu_tips);

    if (datu_tips == 'c') {
        for (reize = 1; reize <= skaitlis; ++reize) {
            sc *= reize;
            
            if (reize >= 5) {
                if ((sc % 10) != 0) {
                    printf("\nKļūda. Novērota pārplūde (datu tips nespēj uzturēt tik lielu faktoriāļa vērtību).\n");
                    return 1;
                }
            }
        }
        printf("Faktoriālis no ievadītā skaitļa ir %d\n", sc);
    }

    if (datu_tips == 'i') {
        for (reize = 1; reize <= skaitlis; ++reize) {
            si *= reize;

            if (reize >= 5) {
                if ((si % 10) != 0) {
                    printf("\nKļūda. Novērota pārplūde (datu tips nespēj uzturēt tik lielu faktoriāļa vērtību).\n");
                    return 1;
                }
            }
        }
        printf("Faktoriālis no ievadītā skaitļa ir %d\n", si);
    }

    if (datu_tips == 'l') {
        for (reize = 1; reize <= skaitlis; ++reize) {
            sll *= reize;

            if (reize >= 5) {
                if ((sll % 10) != 0) {
                    printf("\nKļūda. Novērota pārplūde (datu tips nespēj uzturēt tik lielu faktoriāļa vērtību).\n");
                    return 1;
                }
            }
        }
        printf("Faktoriālis no ievadītā skaitļa ir %lld\n", sll);
    }
    return 0;
}
