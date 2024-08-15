#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome[50];
    int idade;
    float altura;
};

void main()
{
    // primeira maneira de atribuir valores
    struct pessoa j, m;
    strcpy(j.nome, "JOAO");
    j.idade = 25;
    j.altura = 1.80;

    strcpy(m.nome, "MARIA");
    m.idade = 22;
    m.altura = 1.55;

    // segunda maneira instanciando e atribuindo na mesma sentença
    struct pessoa p = {"PEDRO", 20, 1.75};
}