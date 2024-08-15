#include <stdio.h>
// criando o tipo enum booleano
enum boolean
{
    false,
    true = 20
};
void main()
{
    // criando uma variavel do tipo enum booleano
    enum boolean bl = true;
    printf("%i vamos verificar se eh 20 mesmo!", bl);
    if (bl == true)
        printf("Comparacao bem sucedida!");
    if (bl == 20)
        printf("Comparacao bem sucedida!");

    // quando o usuario esta digitando nós devemos receber um tipo inteiro
    // quando nós formos atribuir um valor a uma variavel do tipo enum, nós podemos utilizar
    // um valor inteiro, ou uma palavra que faça parte do tipo que criamos
    // que vai ser convertida para um inteiro.
}