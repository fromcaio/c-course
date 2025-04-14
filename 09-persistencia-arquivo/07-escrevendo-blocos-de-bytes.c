#include <stdio.h>
#include <stdlib.h>

void main()
{
    FILE *arq = fopen("arquivos/arquivo.txt", "wb");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    int a = 2;
    double b = 11.656;
    char str[6] = "hello";

    // os parametros que a funcao fwrite recebe sao:
    // 1 - o ponteiro para a variavel que queremos escrever no arquivo
    // pode ser um vetor, uma estrutura ou uma variavel simples
    // 2 - o tamanho do dado
    // 3 - a quantidade de dados
    // 4 - o ponteiro para o arquivo
    fwrite(&a, sizeof(int), 1, arq);
    fwrite(&b, sizeof(double), 1, arq);
    fwrite(str, sizeof(char), 6, arq);

    fclose(arq);
}