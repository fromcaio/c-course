#include <stdio.h>

// array, sequencia de variaveis (tamanho definido)
// string, sequencia de variaveis do tipo char (tamanho definido)
// vetor, sequencia de variaveis sem tamanho definido

void main()
{
    // possiveis maneiras de inicializar uma string;
    // maneira 1
    char str[10];
    str[0] = 'O';
    str[1] = 'i';
    str[2] = '!';
    str[3] = '\0';

    // maneira 2
    char str2[] = {'O', 'i', '!', '\0'};

    // maneira 3
    char str3[] = "Oi!";
}