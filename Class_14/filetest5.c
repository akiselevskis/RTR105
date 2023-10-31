/* fwrite example : write buffer */
//https://cplusplus.com/reference/cstdio/fwrite/
#include <stdio.h>

int main ()
{
  FILE * pFile;
  char buffer[] = { 'x' , 'y' , 'z', '\0' }; //NULL gets ignored (but takes up space)
  pFile = fopen ("myfile5.bin", "wb");
  fwrite (buffer , sizeof(char), sizeof(buffer), pFile);
  fclose (pFile);
  return 0;
}
