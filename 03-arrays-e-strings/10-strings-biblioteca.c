#include <stdio.h>
#include <string.h>

// a biblioteca string.h tras alguns metodos prontos para utilizarmos
// em strings, vamos ver alguns destes metodos
// strlen() - verifica a quantidade de caracteres que temos na nossa string
// strcpy() - copia uma string
// strcat() - concatena, adiciona ao final de uma string o conteudo de outra
// strcmp() - avalia se duas strings são iguais
// strchr() - encontra a primeira ocorrencia de um dado caractere
// strrchr() - encontra a ultima ocorrencia de um dado caractere
// strstr() - verifica se uma dada substring pode ser encontrada dentro de outra string

void main()
{
    char str[200] = "Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit";
    char str2[200] = "Neque porro quisquam est qui dolorem ipsum quia dolor sit amet, consectetur, adipisci velit";
    char str3[200];

    // quantidade de caracteres
    printf("Nossa string 1 tem %d caracteres!\n", strlen(str));

    // copiando conteudo
    strcpy(str3, str);
    printf("conteudo da string 3 eh: %s\n", str3);

    // concatenando conteudo
    strcat(str3, "CONCATENEI");
    printf("conteudo da string 3 apos concatenar eh:\n%s\n", str3);

    // comparando strings
    int resposta_comp_str_str2 = strcmp(str, str2);
    // 0 as strings são iguais
    printf("comparando str com str2: %d\n", resposta_comp_str_str2);
    // valor for negatvio resposta < 0
    // o primeiro caractere diferente encontrado, é menor na str1
    // valor for positivo resposta > 0
    // o primeiro caractere diferente encontrado, é menor na str2
    int resposta_comp_str_str3 = strcmp(str, str3);
    printf("comparando str com str3: %d\n", resposta_comp_str_str3);

    // verificando a ocorrencia de um caracter
    // vamos entender depois
    char *p = strchr(str, 'p');
    printf("O caractere 'p' foi encontrado e temos a partir dele:\n%s\n", p);
    p = strrchr(str, 'p');
    printf("O caractere 'p' foi encontrado e temos a partir dele:\n%s\n", p);
    // verificando a ocorrencia de uma substring
    p = strstr(str, "sit");
    // se a palavra existir vai retonar um ponteiro para a ocorrencia dela
    // se não existir vai retornar nulo
    printf("O caractere 'p' foi encontrado e temos a partir dele:\n%s\n", p);
}