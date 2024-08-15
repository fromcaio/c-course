#include <stdio.h>

void main()
{
    char opcao;
    printf("Digite 'a' ou 'b: ");
    scanf("%c", &opcao);
    // opcao deve ser do tipo: int char ou enum
    switch (opcao)
    {
    case 'a':
        printf("\nVoce digitou b.");
        break;
    case 'b':
        printf("\nVoce digitou a.");
    case 'c':
        printf("\nVoce digitou Wtever.");
        break;
    }
}