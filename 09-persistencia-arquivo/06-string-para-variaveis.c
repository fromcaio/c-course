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

    int x;
    double y;
    char outra[6], texto[5];

    // fscanf() recebe os seguintes parametros
    // 1 - o ponteiro para o arquivo
    // 2 - o formato dos dados que serao lidos
    // 3 - os ponteiros para as variaveis que receberao os dados
    fscanf(arq, "%s %d", texto, &x);
    printf("Conteudo lido: %s %d\n", texto, &x);
    fscanf(arq, "%s %lf", texto, &y);
    printf("Conteudo lido: %s %lf\n", texto, &y);
    fscanf(arq, "%s %s", texto, outra);
    printf("Conteudo lido: %s %s\n", texto, outra);

    fclose(arq);
}