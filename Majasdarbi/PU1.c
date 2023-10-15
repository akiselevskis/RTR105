#include <stdio.h>
int main()
{
    long long int input1, input2, returnValue;
    printf("Lūdzu ievadīt abus skaitļus tā, lai starp cipariem nebūtu atstarpes\n"); 
    printf("un lai starp skaitļiem būtu atstarpe vai \"Enter\":");
    scanf("%lld", &input1); //Pirmais mainīgais = 400000
    scanf("%lld", &input2); //Otrais mainīgais = 100000
    returnValue = input1*input2; //Mainīgo reizinājums = 100000*400000 = 40000000000
    printf("%lld\n", returnValue); //Izdod reizinājumu
    return 0;
}
        //Šī programma nestrādā, ja starp cipariem ievieto atstarpes (piem. 400 000).
        //Lai tā strādātu, jaaievieto 400000 un 100000.
        //Lūdzu dodiet ziņu, ja šī problēma ir jālabo. Paldies!

