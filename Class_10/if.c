#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10

int main(void){
 //int gadijuma_skaitlis = 101;
 int gadijuma_skaitlis, gadijuma_skaitlu_generatora_grauds;

 gadijuma_skaitlu_generatora_grauds = time(NULL);
 printf("Gadījuma skaitļu ģenerātora grauds - %d\n", gadijuma_skaitlu_generatora_grauds);

 srand(gadijuma_skaitlu_generatora_grauds);
 gadijuma_skaitlis = rand();
 printf("Gadījuma skaitlis - %d\n", gadijuma_skaitlis);

 //False ir tikai skaitliskā "0". True ir visi pārejie.
 //Ja kaut vienā bitā ir "1", skaitlis nav 0.

 if(gadijuma_skaitlis % 10 == 0){ //tā rakstītu skolā un tas ir normāli
  printf("Šis skaitlis dalās ar 10 bez atlikuma.\n");
 }
 if(gadijuma_skaitlis % 10){ //tiek parbaudīts vai šis skaitlis dalās ar 10 bez atlikuma
			     // 101 % 10 -> 1
			     // 100 % 10 -> 0
  printf("Šis skaitlis nedalās ar 10 bez atlikumu.\n");
 }
 else{ // NB! else vienmēr pieder kādam if (if bez else var būt, else bez if - nevar)
  printf("Šis skaitlis nedalās ar 10 bez atlikumu.\n");
 }
 return 0;
}
