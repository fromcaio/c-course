#include <stdio.h>
#include <stdlib.h>

void main()
{
    int i, j, linhas = 3, colunas = 2;
    int **p; // cada asterisco equivale à uma dimensão
    p = (int **)malloc(linhas * sizeof(int *));
    for (i = 0; i < linhas; i++)
    {
        p[i] = (int *)malloc(colunas * sizeof(int));
        // atribuindo valores
        for (j = 0; j < colunas; j++)
            p[i][j] = i + j;
    }
    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
            printf(" %d ", p[i][j]);
        printf("\n");
    }
    for (i = 0; i < colunas; i++)
        free(p[i]);
    free(p);
}