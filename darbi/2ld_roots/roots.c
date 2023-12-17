#include <stdio.h>
#include <math.h>

float funckija(double x){
    return cos(x/2)*cos(x/2);
}
int main(){
    double a, b; //sakņu noteikšanas intervāls
    double A = 2; //y ass nobīde
    double funkca, funkcb; //funckiju vērtības nodalījumu galapunktos
    int k = 0; 
    double x, delta_x; 

    printf("Shajaa programmaa tiks mekleetas funckijas cos(x/2)*cos(x/2)-A saknes, juusu izveeleetajaa intervaalaa. \n");
    printf("Shii programma ir defineeta pie visām reaalaam x veertiibaam,\n\tturpretii y veertiiba ir defineta pie intervaala [0;1].\n");
    printf("Luudzu izveeleeties nobiides veertiibu(A) intervaalaa [0;1] vai arii nebuus nevienas saknes.\n\n");
    printf("Luudzu ievadiit izveleto intervaalu. Pirmo mazaako, otro lielaako: ");
    scanf(" %lf", &a);
    scanf(" %lf", &b);
    printf("Luudzu ievadiit izveleto funckijas nobīdi [0;1] robezhaas: ");
    while(A < 0 || A > 1){
        scanf(" %lf", &A);
        if(A < 0 || A > 1){
            printf("Luudzu izveelaties nobiidi intervaalaa [0;1]: ");
        }
    }
    printf("Luudzu ievadiit izveleto rezultaata kluudu - delta x: ");
    scanf(" %lf", &delta_x);
    funkca = cos(a/2)*cos(a/2) - A;
    funkcb = cos(b/2)*cos(b/2) - A;    
    if(funkca*funkcb>0){
        printf("Inervaalaa [%.2lf;%.2lf] cos(x/2)*cos(x/2)-%.2lf funkcijai ", a, b, A);
        printf("saknju nav (vai tajaa ir paara saknju skaits)\n");
        printf("Funckijas veertiibu reizinaajums noraadiitaa intervaala taalaakajos punktos ir %lf.\n", funkca*funkcb);
        printf("Taa kaa reizinājums ir pozitiivs, tiek pieraadiits, ka abas funckijas atrodas vienaa X ass pusee \n");
        printf("vai arii sakne nekad neshkerso asi (tikai pieskaras).");
        return 1;
    }while((b-a)>delta_x){
        k++;
        x = (a + b) / 2;
        funkca = cos(a/2) * cos(a/2) - A;
        funkcb = cos(x/2) * cos(x/2) - A;

        if (funkca * funkcb > 0) {
            a = x;
        } else {
            b = x;
        }
        //shiis rindiņas var aktevizēt, lai redzētu programmas detalizeetu darbību un iterāciju izmainas
        //printf("%2d. iteracija: cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\t", k, a, a, cos(a/2) * cos(a/2));
        //printf("cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\t", x, x, cos(x/2) * cos(x/2));
        //printf("cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\n", b, b, cos(b/2) * cos(b/2));
    }
    printf("Sakne atrodas pie x = %.3lf, jo cos(%.3lf/2)*cos(%.3lf/2)-%.2lf ir %.3lf\n", x, x, x, A, (cos(x/2)*cos(x/2))-A);
    printf("Shis saknes aprekinasanai, pie precizitaates %lf, tika veiktas %d. iteraacijas.", delta_x, k);
    return 0;
}