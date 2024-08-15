#include <stdio.h>
#define qt 10

void main()
{
    float array[qt];
    float media = 0;
    for (int i = 0; i < qt; i++)
    {
        printf("\nDigite um numero que vai ser armazenado na posicao %d: \n", i);
        scanf(" %f", &array[qt]);
        media += array[qt];
        // media = media + array[i];
    }
    media = media / qt;
    printf("\nMedia: %f\n", media);
}