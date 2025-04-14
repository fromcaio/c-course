#include <stdio.h>
#include <stdlib.h>

// Modos de abertura de arquivo
// r - Abre o arquivo para leitura. O arquivo deve existir.
// w - Abre o arquivo para escrita. Se o arquivo não existir, ele será criado. Se o arquivo existir, ele será sobrescrito.
// a - Abre o arquivo para escrita. Se o arquivo não existir, ele será criado. Se o arquivo existir, ele será mantido e os dados serão adicionados ao final.
// r+ - Abre o arquivo para leitura e escrita. O arquivo deve existir.
// w+ - Abre o arquivo para leitura e escrita. Se o arquivo não existir, ele será criado. Se o arquivo existir, ele será sobrescrito.
// a+ - Abre o arquivo para leitura e escrita. Se o arquivo não existir, ele será criado. Se o arquivo existir, ele será mantido e os dados serão adicionados ao final.

// Se adicionar b ao modo, abre o arquivo em modo binário

void main()
{
    // FILE *fopen(const char *CAMINHO_ARQUIVO, const char *MODO);
    FILE *arq = fopen("arquivo.txt", "r");

    // Caso o arquivo não exista, fopen() retorna NULL
    if (arq == NULL)
    {
        printf("Erro ao abrir o arquivo\n");
        // Encerra o programa
        exit(1);
    }

    // Liberando o arquivo da memória
    fclose(arq);
}