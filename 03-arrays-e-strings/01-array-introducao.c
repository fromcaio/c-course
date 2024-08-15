#include <stdio.h>

// calculando a media de 3 numeros sem o uso de array

void main()
{
    // tamanho do array (3) * tamanho do tipo de dado (float)
    // quando reservamos 3 espaços, o primeiro é acessado pelo incide 0
    // o segundo pelo indice 1 e o terceiro pelo indice 2
    // OBSERVE QUE O INDICE 3 NÃO EXISTE
    float n[3];
    printf("Digite 3 numeros: ");
    scanf(" %f %f %f", &n[0], &n[1], &n[2]);
    float media = (n[0] + n[1] + n[2]) / 3;
    printf("A media dos numeros eh: %.2f\n", media);
}