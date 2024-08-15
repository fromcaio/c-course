#include <stdio.h>

int fatorial_iterativo(int n)
{
    int f = 1;
    for (int i = n; i > 1; i--)
    {
        f = f * i;
    }
    return f;
}
// funcao recursiva direta
int fatorial_recursivo(int n)
{
    if (n < 1)
        return 1;
    return n * fatorial_recursivo(n - 1);
}

// iteração vai ser mais rapida, vai utilizar menos memoria
// vamos tentar praticar recursao, para entender melhor
// soluções de problemas mais complexos que veremos no futuro

void main()
{
    printf("Fatorial de 5: %d\n",
           fatorial_recursivo(5));
}