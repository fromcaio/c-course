#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "listaPrioridade.h"

// Função criaLista
void criaLista(ListaPrioridade *lista, int tamanhoMaximo) {
    // Pessoa tem um valor inteiro (prioridade)
    // E um nome com no máximo 30 caracteres
    lista->pessoas = (Pessoa *)malloc(tamanhoMaximo * sizeof(Pessoa));
    lista->tamanhoMaximo = tamanhoMaximo;
    lista->primeiro = 0;
    lista->ultimo = 0;
}

// Função verificarListaVazia
int verificarListaVazia(ListaPrioridade *lista) {
    return lista->primeiro == lista->ultimo; // Se o primeiro índice for igual ao último, a lista está vazia.
}

// Função insereNovaPessoaNoFinal
int insereNovaPessoaNoFinal(ListaPrioridade *lista, Pessoa pessoa) {
    // Se a lista não estiver cheia, insere a pessoa no final da lista.
    if (lista->ultimo < lista->tamanhoMaximo) {
        lista->pessoas[lista->ultimo] = pessoa;
        lista->ultimo++; // Incrementa o último índice após a inserção.
        printf("%s adicionada com prioridade %u\n", pessoa.nome, pessoa.prioridade);
        return 1;
    }
    return 0; // Se a lista estiver cheia, não insere.
}

// Função chamaProximaPessoa
int chamaProximaPessoa(ListaPrioridade *lista) {
    if (verificarListaVazia(lista)) {
        return -1; // Se a lista estiver vazia, não há ninguém para chamar.
    }

    // Procurando a pessoa com maior prioridade
    int idxMaiorPrioridade = lista->primeiro;
    // Percorre a lista procurando a pessoa com maior prioridade
    // Começa do segundo elemento, pois idxMaiorPrioridade já está com o primeiro elemento
    for (int i = lista->primeiro + 1; i < lista->ultimo; i++) {
        // Se a prioridade da pessoa i for maior que a prioridade da pessoa com maior prioridade
        if (lista->pessoas[i].prioridade > lista->pessoas[idxMaiorPrioridade].prioridade) {
            // Atualiza o índice da pessoa com maior prioridade
            idxMaiorPrioridade = i;
        }
    }

    // Imprime a próxima pessoa a ser chamada
    printf("Proximo: %s, %u\n", lista->pessoas[idxMaiorPrioridade].nome, lista->pessoas[idxMaiorPrioridade].prioridade);

    // Remove a pessoa da lista (desloca as pessoas para a esquerda)
    // Começa do índice da pessoa com maior prioridade
    for (int i = idxMaiorPrioridade; i < lista->ultimo - 1; i++) {
        // Desloca a pessoa i+1 para a posição i
        lista->pessoas[i] = lista->pessoas[i + 1];
    }
    lista->ultimo--; // Decrementa o tamanho da lista

    // Retorna a prioridade da próxima pessoa a ser chamada
    return lista->pessoas[idxMaiorPrioridade].prioridade;
}

// Função imprimeLista
void imprimeLista(ListaPrioridade *lista) {
    if (verificarListaVazia(lista)) {
        printf("Lista vazia\n");
        return;
    }

    for (int i = lista->primeiro; i < lista->ultimo; i++) {
        printf("%s, %u\n", lista->pessoas[i].nome, lista->pessoas[i].prioridade);
    }
}

// Função procura
int procura(ListaPrioridade *lista, Prioridade prioridade){
    for (int i = lista->primeiro; i < lista->ultimo; i++){
        if (lista->pessoas[i].prioridade == prioridade){
            return i;
        }
    }
    return -1;
}

// Função quantosFaltam
int quantosFaltam(ListaPrioridade *lista, Prioridade prioridade){
    int qtd = 0;
    for (int i = lista->primeiro; i < lista->ultimo; i++){
        if (lista->pessoas[i].prioridade >= prioridade){
            qtd++;
        }
    }
    return qtd - 1;
}

// Função insercaoOrdenada
int insercaoOrdenada(ListaPrioridade *lista, Pessoa pessoa)
{
    // Se a lista não estiver cheia, insere a pessoa na lista de forma ordenada pela prioridade.
    if (lista->ultimo < lista->tamanhoMaximo) {
        // Procura a posição correta para inserir a pessoa
        // enquanto desloca as pessoas para a direita
        int i = lista->ultimo;
        while (i > lista->primeiro && pessoa.prioridade < lista->pessoas[i - 1].prioridade) {
            lista->pessoas[i] = lista->pessoas[i - 1];
            i--;
        }

        // Insere a pessoa na posição correta
        lista->pessoas[i] = pessoa;
        lista->ultimo++; // Incrementa o último índice após a inserção.
        return 1;
    }
    return 0; // Se a lista estiver cheia, não insere.
}