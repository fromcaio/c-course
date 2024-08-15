#include <stdio.h>

// outros metodos além do scanf

void main()
{
    char str[50];
    printf("Digite uma string: ");

    // scanf(" %s",str);
    // nao armazena espaços, nem quebras de linhas

    // gets(str);
    // armazena tudo menos a tecla enter (\n)
    // palavra\0

    fgets(str, 50, stdin);
    // armazena tudo incluindo a tecla enter (\n)
    // palavra\n\0

    printf("A string digitada foi:%s\n", str);
}