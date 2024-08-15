#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Como inicializar um array

void main()
{
    int array[10][10];
    // Quando quisermos entrar em todas as posicoes de um array bi dimensional
    // int m[LINHAS][COLUNAS]
    // o tamanho de i vai ser igual ao numero de linhas
    // e o tamanho de j vai ser igual ao numero de colunas
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%i", array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            array[i][j] = 0;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            printf("%i", array[i][j]);
        }
    }
}