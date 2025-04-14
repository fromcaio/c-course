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
    int a = 2;
    double b = 11.656;
    char str[6] = "hello";

    fprintf(arq, "%d %lf %s", a, b, str);
    fclose(arq);
}