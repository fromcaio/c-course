#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *arq = fopen("arquivos/arquivo.txt", "w+b");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    int x;
    double y;
    char string[6];

    // fread() recebe os seguintes parametros
    // 1 - o ponteiro para a variavel que recebera o dado
    // 2 - o tamanho do dado
    // 3 - a quantidade de dados
    // 4 - o ponteiro para o arquivo
    fread(&x, sizeof(int), 1, arq);
    fread(&y, sizeof(double), 1, arq);
    fread(string, sizeof(char), 6, arq);

    printf("Conteudo lido: %d, %lf, %s\n", x, y, string);

    fclose(arq);
}