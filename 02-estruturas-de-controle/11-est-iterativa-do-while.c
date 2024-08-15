#include <stdio.h>

void main()
{
    int i = 0;
    int entrada;
    do
    {
        printf("O valor de i eh: %d\n", i);
        i++;
        printf("Voce gostaria de sair do programa?\n"
               "0 - Finalizar programa\n"
               "1 - Continuar programa\n");
        scanf(" %d", &entrada);
    } while (entrada);
    // o comando do while precisa de ponto e virgula ;
    // qualquer valor diferente de 0 é verdadeiro
}