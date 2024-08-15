#include <stdio.h>

// int somaElementos(int *v, int tam)
int somaElementos(int v[], int tam)
{
    int soma = 0;
    while (--tam >= 0)
        soma += v[tam];
    return soma;
}

void main()
{
    int numeros[5] = {1, 2, 3, 4, 5};
    printf("\nSoma: %s\n", somaElementos(numeros, 5));
}