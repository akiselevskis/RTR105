#include<stdio.h>

int main()
 {
 int i_array_2[3] = {1,2,3}; // int lielumu masīva definēšana
 int i = 0;

 printf("masīva i_array_2 adrese: %p\n",i_array_2);

 printf("masīva i_array_2 0. elementa adrese: %p\n",&i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",i_array_2[0]);
 printf("masīva i_array_2 0. elementa vērtība: %d\n",*(i_array_2+0));

 printf("masīva i_array_2 1. elementa adrese: %p\n",&i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",i_array_2[1]);
 printf("masīva i_array_2 1. elementa vērtība: %d\n",*(i_array_2+1));

 printf("masīva i_array_2 2. elementa adrese: %p\n",&i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",i_array_2[2]);
 printf("masīva i_array_2 2. elementa vērtība: %d\n",*(i_array_2+2));

 printf("\nCikla izmantošana programmētāja dzīves kvalitātes uzlabošanai :-)\n");
 for(i = 0; i<10 ; i++)
  {
  printf("masīva i_array_2 %d. elementa adrese: %p\n",i,&i_array_2[i]);
  printf("masīva i_array_2 %d. elementa vērtība: %d\n",i,i_array_2[i]);
  printf("masīva i_array_2 %d. elementa vērtība: %d\n",i,*(i_array_2+i));
  }

 printf("\nProgrammētāja pasargāšana no loģiskās kļūdas :-)\n");
 int N_bytes = sizeof(i_array_2);
 printf("i_array_2 masīva izmērs baitos: %d\n",N_bytes);
 int N = N_bytes/sizeof(int);
 printf("i_array_2 masīva izmērs elementos: %d\n",N);

 for(i = 0; i<N ; i++)
  {
  printf("masīva i_array_2 %d. elementa adrese: %p\n",i,&i_array_2[i]);
  printf("masīva i_array_2 %d. elementa vērtība: %d\n",i,i_array_2[i]);
  printf("masīva i_array_2 %d. elementa vērtība: %d\n",i,*(i_array_2+i));
  }


 return 0;
 }
