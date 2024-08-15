void main()
{
    int x, resp;
    printf("Digite um int > 1: ");
    scanf("%d", &x);
    printf("%d eh primo? %s.\n", x,
           primo(x) ? "Sim" : "Nao");
}

#include <stdio.h>
int primo(int n)
{
    for (int d = 2; d <= n / 2; d++)
        if (n % d == 0)
            return 0; // n não é primo
    return 1;         // n é primo
}