#include <stdio.h>

void main()
{
    // caracteres
    char nome_da_variavel = 'a'; //-127 127
    unsigned char variavel4;     // 0 255
    printf("imprimindo a variavel do tipo char: %c\n", nome_da_variavel);
    printf("imprindo duas variaveis no mesmo print %c %c\n", nome_da_variavel, variavel4);

    // numeros inteiros
    short int nome_da_variavel2 = 1;
    int nome_da_variavel3 = 1;
    long int nome_da_variavel4 = 1;
    printf("short int: %i\n", nome_da_variavel2);
    printf("int: %i\n", nome_da_variavel3);
    printf("long int: %li\n", nome_da_variavel4);

    unsigned short int variavel1 = 1;
    unsigned int variavel2 = 1;
    unsigned long int variavel3 = 1;
    printf("u short int: %u\n", variavel1);
    printf("u int: %u\n", variavel2);
    // problema
    printf("u long int: %lu\n", variavel3);

    // numeros reais
    float nome_da_variavel5 = 3.9f;
    double nome_da_variavel6 = 3.4;
    long double nome_da_variavel7 = 3.9e-23L;
    printf("float: %f\n", nome_da_variavel5);
    printf("double: %f\n", nome_da_variavel6);
    // problema
    // deveriamos converter o conteudo da variavel 7 para uma string, sequencia de caracteres
    printf("long double: %e\n", (double)nome_da_variavel7);
    // demonstração de uso de uma string
    char nome[] = "Caio";
    printf("impressao de string: %s\n", nome);

    // constante nomeada
    const int MAX = 100;
    printf("const int: %i\n", MAX);

    // impressao de endereços de memoria
    int a;
    printf("endereço da variavel a:%p\n", &a);
}