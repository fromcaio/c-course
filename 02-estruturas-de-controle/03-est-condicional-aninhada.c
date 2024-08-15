#include <stdio.h>

/* Esse formado deixa a impressão de que todos os if e
else compõem uma única estrutura, como se todos esses comandos
estivessem no mesmo nível. Mas, na verdade, o segundo if else
é subordinado ao primeiro else. */

void main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%i", &x);
    if (x < 0)
        printf("%i eh negativo!", x);
    else if (x == 0)
        printf("%i eh zero!", x);
    else
        printf("%i eh positivo!", x);
}

// if (condicao) sentença;
// if (condicao) sentença else sentença;