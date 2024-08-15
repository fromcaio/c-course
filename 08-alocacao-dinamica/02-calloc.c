#include <stdio.h>
#include <stdlib.h>

void main()
{
    int qtd;
    float media = 0;

    printf("Quantos numeros deseja digitar: ");
    scanf("%d", &qtd);

    float *array = (float *)calloc(qtd, sizeof(float));

    for (int i = 0; i < qtd; i++)
    {
        printf("Digite o %do numero: ", i + 1);
        scanf("%f", &array[i]);
        media += array[i];
    }

    printf("Media: %f", media / qtd);
}