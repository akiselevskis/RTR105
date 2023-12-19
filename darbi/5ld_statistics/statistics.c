#include <stdio.h> //Use malloc for the sentence
int main(){
    char teikums[1000];
    scanf("%[^\n]s", teikums);
    //teikums[0] = 't';
    //printf("%c", teikums[0]);
    printf("%s", teikums);
    return 0;
}