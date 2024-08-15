#include <stdio.h>
#include <stdlib.h>

void main()
{
    int *y, *x = (int *)malloc(sizeof(int));
    y = x;

    printf("\nx: %x", x);
    printf("\ny: %x", y);

    *x = 5;
    printf("\n%d\n", *x);

    free(x);
    // x = 0;
    // y = 0; pois y tem o mesmo endereço de x

    printf("\nDEPOIS DO FREE\n", x);
    printf("\nx: %x", x);
    printf("\ny: %x", y);

    *y = 10;
    printf("\n%d\n", *x);
    // tentar realizar as liberações no final do seu programa, ou da sua função
}