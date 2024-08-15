#include <stdio.h>

struct pessoa
{
    char nome[50];
    int idade;
    float altura;
};

void main()
{
    const int qt = 2;
    struct pessoa parray[qt];
    for (int i = 0; i < qt; i++)
    {
        printf("Digite o nome: ");

        setbuf(stdin, NULL);
        gets(parray[i].nome);
        setbuf(stdin, NULL);

        printf("Digite a idade: ");

        setbuf(stdin, NULL);
        scanf(" %d", &parray[i].idade);
        setbuf(stdin, NULL);

        printf("Digite a altura: ");

        setbuf(stdin, NULL);
        scanf(" %f", &parray[i].altura);
        setbuf(stdin, NULL);
    }
    for (int i = 0; i < qt; i++)
    {
        printf("Pessoa %i\nnome: %s\nidade: %i\naltura: %f\n",
               i, parray[i].nome, parray[i].idade, parray[i].altura);
    }
}