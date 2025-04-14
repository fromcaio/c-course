#include <stdio.h>
#include <stdlib.h>

void main()
{
    // O caminho do arquivo é relativo ao diretório do executável
    // ex: se o executavel esta em fromcaio-c/09-persistencia-arquivo
    // o arquivo.txt deve estar em fromcaio-c/09-persistencia-arquivo
    // Podemos também utilizar o caminho absoluto do arquivo
    // ex: C:/home/caio/Documentos/arquivo.txt

    FILE *arq = fopen("arquivo/arquivo.txt", "w");

    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        exit(1);
    }

    // escrevendo um caractere no arquivo
    // veremos melhor logo em seguida
    fputc('a', arq);

    fclose(arq);
}