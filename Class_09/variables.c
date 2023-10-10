#include<stdio.h>
int main(){
 char c1; //šī ir diskrētā mainīgā deklarēšana - noteikta izmēra atmiņas
	  // apgabals (char -> 1 byte) tiks sasaistīts ar noteiktu
	  // identifikātoru (c1)
	  // atmiņā nav vakuums => šaja rezervetajā atmiņas apgabalā būs
	  // kaut kāda 0 vai 1 kombinācija, kas palikusi no iepriekšējās
	  // programmas
 printf("\n");
 printf("c1 vertība uzreiz pēc deklarēšanas (simbols): %c\n", c1);
 printf("c1 vertība uzreiz pēc deklarēšanas (dec): %d\n", c1);
 printf("c1 vertība uzreiz pēc deklarēšanas (hex): %#x\n", c1);
 printf("c1 vertība uzreiz pēc deklarēšanas (oct): %#o\n", c1);
 printf("\n");
 // mainīgā loma ir - mainīties ...
 c1 = 'A'; // visbiežāk šo izmaiņu veiksim ar piešķiršanas operāciju
	   // piešķiršanas operācijai ir gandrīz viszemākā prioritāte
	   // (tā tiek izpildīta viena no pēdējām)
	   // labajā pusē izrēķinātais lielums (vertība) tiek izmitināta
	   // atmiņas apgabalā, kas ir saistīts ar kreisajā pusē pieminēto
	   // identifikātoru
 printf("c1 vertība uzreiz pēc piešķiršanas (simbols): %c\n", c1);
 printf("c1 vertība uzreiz pēc piešķiršanas (dec): %d\n", c1);
 printf("c1 vertība uzreiz pēc piešķiršanas (hex): %#x\n", c1);
 printf("c1 vertība uzreiz pēc piešķiršanas (oct): %#o\n", c1);
 printf("\n");
 c1 = 'U';
 printf("c1 vertība uzreiz pēc piešķiršanas (simbols): %c\n", c1);
 printf("c1 vertība uzreiz pēc piešķiršanas (dec): %d\n", c1);
 printf("c1 vertība uzreiz pēc piešķiršanas (hex): %#x\n", c1);
 printf("c1 vertība uzreiz pēc piešķiršanas (oct): %#o\n", c1);
 printf("\n");

 int birth_year = 2000; //ši ir mainīgā definēšana
			// (atmiņas apgabala sasaistīšana ar identifikatoru
			// vērtibas piešķiršana)
			// mainīgajiem identifikatoriem, jeb vārdiem, vēlams
			// izvēlēties mnemoniskus nosaukumus - nosaukuma
			// vārds vai teksts atspoguļo nolūku, kuram šis
			// mainīgais ir paredzēts
			// identifikātors nevar sākties ar ciparu
			//			saturēt atstarpi
			// var saturēt - [A... Za...z][0...9][_]

 printf("birth_year vertība uzreiz pēc piešķiršanas (simbols): %c\n", birth_year);
 printf("birth_year vērtība uzreiz pēc piešķiršanas (dec): %d\n", birth_year);
 printf("birth_year vertiba uzreiz pēc piešķiršanas (hex): %#x\n", birth_year);
 printf("birth_year vertība uzreiz pēc piešķiršanas (oct): %#o\n", birth_year);
 printf("\n");

 int i1, i2 = 0, i3 = 0x13, i4 = 025;
 int modified_birth_year = birth_year >> 4;

 printf("modified_birth_year vertība uzreiz pēc piešķiršanas (simbols): %c\n", modified_birth_year);
 printf("modified_birth_year vērtība uzreiz pēc piešķiršanas (dec): %d\n", modified_birth_year);
 printf("modified_birth_year vertiba uzreiz pēc piešķiršanas (hex): %#x\n", modified_birth_year);
 printf("modified_birth_year vertība uzreiz pēc piešķiršanas (oct): %#o\n", modified_birth_year);
 printf("\n");

 char c = 10, cc = 127; //cc = 128; <- neder jo char max value ir 127
 int i = 4569, ii = 126;
 float f = 3.e-16, ff = 0.2569;
 /*
 3.140000 VS 1078523331
3.2000000 VS 1078774989
 */
 double d = 4.789e39, dd = -13.56;

 printf("c=%d\t\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",c, sizeof(c));
 printf("atrašanās vieta atmiņā - %p)\n", &c);
 printf("i=%d\t\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",i, sizeof(i));
 printf("atrašanās vieta atmiņā - %p)\n", &i);
 printf("f=%.2e\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",f, sizeof(f));
 printf("atrašanās vieta atmiņā - %p)\n", &f);
 printf("d=%.3e\t(piešķirtas atmiņas izmērs baitos - %ld,\n\t\t",d, sizeof(d));
 printf("atrašanās vieta atmiņā - %p)\n", &d);

 int *i_adrese = &i;
 printf("i mainīgā adrese - %p\n", i_adrese);
 int *i_adreses_kopija = i_adrese;
 printf("i adreses kopija - %p\n", i_adreses_kopija);
 printf("i mainīgā vertība, izgūta pielietojot tā adresi - %d\n", *i_adrese);
 printf("i mainīgā vērtība, izgūta pielietojot tā adreses kopiju - %d\n", *i_adreses_kopija);

 int **i_adreses_adrese = &i_adrese;
 printf("i adreses adrese - %p\n", i_adreses_adrese);
 printf("i adreses adreses izmērs baitos - %ld\n", sizeof(i_adreses_adrese));

 printf("/ operācijas pētīšana:\n");
 printf("char/char = ? - ");
 printf("%d / %d = %d (rezultāta izmērs baitos - %ld)\n",cc,c,cc/c,sizeof(cc/c));

 return 0;
}

