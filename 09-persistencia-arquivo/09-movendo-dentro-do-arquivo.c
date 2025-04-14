#include <stdio.h>
#include <stdlib.h>

// SEEK_SET - inicio do arquivo
// SEEK_CUR - posicao atual do arquivo
// SEEK_END - final do arquivo

void main()
{

    FILE *arq = fopen("arquivos/arquivo.txt", "w+");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    int a = 2, b = 5;
    fprintf(arq, "A: %d\nB: %d", a, b);

    // fseek recebe como parametros
    // 1 - o ponteiro para o arquivo
    // 2 - a quantidade de bytes que queremos mover
    // 3 - a partir de onde queremos mover
    fseek(arq, 0, SEEK_SET);

    int x, y;
    char t1[5], t2[5];
    // fscanf trata espaços, tabulações e quebras de linha simplesmente como separadores
    fscanf(arq, "%s %d %s %d", t1, &x, t2, &y);
    printf("\n%s %d %s %d\n\n", t1, x, t2, y);

    fclose(arq);
}