#include <stdio.h>
#include <stdlib.h>

void main()
{
    char string[] = "Conheci o Caio em 2025, nas antigas";

    FILE *arq = fopen("arquivos/arquivo.txt", "w");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    fputs(string, arq);

    fclose(arq);
}