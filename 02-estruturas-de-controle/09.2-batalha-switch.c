#include <stdio.h>

void main()
{
    int d;
    printf("Digite um dia da semana (0 a 6): ");
    scanf("%i", &d);
    switch (d)
    {
    case 0:
        printf("Domingo, dia de descansar!\n");
        break;
    case 1:
        printf("Segunda\n");
        break;
    case 2:
        printf("Terça\n");
        break;
    case 3:
        printf("Quarta\n");
        break;
    case 4:
        printf("Quinta\n");
        break;
    case 5:
        printf("Sexta\n");
        break;
    case 6:
        printf("Sábado\n");
        break;
    default:
        printf("Dia inválido\n");
    }
}