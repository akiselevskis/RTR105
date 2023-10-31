#include <stdio.h>
#include <string.h>

int main() {
    char vards[100];
    char longestWord[100];
    int max = 0;

    printf("Enter a sentence: ");
    scanf("%[^\n]s", vards);

    int i = 0;

    while (vards[i] != '\0') {
        int wordStart = i;
        while (vards[i] != ' ' && vards[i] != '\0') {
            i++;
        }

        int wordLength = i - wordStart;

        if (wordLength > max) {
            max = wordLength;
            strncpy(longestWord, vards + wordStart, wordLength);
            longestWord[wordLength] = '\0';
        }

        if (vards[i] != '\0') {
            i++; // Skip the space
        }
    }

    printf("Tavs teikums: %s\n", vards);
    printf("Garākais vārds: %s\n", longestWord);
    printf("Garākā vārda garums: %d\n", max);

    return 0;
}
