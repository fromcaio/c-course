#include <stdio.h>

/*Como em C não existe um tipo booleano (verdadeiro/falso), a condição do comando if
considera que 0 (zero) é falso e qualquer coisa diferente disso é verdadeiro.
Lembre-se que os operadores relacionais (>, >=, <, <=, ==, !=) e os booleanos (&&, ||, !)
resultam em 1 (verdadeiro) ou 0 (falso);
Operadores aritméticos (+, -, *, /, %) resultam no valor da operação;
Operadores de atribuição (=, ++, --, operação=) retornam o valor atribuído.*/

void main()
{
    int x;
    printf("Digite um inteiro: ");
    scanf(" %d", &x);
    if (x % 2 == 0)
    {
        printf("%d eh par.\n", x);
    }
}