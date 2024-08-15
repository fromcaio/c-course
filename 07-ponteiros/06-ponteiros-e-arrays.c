#include <stdio.h>
// O que é um array?
// Na linguagem C, um array nada mais é do que um ponteiro
// para o primeiro valor de um conjunto de variaveis sem nome
// variaveis do mesmo tipo, e armazenadas em sequencia
// na memoria

// o operador [] é a junção de duas operações:
// 1. a soma de um ponteiro com um inteiro.
// 2. o desreferenciamento do resultado dessa soma.

void main()
{
    int a[3];
    printf("Endereco inicial: %x\n", a);
    a[0] = 10;
    a[1] = 10;
    a[2] = 10;

    printf("%d %d %d\n", a[0], a[1], a[2]);

    *(a + 0) = 20;
    *(a + 1) = 20;
    *(a + 2) = 20;

    printf("%d %d %d\n", a[0], a[1], a[2]);
}