#include <stdio.h>
int function(int a, int b);
int main(){
 int a = 3;
 int b = 4;
 int rez = function(a, b);
 printf("%d\n", rez);
 return 0;
}
int function(int a, int b){
 int result;
 result = a + b;
 return result;
}
