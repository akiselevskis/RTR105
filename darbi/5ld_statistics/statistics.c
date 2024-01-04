#include <stdio.h>
#include <string.h>
#include <math.h>

void nolase(char *teikums) { //nolasa lietotaaja ievadito teikumu un iznjem atstarpes un \n operatoru
    fgets(teikums, 150, stdin);
    int j = 0;
    for (int i = 0; i < strlen(teikums); i++) {
        if (teikums[i] != ' ' && teikums[i] != '\n') {
            teikums[j++] = teikums[i];
        }
    }
    teikums[j] = '\0';
}

int minVertiba(char *teikums) {
    int min = teikums[0];
    for (int i = 0; i < strlen(teikums); i++) {
        if (teikums[i] < min) {
            min = teikums[i];
        }
    }
    return min;
}

int maxVertiba(char *teikums) {
    int max = teikums[0];
    for (int i = 0; i < strlen(teikums); i++) {
        if (teikums[i] > max) {
            max = teikums[i];
        }
    }
    return max;
}

double vidVertiba(char *teikums) {
    int summa = 0;
    for (int i = 0; i < strlen(teikums); i++) {
        summa += teikums[i];
    }
    return round((double)summa / strlen(teikums));
}
double mediana(char *teikums) {
    int garums = strlen(teikums);
    if (garums % 2 == 0) {
        return round((teikums[garums / 2 - 1] + teikums[garums / 2]) / 2.0);
    } else {
        return teikums[garums / 2];
    }
}
void bubbleSort(char *teikums) {
    int n = strlen(teikums);
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (teikums[j] > teikums[j + 1]) {
                char temp = teikums[j];
                teikums[j] = teikums[j + 1];
                teikums[j + 1] = temp;
            }
        }
    }
}
void moda(char *teikums) {
    int maksCount = 0;
    char modaSimboli[150];
    int modaSkaits = 0;

    for (int i = 0; i < strlen(teikums); i++) {
        int currentCount = 1;

        for (int j = i + 1; j < strlen(teikums); j++) {
            if (teikums[i] == teikums[j]) {
                currentCount++;
            }
        }

        if (currentCount > maksCount) {
            maksCount = currentCount;
            modaSkaits = 1;
            modaSimboli[0] = teikums[i];
        } else if (currentCount == maksCount) {
            modaSimboli[modaSkaits++] = teikums[i];
        }
    }
    if(maksCount==1){
        printf("Teikumam nav modas, jo visi simboli parādās tieši 1 reizi.\n");
    }else{
    printf("Moda ir");
    for (int i = 0; i < modaSkaits; i++) {
        printf(" %c", modaSimboli[i]);
    }
    printf(" ar %d sastopamībām\n", maksCount);
    }
}
int main() {
    char teikums[150];
    FILE *pFile;
    pFile = fopen("statistics.dat", "w");
    printf("Shii programma panjems juusu ievadiito teikumu un izdos plashu informaciju par to.\n");
    printf("Ludzams neizmantot interpunkciju un simbolus, ja neveelaties lai programma to njem veeraa.\n");
    printf("Ludzu ievadiit teikumu: ");
    nolase(teikums);
    printf("Juusu ievadiitais teikums bez atstarpēm ir: %s\n", teikums);
    int min = minVertiba(teikums);
    printf("Minimaalaa veertiiba ir %d ar simbolu %c\n", min, min);
    int max = maxVertiba(teikums);
    printf("Maksimaalaa veertiiba ir %d ar simbolu %c\n", max, max);
    double vid = vidVertiba(teikums);
    printf("Videejaa veertiiba ir %.lf, kas reprezentē ASCII simbolu %c\n", vid, (char)vid);
    bubbleSort(teikums); //teikums tiek pārkārtots augošā secībā
    double med = mediana(teikums);
    printf("Simbolu mediana ir %.lf, kas reprezentē ASCII simbolu %c\n", med, (char)med);
    moda(teikums);
    //printf("Minimaalaa veertiiba ir %d ar simbolu %c\n", teikums[0], teikums[0]);
    //printf("Minimaalaa veertiiba ir %d ar simbolu %c\n", teikums[strlen(teikums)-1], teikums[strlen(teikums)-1]);
    /*
    Alternatīvi veidi kā iegūt lielāko un mazāko simbolu.
    Šīs metodes netiek izmantotas, lai parādītu kā izdarīt vēlamās darbības ar citām funkcijām.
    Vairāki uzdevuma izpildes veidi dod iespēju koda darbības pārbaudei.
    */
    printf("Teikums ar simboliem sakartotiem augošā secībā pēc to ASCII vērtībām: %s\n", teikums);
    printf("ASCII vērtības sakārtotajam teikumam: ");
    for (int i = 0; i < strlen(teikums); i++) {
        printf("%d ", teikums[i]);
        fprintf(pFile,"%c\t%d\n",teikums[i]);
    }
    
    return 0;
}