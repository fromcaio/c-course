#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void frac(float num, int *inteiro, float *fracao){
    //basta truncar
    *inteiro = (int)num;
    //para achar a fracao vamos subtrair o numero real - a parte inteira
    *fracao = num - *inteiro;
}

void main(){
    srand(time(NULL));

    float min = 1.0;
    float max = 10.0;

    float random_float = min + (rand() / (RAND_MAX / (max - min)));
    int inteiro;
    float fracao;

    printf("Numero aleatorio: %f\n", random_float);
    frac(random_float, &inteiro, &fracao);

    printf("Parte inteira: %d\n", inteiro);
    printf("Parte fracionaria: %f\n", fracao);
}