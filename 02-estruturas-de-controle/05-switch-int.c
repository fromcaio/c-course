#include <stdio.h>

void main()
{
    int opcao;
    printf("Digite 1 ou 2: ");
    scanf("%d", &opcao);
    // opcao deve ser do tipo: int char ou enum
    switch (opcao)
    {
    case 1:
        printf("\nVoce digitou 1.");
        break;
    case 2:
        printf("\nVoce digitou 2.");
    case 3:
        printf("\nVoce digitou 3.");
        break;
    }
}