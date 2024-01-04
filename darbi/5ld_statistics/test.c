#include <stdio.h>
#include <string.h>
#include <math.h>

void nolase(char *teikums) {
    fgets(teikums, 150, stdin);
    int j = 0;
    for (int i = 0; i < strlen(teikums); i++) {
        if (teikums[i] != ' ' && teikums[i] != '\n') {
            teikums[j++] = teikums[i];
        }
    }
    teikums[j] = '\0';
}

void bubbleSort(char *teikums, int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (teikums[j] > teikums[j + 1]) {
                char temp = teikums[j];
                teikums[j] = teikums[j + 1];
                teikums[j + 1] = temp;
            }
        }
    }
}

void printToFile(char *teikums, int length) {
    FILE *pFile;
    pFile = fopen("statistics.dat", "w");
    if (pFile == NULL) {
        printf("Error opening file.\n");
        return;
    }

    for (int i = 0; i < length; i++) {
        fprintf(pFile, "%c\t%d\n", teikums[i], teikums[i]);
    }

    fclose(pFile);
}

int main() {
    char teikums[150];
    printf("Shii programma panjems juusu ievadiito teikumu un izdos plashu informaciju par to.\n");
    printf("Ludzams neizmantot interpunkciju un simbolus, ja neveelaties lai programma to njem veeraa.\n");
    printf("Ludzu ievadiit teikumu: ");
    nolase(teikums);
    
    int length = strlen(teikums);

    printf("Juusu ievadiitais teikums bez atstarpēm ir: %s\n", teikums);

    bubbleSort(teikums, length); //teikums tiek pārkārtots augošā secībā

    printf("Teikums ar simboliem sakartotiem augošā secībā pēc to ASCII vērtībām: %s\n", teikums);
    printf("ASCII vērtības sakārtotajam teikumam:\n");

    printToFile(teikums, length);

    return 0;
}
