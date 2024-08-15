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
    struct pessoa j, m;
    strcpy(j.nome, "JOAO");
    j.idade = 25;
    j.altura = 1.80;

    strcpy(m.nome, "MARIA");
    m.idade = 22;
    m.altura = 1.55;

    // if(m > j)
    // assim como nos arrays nao é possivel utilizar operadores relacionais
    // em arrays não sabemos qual variavel deve ser comparada
    // com structs não sabemos qual atributo da nossa variavel deve ser comparado
    if (m.altura > j.altura)
        printf("Maria é maior do que Joao.");

    // já a atribuição ela é permitida
    struct pessoa p, x;
    strcpy(p.nome, "PEDRO");
    p.idade = 25;
    p.altura = 1.8;

    x = p;

    printf("\nNome: %s\nIdade: %d\nAltura: %f",
           x.nome, x.idade, x.altura);
}