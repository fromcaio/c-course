#include <stdio.h>
#include <stdlib.h>

int calculaFatorial(int);

void main()
{
    int resultado;
    resultado = calculaFatorial(5);
    printf("Resultado de !%i = %i\n", 5, resultado);
}

int calculaFatorial(int n)
{
    int fat = 1;
    for (int i = n; i > 1; i--)
    {
        fat = fat * i;
    }
    return fat;
}