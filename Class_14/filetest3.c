/* fprintf example */
#include <string.h> //to use strcspn
#include <stdio.h>

int main ()
{
   FILE * pFile;
   int n;
   char name [100];

   //Uzdevums - atvērt failu papildināšanais vai papildināšanai pēc lietotaja izvēles

   pFile = fopen ("myfile3.txt","w");
   if(pFile!=NULL){
    for (n=0 ; n<3 ; n++)
    {
      puts ("please, enter a name: ");
      fgets (name, 100, stdin); //stdin = keyboard input! (standart in)
      name[strcspn(name, "\n")] = 0; //https://stackoverflow.com/questions/2693776/removing-trailing-newline-character-from-fgets-input
      fprintf (pFile, "Name %d [%-10.10s]\n",n+1,name);
    }
    fclose (pFile);
   }
   return 0;
}
