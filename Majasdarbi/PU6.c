#include <stdio.h>
void bez_argumentiem_bez_return();
void ar_argumentiem_bez_return(int x, int y);
int bez_argumentiem_ar_return();
int ar_argumentiem_ar_return(int x, int y);

int main() {
    int a = 4;
    int b = 5;
    
    bez_argumentiem_bez_return();
    ar_argumentiem_bez_return(a, b);
    printf("Funkcija bez argumentiem, bet ar atgriešanas vērtību var atgriezt return vērtību: %d\n", bez_argumentiem_ar_return());
    printf("Funkcija ar argumentiem un ar atgriešanas vērtību var atgriezt return vērtību, kura ir ietekmēta no mainīgo vērtībām: %d\n", ar_argumentiem_ar_return(a, b));
    return 0;
}

void bez_argumentiem_bez_return(){
    printf("Funkcija bez argumentiem un bez atgriešanas vērtības var ietekmēt tikai konsoli.\n");
}
void ar_argumentiem_bez_return(int x, int y){
    printf("Funkcija ar argumentiem, bet bez atgriešanas vērtības var atgriezt argumentu vērtības konsolē: %d, %d\n", x, y);
}
int bez_argumentiem_ar_return(){
    return 42;
}
int ar_argumentiem_ar_return(int x, int y){
    return x + y;
}
