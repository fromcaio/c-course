#include <stdio.h>

// Crie uma função que recebe um inteiro N e um caractere e imprime esse caractere N vezes.
// recursiva direta em cauda
void imprime_caractere(int n, char c)
{
    if (n == 0)
        return;
    printf("%c", c);
    return imprime_caractere(n - 1, c);
}

// Faça um programa que calcule a média de n números informados pelo usuário até ele informar o número 0.
int soma = 0;
int contador_de_numeros_informados = 0;

// funcao recursiva direta e em cauda
void calcula_media()
{
    printf("Digite um numero ou 0 para finalizar a execucao:");
    int entrada;
    scanf(" %d", &entrada);
    if (entrada == 0)
        return;
    soma += entrada;
    contador_de_numeros_informados++;
    return calcula_media();
}
// A série de Fibonacci inicia com os números 0 e 1 e os demais termos são definidos pela soma
// dos dois anteriores. Crie um programa que solicita do usuário a posição de um termo (int) e
// calcule qual é este termo.
// 0 1 1 2 3 5 8 13 21...
// funcao recursiva direta não em cauda
int fibonacci(int posicao)
{
    if (posicao == 0)
        return 0;
    if (posicao == 1)
        return 1;
    return fibonacci(posicao - 1) + fibonacci(posicao - 2);
}

// O programa deve verificar se o caractere fornecido pelo usuário está presente na string.
int verifica_caractere(char *string, char c)
{
    if (string[0] == c)
        return 1;
    if (string[0] == '\0')
        return 0;
    return verifica_caractere(string + 1, c);
}

void main()
{
    imprime_caractere(10, 'c');
    printf("\n");
    calcula_media();
    printf("media: %f\n", (float)soma / contador_de_numeros_informados);
    printf("valor fibonnaci na posicao 4: %d\n", fibonacci(4));
    char string[] = "meu nome nao eh jhony";
    char c = 'j';
    printf("j esta na string? %d", verifica_caractere(string, c));
}