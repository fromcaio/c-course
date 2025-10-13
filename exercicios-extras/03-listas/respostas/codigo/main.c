#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"listaPrioridade.h"

void main(){
    ListaPrioridade lista;
    criaLista(&lista, 10);
    Pessoa pessoa3 = {9, "Sicrano"};
    Pessoa pessoa2 = {10, "Fulano"};
    Pessoa pessoa4 = {11, "Beraldo"};
    Pessoa pessoa1 = {1, "Beltrano"};
    Pessoa pessoa5 = {99, "Zutano"};

    // roteiro 06, inserindo ordenado
    insercaoOrdenada(&lista, pessoa1);
    insercaoOrdenada(&lista, pessoa2);
    insercaoOrdenada(&lista, pessoa3);
    insercaoOrdenada(&lista, pessoa4);
    insercaoOrdenada(&lista, pessoa5);
    imprimeLista(&lista);

    // utilizando a funcao procura para buscar a pessoa com prioridade 10
    int idx = procura(&lista, 10);

    // imprimindo tamanho da lista e quantos faltam para a pessoa com prioridade 10 ser chamada
    printf("Quantos faltam para a pessoa com prioridade %d ser chamada: %d\n", lista.pessoas[idx].prioridade, quantosFaltam(&lista, 10));


    // insereNovaPessoaNoFinal(&lista, pessoa1);
    // insereNovaPessoaNoFinal(&lista, pessoa2);
    // insereNovaPessoaNoFinal(&lista, pessoa3);
    // insereNovaPessoaNoFinal(&lista, pessoa4);
    // insereNovaPessoaNoFinal(&lista, pessoa5);
    // imprimeLista(&lista);
    // chamaProximaPessoa(&lista);
    // imprimeLista(&lista);
    // chamaProximaPessoa(&lista);
    // imprimeLista(&lista);
    // chamaProximaPessoa(&lista);
    // imprimeLista(&lista);
    // chamaProximaPessoa(&lista);
    // imprimeLista(&lista);
    // chamaProximaPessoa(&lista);
    // imprimeLista(&lista);
    // chamaProximaPessoa(&lista);
}