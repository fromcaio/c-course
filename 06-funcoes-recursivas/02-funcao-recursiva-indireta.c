// funcao recursiva direta é aquela que chama a si mesma
// funcao recursiva indireta é aquela que chama outra funcao que chama a funcao original
#include <stdio.h>

void functionA(int n);
void functionB(int n);

void functionA(int n)
{
    if (n > 0)
    {
        printf("A: %d\n", n);
        functionB(n - 1);
    }
}

void functionB(int n)
{
    if (n > 0)
    {
        printf("B: %d\n", n);
        functionA(n - 1);
    }
}

void main()
{
    functionA(20);
}