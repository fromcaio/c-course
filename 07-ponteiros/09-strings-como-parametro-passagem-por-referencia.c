#include <stdio.h>

// poderiamos ter como cabeçalho da funcao o codigo abaixo
// sem alterar seu funcionamento
// int tamanho(char *str)
int tamanho(char str[])
{
    int tam = 0;
    while (str[tam] != '\0')
        tam++;
    return tam;
}
void main()
{
    char nm[50] = "MATHEUS VIANA";
    printf("\n%s possui %d caracteres.\n", nm, tamanho(nm));
}