#include<stdio.h>

void main(){
    // operador relacional retorna verdadeiro ou falso
    int relacional = 1 == 1;
    // operador de negação inverte verdeiro e falso
    int a = !relacional;
    // realizando a impressão
    printf("!a ou !verdadeiro = %i\n", a);
    printf("!a ou !verdadeiro = %i\n", !(1 == 2));

    //operador E
    // // operadores relacionais que retornam verdadeiro ou falso
    int relacional2 = (5 > 3);
    int relacional3 = (5 > 4);
    printf("5 > 3? %i\n", relacional2);
    printf("5 > 4? %i\n", relacional3);

    int comparacao_e = relacional2 && relacional3;
    printf("%i E %i = %i\n", relacional2, relacional3, comparacao_e);
    printf("1 E 0 = %i\n", (5 > 3) && (5 > 7));

    //operador OU
    int comparacao_ou = (5 > 8) || (5 > 7);
    printf("5 > 8 OU 5 > 7: %i\n", comparacao_ou);
    printf("5 > 8 OU 5 > 4: %i", (5 > 8) || (5 > 4));
}