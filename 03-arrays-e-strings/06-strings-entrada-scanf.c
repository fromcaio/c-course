#include <stdio.h>

// Entrada de dados em strings

void main()
{
    // scanf nao consegue armazenar espaço " ", pois separa as entradas por espaço " "
    char str[50];
    char str2[50];
    printf("Digite uma string: ");
    // & eh opcional quando estivermos utilizando strings
    scanf(" %s %s", &str, &str2);
    printf("As strings digitadas foram:\n%s\n%s\n", str, str2);
}