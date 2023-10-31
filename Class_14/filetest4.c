/* fscanf example */
#include <stdio.h>

int main ()
{
  char str [80];
  float f;
  FILE * pFile;

  pFile = fopen ("myfile4.txt","w+");
  fprintf (pFile, "%f %s", 3.1416, "PI");
  rewind (pFile); //noliek nolasīšanas galviņu pašā sākumā
  fscanf (pFile, "%f", &f);
  fscanf (pFile, "%s", str);
  fclose (pFile);
  printf ("I have read: %f and %s \n",f,str);
  return 0;
}
