#include <stdio.h>

// Quando o tipo de um parâmetro é um array com duas ou mais dimensões, é preciso incluir
//  o tamanho de cada dimensão a partir da segunda

int somaElementos(int v[][3], int TAM)
{
    int soma = 0;
    for (int i = 0; i < TAM; i++)
        for (int j = 0; j < 3; j++)
            soma += v[i][j];
    return soma;
}

void main()
{
    int ns[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("\nSoma: %i\n", somaElementos(ns, 3));
}