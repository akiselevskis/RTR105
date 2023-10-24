#include <stdio.h>
int main()
{
  char var = 'a';
  printf("var: %c\n", var);

  // Notice the use of & before var
  printf("address of var: %p\n", &var);  
  return 0;
}
