#include <stdio.h>
int main(void) {
    int skaitlis = 0;
    char datu_tips = 0;
    int si = 1; //mainīgais, kas uzturēs faktoriāļa vērtību int datu tipā
    char sc = 1; //mainīgais, kas uzturēs faktoriāļa vērtību char datu tipā
    long long sll = 1; //mainīgais, kas uzturēs faktoriāļa vērtību long long datu tipā
    int k = 0;
    int reize = 1;
    
    printf("Ievadiet decimālu skaitli: ");
    scanf("%d", &skaitlis);
    
    printf("Ievadiet datu tipu.\n"
           "c priekš char, i priekš int un l priekš long long: ");
    scanf(" %c", &datu_tips);

    if (datu_tips == 'c') {     //šeit tiek pārbaudīta pārplūde. Tā kā visu faktoriāļu vērtības, kuru bāze ir vienāda vai lielāka par 5 dalās ar 10, 
        while (skaitlis > 0) {  //pārbaudot vai rezultāts dalās ar 10, var pārbaudīt vai rezultāts aizvien uztur īsto faktoriāļa vērtību un nav pārplūdis
            sc = sc * skaitlis;
            skaitlis--;
            reize++;

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
        while (skaitlis > 0) {
            si = si * skaitlis;
            skaitlis--;
            reize++;

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
        while (skaitlis > 0) {
            sll = sll * skaitlis;
            skaitlis--;
            reize++;

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
