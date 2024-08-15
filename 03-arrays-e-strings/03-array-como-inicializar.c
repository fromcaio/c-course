#include <stdio.h>

void main()
{
    // // maneira 1
    // int a[4];
    // a[0] = 1;
    // a[1] = 4;
    // a[2] = 9;
    // a[3] = 16;

    // //maneira 2
    // int a[] = {1, 4, 9, 16};

    // maneira 3
    int a[4];
    for (int i = 1; i <= 4; i++)
    {
        a[i - 1] = i * i;
    }

    // imprimir
    for (int i = 0; i < 4; i++)
    {
        printf("Array posicao %d valor: %d\n", i, a[i]);
    }
}