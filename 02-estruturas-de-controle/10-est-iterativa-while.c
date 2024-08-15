#include <stdio.h>

void main()
{
    int i = 0;
    int entrada = 1;
    while (entrada != 0)
    {
        printf("O valor de i eh: %d\n", i);
        i++;
        printf("Voce gostaria de sair do programa?\n"
               "0 - Finalizar programa\n"
               "1 - Continuar programa\n");
        scanf(" %d", &entrada);
    }
}