#include <stdio.h>

typedef int inteiro;

void main()
{
    inteiro a, b;
    printf("Digite dois inteiros: ");
    scanf("%d %d", &a, &b);
    inteiro s = a + b;
    printf("Soma: %d\n", s);
}