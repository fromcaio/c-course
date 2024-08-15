#include <stdio.h>
#include <stdlib.h>

// dica, sempre que alocar memoria em uma funcao
// verifique se esta retornando o ponteiro, se não estiver
// verifique se a liberação está sendo feita.

void fun()
{
    int *x = (int *)malloc(sizeof(int));
    *x = 5;
    printf("\n%d\n", *x);
    /*Uma variável foi alocada na heap e x aponta para ela. Mas
    como x é dinâmica da pilha, ela deixa de existir quando a
    função fun encerra. Contudo, a variável alocada na heap (que
    armazena o valor 5) não foi liberada e ela continua existindo
    após o final da função. Essa variável está perdida na heap
    porque não há mais um ponteiro apontando para ela. Ela não
    pode ser recuperada.*/
}

void main()
{
    fun();
}