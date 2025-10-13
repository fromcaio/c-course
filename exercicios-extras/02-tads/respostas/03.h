// Desenvolva um TAD que representa um conjunto de inteiros. Para isso, utilize um vetor de inteiros.
// O TAD deverá conter as seguintes funções: 
// ● criar um conjunto vazio; 
// ● união de dois conjuntos; 
// ● inserir um elemento no conjunto; 
// ● remover um elemento do conjunto; 
// ● intersecção entre dois conjuntos; 
// ● diferença de dois conjuntos; 
// ● testar se um número pertence ao conjunto; 
// ● menor valor do conjunto; 
// ● maior valor do conjunto; 
// ● testar se dois conjuntos são iguais; 
// ● tamanho do conjunto; 
// ● testar se o conjunto é vazio
#ifndef CONJUNTO_H
#define CONJUNTO_H

typedef struct conjunto {
    int * elementos;
    int tamanho;
}Conjunto;

Conjunto* cria_conjunto();
Conjunto* uniao(Conjunto* c1, Conjunto* c2);
void insere_elemento(Conjunto* c, int elemento);
void remove_elemento(Conjunto* c, int elemento);
Conjunto* interseccao(Conjunto* c1, Conjunto* c2);
Conjunto* diferenca(Conjunto* c1, Conjunto* c2);
int pertence(Conjunto* c, int elemento);
int menor_valor(Conjunto* c);
int maior_valor(Conjunto* c);
int sao_iguais(Conjunto* c1, Conjunto* c2);
int tamanho(Conjunto* c);
int vazio(Conjunto* c);

#endif