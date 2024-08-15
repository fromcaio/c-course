#include <stdio.h>

void main()
{
    int a = 5;
    printf("Valor de a: %d\n", a);
    printf("Endereco de a: %x\n", &a);
    int *p = &a;
    printf("Endereco de p: %x\n", &p);
    printf("Conteudo de p: %x\n", p);
    printf("Conteudo da variavel cujo endereco esta salvo em p: %d\n", *p);
}