#include<stdio.h>

void main (){

    // cria duas variaveis i e j
    int i = 34 , j ;
    // cria um ponteiro p
    int * p ;

    // p aponta para i
    p = & i ;

    // i é incrementado e vira 35
    (* p )++;

    // 35 + 33 = 68 
    // 68 é atribuido a j
    j = * p + 33;

    // o valor das variaveis ao final da execução serão
    // i = 35
    // j = 68
    // p = endereço de i
}