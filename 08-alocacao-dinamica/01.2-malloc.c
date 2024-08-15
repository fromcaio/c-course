#include <stdio.h>
#include <stdlib.h>

void main()
{
    int qtd;

    printf("Quantos numeros deseja digitar: ");
    scanf("%d", &qtd);

    float *array = (float *)malloc(qtd * sizeof(float));

    for (int i = 0; i < qtd; i++)
    {
        printf("Digite o %do numero: ", i + 1);
        scanf("%f", array + i);
        // scanf("%f", &array[i]);
    }
}