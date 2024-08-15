#include <stdio.h>

// Ao acessar conteudo do endereco NULL o programa interrompe
// Ao acessar conteudo que não deveriamos
// 1. O programa pode acessar (endereço de memoria valido, sorte ou azar?)
// 2. O programa pode interromper, informando erro ou não

void main()
{
    int a;
    int *pa = &a;

    for (int i = 0; i < 1000; i++)
    {
        printf("INDICE I: %d\n", i);
        printf("Endereço salvo em pa: %x\n", pa);
        *pa = 10;
        printf("Conteudo do endereco salvo em pa: %d\n", *pa);
        pa = pa - 2000;
    }
}