#include <stdio.h>
void imprimeLinhaTracejada(int tam)
{
    for (int i = 0; i < tam; i++)
        printf("-");
}
void main()
{
    imprimeLinhaTracejada(20);
}