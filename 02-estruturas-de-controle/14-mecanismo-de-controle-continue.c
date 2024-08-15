#include <stdio.h>

// criar um programa que verifica se o numero é par ou impar, quando ele for positivo
// e que interrompe a execução se o numero digitado for negativo

void main()
{
    int entrada;
    do
    {
        printf("\nDigite um numero inteiro positivo para ser se eh par ou impar\n"
               "ou um numero negativo para sair do programa: ");
        scanf(" %d", &entrada);
        if (entrada == -1)
            break;
        if (entrada < 0)
            continue;
        if (entrada % 2 == 0)
            printf("\n%d eh par\n", entrada);
        else
            printf("\n%d eh impar\n", entrada);
    } while (1);
}