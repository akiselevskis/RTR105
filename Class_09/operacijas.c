// šis ir fails, kurā tiek testēti dažādi datu tipi un operācijas no:
// https://en.cppreference.com/w/c/language/operator_precedence
#include <stdio.h>
int main(){
 int a = 5;
 printf("a vertība: %d\n", a);      // outputs 5
 printf("++a vērtiba: %d\n",++a);   // a becomes 6
 printf("a++ vertība: %d\n", a++);  // a becomes 7
 printf("--a vertība: %d\n",--a);  // a becomes 6
 printf("a-- vertība: %d\n", a--);  // a becomes 5
 return 0;
}
