#include <stdio.h>

void main()
{
    int x;
    printf("Digite um numero: ");
    scanf("%i", &x);
    if (x > 0)
        if (x % 2 == 0)
            printf("%d eh par.\n", x);
        else
            printf("%d eh impar.\n", x);
}

// if (condicao) sentença;
// if (condicao) sentença else sentença;