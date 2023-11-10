#include <stdio.h>
int main()
{
    char pirmais, otrais, tresais, izvele;
    printf("Lūdzu ievadīt 3 burtus: ");
    scanf(" %c %c %c", &pirmais, &otrais, &tresais);
    printf("Lūdzu izvēlēties datu uzrādīšanas veidu.\n");
    printf("Ievadīt \"a\" priekš alfabēta secības un \"r\" priekš alfabētiski apgrieztas secības: ");
    scanf(" %c", &izvele);
    char mazakais, videjais, lielakais;

    if (pirmais <= otrais && pirmais <= tresais) {
        mazakais = pirmais;
        if (otrais <= tresais) {
            videjais = otrais;
            lielakais = tresais;
        } else {
            videjais = tresais;
            lielakais = otrais;
        }
    } else if (otrais <= tresais && otrais <= pirmais) {
        mazakais = otrais;
        if (tresais <= pirmais) {
            videjais = tresais;
            lielakais = pirmais;
        } else {
            videjais = pirmais;
            lielakais = tresais;
        }
    } else if (tresais <= pirmais && tresais <= otrais) {
        mazakais = tresais;
        if (pirmais <= otrais) {
            videjais = pirmais;
            lielakais = otrais;
        } else {
            videjais = otrais;
            lielakais = pirmais;
        }
    }

    if (izvele == 'a') {
        printf("Sorted in alphabetical order: %c %c %c\n", mazakais, videjais, lielakais);
    }
    if (izvele == 'r') {
        printf("Sorted in reverse order: %c %c %c\n", lielakais, videjais, mazakais);
    }

    return 0;
}
