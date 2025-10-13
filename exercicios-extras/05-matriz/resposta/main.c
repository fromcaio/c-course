#include <stdio.h>
#include <stdlib.h>
#include "matriz_linearizada.h"
#include "matriz_csr.h"

void main()
{
    // testando matriz linearizada
    printf("Testes Matriz Linearizada\n");
    Matriz *m = (Matriz *)malloc(sizeof(Matriz));
    Matriz *n = (Matriz *)malloc(sizeof(Matriz));

    m->l = 3;
    m->c = 2;

    n->l = 3;
    n->c = 2;

    criaMatriz(m);
    criaMatriz(n);

    for (int i = 0; i < m->l; i++)
    {
        for (int j = 0; j < m->c; j++)
        {
            alteraElementoNaMatriz(m, i, j, i + j);
            alteraElementoNaMatriz(n, i, j, i + j);
        }
    }

    printf("Matriz m:\n");
    imprimeMatriz(m);
    printf("Matriz n:\n");
    imprimeMatriz(n);

    Matriz *soma = getSoma(m, n);
    printf("Matriz soma:\n");
    imprimeMatriz(soma);

    printf("Matriz transporta:\n");
    Matriz *transposta = getTransposta(soma);
    imprimeMatriz(transposta);

    apagaMatriz(m);
    apagaMatriz(n);
    apagaMatriz(soma);

    free(m);
    free(n);
    free(soma);

    // testando matriz csr
    printf("\nTestes Matriz CSR\n");
    int valores[] = {
        1, 0, 0, 2, 0,
        3, 4, 2, 5, 0,
        5, 0, 0, 8, 17,
        0, 0, 10, 16, 0,
        0, 0, 0, 0, 14};

    MatrizCSR *m_csr = (MatrizCSR *)malloc(sizeof(MatrizCSR));

    criaMatrizCSR(m_csr, valores, 5, 5, 15);
    // imprimeMatrizCSR(m_csr);
    printf("Matriz CSR Inicial para testes:\n");
    imprimeMatrizCSR(m_csr);
    imprimeMatrizCSRFormatoVetor(m_csr);

    int v = consultaElementoNaMatrizCSR(m_csr, 1, 1);
    printf("\nValor na linha 1, coluna 1: %d\n", v);

    alteraElementoNaMatrizCSR(m_csr, 1, 1, 10);
    printf("alterando valor na linha 1, coluna 1 para 10\n");

    v = consultaElementoNaMatrizCSR(m_csr, 1, 1);
    printf("Valor na linha 1, coluna 1: %d\n", v);

    printf("Matriz com o valor alterado:\n");
    imprimeMatrizCSRFormatoVetor(m_csr);

    MatrizCSR *transposta_csr = getTranspostaCSR(m_csr);
    // imprimeMatrizCSR(transposta_csr);
    printf("\nMatriz Transposta:\n");
    imprimeMatrizCSRFormatoVetor(transposta_csr);

    printf("\nSoma das matrizes:\n");
    printf("Matriz 1:\n");
    imprimeMatrizCSRFormatoVetor(m_csr);
    printf("Matriz 2:\n");
    imprimeMatrizCSRFormatoVetor(transposta_csr);

    MatrizCSR *soma_csr = getSomaCSR(m_csr, transposta_csr);
    // imprimeMatrizCSR(soma_csr);
    imprimeMatrizCSRFormatoVetor(soma_csr);

    apagaMatrizCSR(m_csr);
    free(m_csr);
    apagaMatrizCSR(transposta_csr);
    free(transposta_csr);
    apagaMatrizCSR(soma_csr);
    free(soma_csr);
}