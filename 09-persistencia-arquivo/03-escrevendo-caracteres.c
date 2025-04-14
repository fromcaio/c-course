#include <stdio.h>
#include <stdlib.h>

void main()
{

    FILE *arq = fopen("arquivos/arquivo.txt", "w");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    char string[100];

    // gets aceita espaços
    // mas para com o primeiro \n
    printf("Digite uma string: ");
    gets(string);

    for (int i = 0; string[i] != '\0'; i++)
    {
        fputc(string[i], arq);
    }

    fclose(arq);
}