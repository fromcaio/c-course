#include<stdio.h>

void main(){
    //operadores aritmeticos
    int a = 1, b = -2, c = 3;
    //positivo
    printf("positivo 1 eh: %i\n",+a);
    printf("positivo (-2) eh:%i\n",+b);
    //negativo
    printf("negativo (1) eh: %i\n",-a);
    printf("negativo (-2) eh: %i\n",-b);
    //adicao
    printf("adicao 1 + (-2) = %i\n",a + b);
    //subtração
    printf("subtracao 1 - (-2) = %i\n",a - b);
    //divisão
    printf("divisao de -2/1 = %i\n",b/a);
    //multiplicação
    printf("multiplicacao de 2*5 = %i\n",2*5);
    //modulo c / 2 -> resto desta divisão
    printf("modulo de 3%%2 = %i",c%2);
}