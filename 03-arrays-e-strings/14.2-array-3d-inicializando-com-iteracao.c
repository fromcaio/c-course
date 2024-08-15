#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Como inicializar um array

void main()
{
    int array[2][4][10];
    for (int x = 0; x < 2; x++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                array[x][i][j] = 1;
            }
        }
    }
    for (int x = 0; x < 2; x++)
    {
        for (int i = 0; i < 4; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                printf("valor na posicao [%i][%i][%i]: %i\n", x, i, j, array[x][i][j]);
            }
        }
    }
}