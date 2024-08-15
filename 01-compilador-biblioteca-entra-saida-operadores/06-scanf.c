#include<stdio.h>

void main(){
    int idade;
    float altura;
    char letra_favorita;

    printf("Qual a sua idade?\n");
    scanf(" %i",&idade);
    printf("Qual a sua altura?\n");
    scanf(" %f",&altura);
    printf("E qual a sua letra favorita?\n");
    scanf(" %c",&letra_favorita);

    printf("A sua idade eh: %i\n"\
    "A sua altura eh: %f\n"\
    "A sua letra favorita eh: %c\n"\
    ,idade, altura, letra_favorita);
}