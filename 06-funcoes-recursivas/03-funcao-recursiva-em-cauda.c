// funcao recursiva em cauda
//  a funcao recursiva em cauda é aquela que a chamada recursiva é a ultima instrucao

// int fun(int n) {
//     if (n == 0)
//         return 1;
//     return fun(n - 1);}

#include <stdio.h>
// funcao recursiva direta
int fatorialAux(int n, int acumulador)
{
    if (n < 1)
        return acumulador;
    return fatorialAux(n - 1, n * acumulador);
}

int fatorial(int n)
{
    return fatorialAux(n - 1, 1);
}

void main()
{
    printf("Fatorial de 5: %d\n",
           fatorial(5));
}