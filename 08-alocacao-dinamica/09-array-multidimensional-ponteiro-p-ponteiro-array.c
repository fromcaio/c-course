#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, linhas = 3, colunas = 2;
    int *a = (int *)malloc(linhas * colunas * sizeof(int));
    int **m = (int **)malloc(linhas * sizeof(int *));

    for (i = 0; i < linhas; i++)
    {
        m[i] = a + i * colunas;
        for (j = 0; j < colunas; j++)
        {
            m[i][j] = i + j;
        }
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf(" %d ", m[i][j]);
        }
        printf("\n");
    }

    free(a);
    free(m);
}