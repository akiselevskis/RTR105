/* fclose example */
#include <stdio.h>
int main()
{
  FILE *pFile;
  pFile = fopen("myfile2.txt", "wt");
  if (pFile != NULL)
  {
    fprintf(pFile, "fclose example\n");
    fclose(pFile);
  }
  return 0;
}
