#include <stdio.h>

// verifica se um numero digitado eh impar ou par
// e pergunta ao usuario se gostaria de digitar mais um numero

void main()
{
    int entrada, verifica;
    do
    {
        printf("\nDigite um numero inteiro: \n");
        scanf(" %d", &entrada);
        if (entrada % 2 == 0)
            printf("O numero eh par\n");
        else
            printf("O numero eh impar\n");
        printf("\nGostaria de digitar um novo numero?\n"
               "1 = Inserir novo numero\n"
               "-1 = Encerrar programa\n");
        scanf(" %d", &verifica);
    } while (verifica != -1);
}