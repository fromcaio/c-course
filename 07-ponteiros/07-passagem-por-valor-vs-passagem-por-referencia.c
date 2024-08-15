#include <stdio.h>

// passagem por valor vs passagem por referencia

void funcaoDobra(int *pa)
{
    *pa = *pa * 2;
    printf("funcao dobra a: %d\n", *pa);
}

void main()
{
    int a = 1000;
    funcaoDobra(&a);
    printf("main a: %d\n", a);
}