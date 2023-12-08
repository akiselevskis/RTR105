#include <stdio.h>         //Vajag dinamiskus masīvus un malloc?
#include <math.h>

float funckija(double x){
    return cos(x/2)*cos(x/2);
}
int main(){
    //double x, y;
    double a, b;
    double A; //y ass nobīde
    double funkca, funkcb;
    int k = 0;
    double x, delta_x;

    printf("Luudzu ievadiit izveleto intervaalu. Pirmo mazaako, otro lielaako: ");
    scanf(" %lf", &a);
    scanf(" %lf", &b);
    printf("Luudzu ievadiit izveleto funckijas nobīdi (pzoitiivs skaitlis nobiidiis funckiju uz leju, bet negatiivs uz augshu: ");
    scanf(" %lf", &A);
    printf("Luudzu ievadiit izveleto rezultaata kluudu - delta x: ");
    scanf(" %lf", &delta_x);
    funkca = cos(a/2)*cos(a/2) - A;
    funkcb = cos(b/2)*cos(b/2) - A;    
    if(funkca*funkcb>0){
        printf("Inervālā [%.2lf;%.2lf] cos(x/2)*cos(x/2) funkcijai ", a, b);
        printf("Sakņu nav (vai tajā ir pāra sakņu skaits)\n");
        printf("Proof: %lf\n", funkca*funkcb);
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
    
        printf("%2d. iteracija: cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\t", k, a, a, cos(a/2) * cos(a/2));
        printf("cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\t", x, x, cos(x/2) * cos(x/2));
        printf("cos(%7.3lf/2)*cos(%7.3lf/2)=%7.3lf\n", b, b, cos(b/2) * cos(b/2));
    }
    printf("Sakne atrodas pie x = %.3lf, jo cos(x/2)*cos(x/2) ir %.3lf\n", x, cos(x/2)*cos(x/2));
    printf("Shis saknes aprekinasanai tika veiktas %2d. iteraacijas.", k);

    //y = funckija(x);
    //printf("%lf\n", y);

    //printf("Te ir nepaara skaits saknju!!!\n");
    return 0;
}