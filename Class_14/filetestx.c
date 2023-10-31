/* fopen example with w+ test*/
#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfilex.txt","w+");
  if (pFile!=NULL)
  {
    fputs ("fopen example\n",pFile);
    fclose (pFile);
  }
  return 0;
}
