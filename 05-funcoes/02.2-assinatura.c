#include <stdio.h>

void main(void);
void imprimeImpar(int);
void imprimePar(int);

void main()
{
    imprimeImpar(4);
    imprimePar(3);
}
void imprimeImpar(int x)
{
    if (x % 2 == 0)
        imprimePar(x);
    else
        printf("\n %d eh impar.\n", x);
}
void imprimePar(int x)
{
    if (x % 2 != 0)
        imprimeImpar(x);
    else
        printf("\n %d eh par.\n", x);
}