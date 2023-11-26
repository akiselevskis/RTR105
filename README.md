# RTR105
Studiju kursa Datormācība (pamatkurss) elektroniskā klade[^1]
  
![C language logo](https://cdn.iconscout.com/icon/free/png-256/free-c-58-1175247.png?f=webp)

## 1.nodarbības "atziņas"
**Manas pirmās Linux komandas:**  
  1.  uname (print system information)
  1.  uname -a (print all system information)
  1.  **man** *function* (man is the interface to the system reference manuals)
  1.  whoami (print effective userid)
  1.  pwd (print name of current/working directory)
  1.  history (GNU History Library - lists all previously executed functions)

>Lai atvērtu Linux termināli -> Ctrl + Alt + T.

## 2/3.nodarbības "atziņas"
Lielai daļai funkciju ir opcijas/atslēgas, kas maina funckcijas darbību. Terminālī, kā arī šajās atziņās, šīs opcijas tiks apzīmētas -x veidā.
  1.  . un .. (ar punktiem apzīmē paslēptus dokumentus/mapes)
  1. ls (list directory contents):
     
     - ls -a (do not ignore entries starting with .) (uzrāda arī apslēptos dokumentus)
     - ls -r (reverse order while sorting)
     - ls -l (dereference - when showing file information for a symbolic link, show informa‐
              tion  for  the file the link references rather than for the link
              itself)
     - ls -t (sort by modification time, newest first)
  1. cd (change directory command. Lai tā strādātu - cd vēlamā atrašanās vieta vai cd /atrašanas vieta/apakšatrašanās vieta/):
     
       - cd (iet uz sākuma atrašanās vietu. To pašu var panākt ar cd ~ un cd /home/user)
       - cd . (doties uz tagadējo atrašanās vietu)
       - cd .. (doties uz iepriekšējo atrašanās vietu - doties vienu apakšzaru atpakaļ)
       - cd home vai cd home/ vai cd /home vajadzētu darīt to pašu darbību.
  1. mkdir (make directories. Example: mkdir text_1.txt, makes a file with that name in your current directory)
  1. echo (display a line of text. Works as the print function. Example: echo La La, returns La La)
       - echo text > file (If a file with that name doesn't exist, it creates a file and writes the text in the file. If it exists, it overwrites it with the new text. Example: echo 12345 > text_1.txt)
       - echo text >> file (If a file with that name doesn't exist, it creates a file and writes the text in the file. If it exists, it adds the new text in a new line. Example: echo 12345 >> text_1.txt)
       - the option -e before text allows to use modification tools (enables interpretation of backslash escapes),
         for example \n to write in a new line or \r to return cursor to the beginning (carriage return). Example: echo -e "12345\n6789" returns numbers 12345 enter 6789. Ķepiņas ir obligātas.
    
  1. cat (reads from document and returns information. Example: cat text_1.txt)
  1. touch (change file timestamps)
  1. rm (remove files or directories. Example: rm text_1.txt deletes it)
      - rm text_*.txt will remove all variants of text_blank.text files, for example: text_1.txt and text_2.txt will be deleted.
      - **To be sure that no extra files are selected, it is recommended to use ls text_*.txt first)**
  1. History data can be pushed in a txt file. For example: history > history_20230912_Class_02.txt
  1. hexdump -C (see hex information about files)
  1. nano text.txt (create text.txt and open it in text editor Nano)
  1. chmod 444 text.txt (edit permissions of the file text.txt. 444 means read, read read. 7 means write... it is decimal from binary)
  1. script.sh is a script (sh. is an executable shell file. To launch it, say ./script.sh.) The first line has to be:
     - #!/bin/bash
  1. cp (copy smth)

### Kā uzrakstīt shell funckiju?
1. nano functionName.sh
2. Sāc ar #!/bin/bash un katrā jaunā rindā raksti ierastās linux funckijas
3. Iedod funckija atļauju tikt palaistai ar chmod (vai nu  chmod +x functionName.sh vai chmod 777 functionName.sh)
   Strādājošu shell funckiju var atrast šeit: https://github.com/akiselevskis/RTR105/blob/main/ReadMeExplanations/test.sh

  ## 4.nodarbības "atziņas" - git clone sasaiste
  1. git
  1. 

>Opcijas var apvienot un to secība nav svarīga. -l -a ir tas pats, kas -la, ir tas pats, kas -al...

>Katrai opcijai ir pilnā versija, kuru var izmantot priekšā rakstot divas "-" zīmes. Piemēram: -a ir tas pats, kas --all.


3

  ## 5.nodarbības "atziņas" - funckijas izveide un palaišana
  1. Ar nano palīdzību izveido programmatūru (.c galote priekš C programmas un .sh priekš Shell programas). -> nano first.c
  2. Tajā ieraksta programmas kodu, saglabā un aizver.
  3. To kompilē ar kodu gcc name (piem. gcc first.c). Lai to nosauktu citādi, jāpievieno opcija -o (piem. gcc first.c -o first.out).
  4. To palaiž ar ./name (piem. ./first.out)
  5. Ja failam nav visas nepieciešamās izpildes atļaujas, tās var sniegt ar sudo un chmod *(nepieciešams papildinājums)*.

Informācija, lai noformētu lapu: https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax.
  ## 6/7.nodarbības "atziņas" - C data types and operations
  1. stdin, stdout?
  2. inform user
  3. Create program that reads user name and age and displays name and birth year

  ## 8. nodarbība - if operators
  ## 9. nodarbība - for, while, do-while operatori

  ## 10. nodarbība - funckijas
  1. Definē funckiju (nevar būt nosaukta main):
     ```
     int function(int a, int b){
       return a + b;
     }
     ```

Ja funckija tiks definēta pēc main funkcijas, programma nestrādās. Lai to novērstu - var izmantot funkcijas prototipus: <br />
  Pirms main funckijas izveido funckijas prototipu: 
  ```
  int function(int, int);
  ```
  Protams, ka funckijas tips un mainīgo datu tips var mainīties, bet pārējais nemainās. <br />
  Bieži izmantots funckijas datu tips ir void. Void funckijas neatgriež vērtību (bet spēj mainīt mainīgos, izmantot printf u.c.)
  ```
  void function(){
  }
  ```
  Tām nav nepieciešams return paziņojums.
  ## 12. nodarbība - norādes (pointers)
  Lai saprastu norādes (pointers), nepieciešams saprast adreses. Adreses var atrast ar &variable un %p specifizātoru:
  ```
  int var = 5;
  printf("Mainīgā adrese ir %p", &var); //output mainās!
  ```
Adrese katru reizi būs atšķirīga pateicoties Address Space Layout Randomization (ASLR): https://en.wikipedia.org/wiki/Address_space_layout_randomization <br />
Pointer ir īpašs mainīgais, kas uztur nevis vērtību, bet gan adresi.
Pointer var deklarēt ar datu tipu, "*" un nosaukumu:
```
int* p; //vai
int *p;
```
Vienā int deklarācijas reizē var deklarēt gan parastas int vērtības, gan pointers. Lai pievienotu pointerim kāda mainīgā adresi, izmanto "&":
```
    int a, *p;
    a = 5; //piemērs
    p = &a;
    printf("a vērtība: %d\n", a);
    printf("a adrese = pc pointera vērtība: %p\n", p);
```
2 veidi kā nosaukt pointer:
1. Izsaukt adresi tieši no mainīgā,
1. Pievienot adreses vērtību pointerim un to pasaukt.

Labs paskaidrojums redzams šeit:
```
#include <stdio.h>
int main()
{
    int num = 43;
    int *ptr = &num;
    
    printf("%d\n", num); //outputs the value of the variable
    
    printf("%p\n", &num); //outputs the adress of the variable
    
    printf("%p\n", ptr); //outputs the value of the pointer which is an adress
    
    printf("%d\n", *ptr); //outputs the dereferenced pointer (the value that the pointers adress spot holds)

    return 0;
}
```
  ## 13. nodarbība - strings and char arrays
  C valodā nepastāv string datu tips. Katrs string C valodā ir simbolu masīvs, jeb char array. String, toties ir savs data tipa specifizātors pie printf.
  char vards[100];
  ```
    char vards[50];
    printf("Ievadi vārdu: ");
    scanf("%s", vards);
    printf("Tavs vārds ir: %s.", vards);
 ```
Masīviem nepieciešams specifizēt izmēru (to veic kantainajās iekavās) un skaitlis būs vienāds 
ar iespējamo simbolu skaitu - 1, jo pēdējā vieta tiek atvēlēta "\0", jeb Null simbolam.
 ## 14. nodarbība - FILEs
 C valodā izmanto FILE norādi, lai strādātu ar failiem. Piemēram, tiek izveidota norāde ptr, kuras datu tips ir FILE:
 ```
FILE* ptr;
```
Lai lasītu un rakstītu failā, tas ir jāatver. Tam izmanto fopen() funckiju, kas ir definēta stdio.h bibliotēkā.
```
FILE* ptr;
ptr = fopen("location_to_file/hello.txt", "w");
```
Pirmais funckijas mainīgais ir faila atrašanās vieta (pat ja tāds neeksistē) un otrais mainīgais ir faila atvēršanas režīms. To uzskaitījums pieejams šeit: https://www.tutorialspoint.com/cprogramming/c_file_io.htm. <br/>
Fails vienmēr ir jāaizver. To veic fclose() funckija:
```
fclose(ptr);
```
Vienmēr ir labi noskaidrot vai fails ir atvērts **pirms** tajā veic darbības un to aizver. Lūk piemērs visam (no https://github.com/akiselevskis/RTR105/blob/main/Class_14/filetest.c):
```
//https://cplusplus.com/reference/cstdio/fopen/
#include <stdio.h>
int main ()
{
  FILE * pFile;
  pFile = fopen ("myfile.txt","w");
  if (pFile!=NULL)
  {
    fputs ("fopen example\n",pFile);
    fclose (pFile);
  }
  return 0;
}
```
 ## 15. nodarbība - papilddarbs - dinamiskā atmiņas piešķiršana
 Malloc(), jeb Memmory Allocation ir funckija, kas uztur norādīto daudzumu atmiņas un izveido norādi uz brīvās atmiņas pirmo bitu. Piemērs:
 ```
ptr = (int*) malloc(100 * sizeof(int));
 ```
Calloc(), jeb Contiguous Allocation. Piemērs:
```
ptr = (float*) calloc(25, sizeof(float));
```
Free() ir metode, kā atbrīvot neizmantoto atmiņu. Piemērs:
```
free(ptr);
```
Realloc() jeb Re-allocation ir metode, kā mainīt ar Malloc vai Calloc rezervēto atmiņu, ja tā ir nepietiekama. Piemērs:
```
ptr = realloc(ptr, newSize);
```
Realloc padara bezgalīgu datu pievienošanu par iespējamību (un izmantojot mazāko atmiņas daudzumu, kas nepieciešams. <br/>
Piemērs kā izmantot atmiņu, lai izveidotu noteikta lieluma masīvu un atbrīvot
```
// https://www.geeksforgeeks.org/dynamic-array-in-c/

#include <stdio.h> 
#include <stdlib.h> 
int main() 
{ 

	// address of the block created hold by this pointer 
	int* ptr; 
	int size; 

	// Size of the array 
	printf("Enter size of elements:"); 
	scanf("%d", &size); 

	// Memory allocates dynamically using malloc() 
	ptr = (int*)malloc(size * sizeof(int)); 

	// Checking for memory allocation 
	if (ptr == NULL) { 
		printf("Memory not allocated.\n"); 
	} 
	else { 

		// Memory allocated 
		printf("Memory successfully allocated using "
			"malloc.\n"); 

		// Get the elements of the array 
		for (int j = 0; j < size; ++j) { 
			ptr[j] = j + 1; 
		} 

		// Print the elements of the array 
		printf("The elements of the array are: "); 
		for (int k = 0; k < size; ++k) { 
			printf("%d, ", ptr[k]); 
		} 
	} 

	return 0; 
}
```
 ## 16. nodarbība - gnuplot
 ## 17. nodarbība - Teilora rindas
 
[^1]: Lapa izveidota 05.09.23. <br/>
Informācija, lai noformētu lapu: https://docs.github.com/en/get-started/writing-on-github/getting-started-with-writing-and-formatting-on-github/basic-writing-and-formatting-syntax.

$${\color{Red}**Beigas**}$$
