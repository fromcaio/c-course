#include <stdio.h>

struct pessoa
{
    char nome[50];
    int idade;
    float altura;
};

void main()
{
    int a;
    struct pessoa p;
    printf("Digite o nome: ");
    gets(p.nome);
    printf("Digite a idade:");
    scanf(" %d", &p.idade);
    printf("Digite a altura: ");
    scanf(" %f", &p.altura);

    printf("\nNome: %s\nIdade: %i\nAltura: %f", p.nome, p.idade, p.altura);
}