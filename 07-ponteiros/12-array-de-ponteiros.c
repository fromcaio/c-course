#include <stdio.h>

void main()
{
    int x = 5;
    int y[2] = {20, 30};

    int *p[2];
    // A posicao zero do array de ponteiros aponta para x
    // A posicao 1 aponta para o inicio do array y
    p[0] = &x;
    p[1] = y;
    printf("\np[0]: %x\n", p[0]);
    printf("\np[1]: %x\n", p[1]);
    printf("\n*p[0]: %i\n", *p[0]);
    printf("\n*p[1]: %i\n", *p[1]);

    printf("\n*p[1] + 0: %i\n", *(p[1] + 0));
    printf("\n*p[1] + 1: %i\n", *(p[1] + 1));

    printf("\np[1][0]: %i\n", p[1][0]);
    printf("\np[1][1]: %i\n", p[1][1]);
}