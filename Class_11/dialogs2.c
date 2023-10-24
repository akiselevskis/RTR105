#include <stdio.h>
#include <string.h>
int main(){
 char burts[100];
 char vards[100];
 int i = 0;
// while(vards[i] != '.'){
// scanf("%c", vards);
// }
 char pedejais = 'a';
 while(pedejais != 't'){
  scanf(" %s", vards);
  printf("%s\n", vards);
  int garums = strlen(vards);
  printf("%d\n", garums);
  char pedejais = vards[garums-1];
  printf("%c\n", pedejais);
 }
// printf("%c\n", vards[garums-1]);
 return 0;
}
