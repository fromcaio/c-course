#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, linhas = 3, colunas = 2;
    int *p = (int *)malloc(linhas * colunas * sizeof(int));

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            p[i * colunas + j] = i + j;
        }
    }

    for (i = 0; i < linhas; i++)
    {
        for (j = 0; j < colunas; j++)
        {
            printf(" %d ", p[i * colunas + j]);
        }
        printf("\n");
    }

    free(p);

    return 0;
}