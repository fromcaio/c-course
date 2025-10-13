## Questão 1
Crie uma função em C que receba dois conjuntos (arrays de inteiros) e seus respectivos tamanhos como parâmetros. A função deve calcular a união desses dois conjuntos, armazenando o resultado em um novo array alocado dinamicamente. A função deve também retornar, por referência, o tamanho do conjunto união resultante.

Observações:
- Lembre-se que a união de dois conjuntos não contém elementos repetidos.
- A função principal (main) deve declarar e inicializar os dois arrays, chamar a função de união e, ao final, imprimir os elementos do conjunto resultante e liberar a memória alocada.

## Questão 2
Escreva um programa em C que declare duas variáveis do tipo int. Em seguida, compare os endereços de memória dessas duas variáveis e exiba na tela qual deles é o maior endereço, mostrando o valor do endereço em formato hexadecimal.

## Questão 3
Implemente uma função chamada frac que receba um número do tipo float como parâmetro e retorne ao programa principal (main) a parte inteira e a parte fracionária desse número. A comunicação entre a função frac e a main para o retorno dos valores deve ser feita através de passagem de parâmetros por referência (utilizando ponteiros).

Na função main, gere um número float aleatório entre 1.0 e 10.0, chame a função frac e imprima o número original, sua parte inteira e sua parte fracionária.

## Questão 4
Analise o trecho de código C abaixo e determine, sem compilá-lo, quais serão os valores finais das variáveis i e j após a execução. Justifique sua resposta explicando o que cada linha de código faz.

```c
#include<stdio.h>

void main (){
    int i = 34 , j ;
    int *p;

    p = &i;
    (*p)++;
    j = *p + 33;

    // Quais os valores de i e j aqui?
}
```

## Questão 5
Considerando o código em C a seguir, que utiliza um ponteiro para ponteiro, determine o valor final da variável c após a execução de todas as atribuições. Rastreie as operações com os ponteiros para justificar sua resposta.

```c
#include<stdio.h>

void main() {
    int i = 7, j = 5, c;
    int *p;
    int **q;

    p = &i;
    q = &p;
    c = **q + j;

    // Qual o valor de c neste ponto?
}
```