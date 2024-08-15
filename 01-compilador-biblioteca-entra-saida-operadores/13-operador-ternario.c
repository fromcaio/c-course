#include <stdio.h>

void main()
{
    int x, y, maior;
    printf("Digite dois numeros inteiros: ");
    scanf(" %d %d", &x, &y);
    maior = x > y ? x : y;
    // if (x > y)
    //     maior = x;
    // else
    //     maior = y;
    printf("Maior: %d", maior);
}