#include <stdio.h>
int main(){
char c1;
printf("Lūdzu ievadīt naturālu skaitli no 1 līdz 9: ");
scanf("%c", &c1);
c1 = c1 & 15;
printf("%d binaraja kodā: ", c1);
for (int i = 7; i >= 0; i--){
    printf("%d", (c1 >> i) & 1);
}
printf("\n");
return 0;
}

