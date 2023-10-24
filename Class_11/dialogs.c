#include <stdio.h>
int main(){
 char teikums[100][100];
 teikums[0][0] = 'A';
 teikums[0][1] = 'B';
 teikums[1][0] = 'C';
 teikums[1][1] = 'D';
 printf("Ievadīt teikumu, kas beidzas ar \".\": ");
 char a;
 while(a != '\0'){
  scanf("%c", a);
 }
 return 0;
}


/* printf("You inserted %c\n", teikums[0][0]);
 printf("You inserted %c\n", teikums[0][1]);
 printf("You inserted %c\n", teikums[1][0]);
 printf("You inserted %c\n", teikums[1][1]);
*/
