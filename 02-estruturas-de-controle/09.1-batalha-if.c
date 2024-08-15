#include <stdio.h>

void main()
{
    // como saber se posso transformar minha sequencia de ifs em um switch?
    int d;
    printf("Digite um dia da semana (0 a 6): ");
    scanf("%i", &d);
    // verifico se a variavel que esta sendo utilizanda é do tipo int ou char
    // se for de um dos tipos, verifico se os ifs estão utilizando o operador
    // de equivalencia ==, se varios deles estiverem, posso refatorar meu codigo
    // pra utilizar o comando switch
    if (d == 0)
        printf("Domingo, dia de descansar!\n");
    if (d == 1)
        printf("Segunda\n");
    if (d == 2)
        printf("Terça\n");
    if (d == 3)
        printf("Quarta\n");
    if (d == 4)
        printf("Quinta\n");
    if (d == 5)
        printf("Sexta\n");
    if (d == 6)
        printf("Sábado\n");
    if (d < 0 || d > 6)
        printf("Dia inválido\n");
}