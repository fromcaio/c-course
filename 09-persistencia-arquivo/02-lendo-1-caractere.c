#include <stdio.h>
#include <stdlib.h>

void main()
{

    FILE *arq = fopen("arquivos/arquivo.txt", "r");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    // lendo caracteres de um arquivo
    // o retorno é um inteiro
    // mas inteiros são representações de caracteres
    char c = fgetc(arq);

    printf("Caractere lido: %c\n", c);

    fclose(arq);
}