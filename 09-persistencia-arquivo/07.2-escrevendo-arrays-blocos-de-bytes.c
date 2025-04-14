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

    double b[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    // os parametros que a funcao fwrite recebe sao:
    // 1 - o ponteiro para o dado que sera escrito
    // 2 - o tamanho do dado
    // 3 - a quantidade de dados
    // 4 - o ponteiro para o arquivo
    fwrite(b, sizeof(double), 5, arq);

    fclose(arq);
}