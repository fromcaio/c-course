#include<stdio.h>

void main(){
    int a = 5, b = 5, c = 5, d = 5;

    // pre incremento
    //a = a + 1
    printf("Pre-incremento %d \n", ++a);

    // pos incremento
    printf("Pos-incremento %d \n", b++);
    //a = a + 1

    // pre decremento
    // c = c - 1
    printf("Pre-incremento %d \n", --c);

    // pos decremento
    printf("Pos-incremento %d \n", d--);
    // c = c - 1

    printf("Valores finais %i %i %i %i",a,b,c,d);
}