#include <stdio.h>
#include <string.h>

void nolase(char *teikums) {
    fgets(teikums, 150, stdin);

    int length = strlen(teikums);
    int j = 0;

    for (int i = 0; i < length; i++) {
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

int main() {
    char teikums[150];
    printf("Shii programma panjems juusu ievadiito teikumu un izdos plashu informaciju par to.\n");
    printf("Ludzu ievadiit teikumu: ");
    nolase(teikums);
    printf("Juusu ievadiitais teikums bez atstarpēm ir: %s\n", teikums);
    printf("Minimaalaa veertiiba ir %d ar simbolu %c\n", minVertiba(teikums), minVertiba(teikums));
    printf("Maksimaalaa veertiiba ir %d ar simbolu %c\n", maxVertiba(teikums), maxVertiba(teikums));

    return 0;
}
