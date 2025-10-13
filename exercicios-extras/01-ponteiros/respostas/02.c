#include<stdio.h>

void main (){
    int var1, var2;

    // a memoria eh endereçada na base 16
    printf("end var1: %x\n", &var1);
    printf("end var2: %x\n", &var2);

    if (&var1 > &var2){
        printf("O maior endereco eh: %x\n", &var1);
    } else {
        printf("O maior endereco eh: %x\n", &var2);
    }
}