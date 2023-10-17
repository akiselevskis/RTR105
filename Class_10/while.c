#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void){
 int i = 0;
 int gadijuma_skaitlis, gadijuma_skaitlu_generatora_grauds;

 gadijuma_skaitlu_generatora_grauds = time(NULL);
 printf("Gadījuma skaitļu ģenerātora grauds - %d\n", gadijuma_skaitlu_generatora_grauds);

 srand(gadijuma_skaitlu_generatora_grauds);
 gadijuma_skaitlis = rand();

 i = i + 1; // NB! darbības (operācijas) netiek pildītas vienlaicīgi
	    // seit ir divas operācijas (saskaitīšana - + un piešķiršana - =)
	    // saskaitīšana ir prioritāra - tā tiks izpildīta pirmā
	    // i++; inkrements (skaitļa pieaugums par vienu vienību)
	    // ++i;
	    // i += 1


 while(gadijuma_skaitlis % 10){
 printf("%d, skaitlis\n", i);
 printf("Gadījuma skaitlis - %d\n", gadijuma_skaitlis);
 printf("Šis skaitlis nedalās ar 10 bez atlikuma.\n");
 gadijuma_skaitlis = rand(); //bez šīs rindiņas dabūsim bezgalīgu ciklu
 i++;
 }
 printf("Ģenerēšanas beigas\n");
 printf("Nejaušais skaitlis %d, %d iterācijā beidzot dalās ar 10 bez atlikuma.\n", gadijuma_skaitlis, i);

 return 0;
}
