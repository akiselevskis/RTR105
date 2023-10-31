#include <stdio.h>
int main(){
 int max;
 char vards[100];
 scanf("%[^\n]s", vards);
 printf("Tavs teikums: %s\n", vards);
 printf("Garākais vārds: ");
 int i = 0;
 while(vards[i]!='\n'){
  while(vards[i]!=' '){
   printf("%c", vards[i]);
   i++;
  }
  max = i;
 }
 printf("%d\n", max);
 return 0;
}
