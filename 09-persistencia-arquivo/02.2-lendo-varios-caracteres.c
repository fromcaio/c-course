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

    char c;

    while ((c = fgetc(arq)) != EOF)
    // while(!feof(arq))
    {
        printf("Caractere lido: %c\n", c);
        // printf("Caractere lido: %c\n", fgetc(arq));
    }

    fclose(arq);
}