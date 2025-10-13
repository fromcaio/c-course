#include <stdio.h>
#include <stdlib.h>
#include "matriz_csr.h"

// void criaMatrizCSR(MatrizCSR *m, int *valores, int n_linhas, int n_cols, int n_nonzero);
void criaMatrizCSR(MatrizCSR *m, int *valores, int n_linhas, int n_cols, int n_nonzero)
{
    m->n_linhas = n_linhas;
    m->n_cols = n_cols;
    m->n_nonzero = n_nonzero;

    m->ptr_linha = (int *)malloc((n_linhas + 1) * sizeof(int));
    m->indice_col = (int *)malloc(n_nonzero * sizeof(int));
    m->valores = (int *)malloc(n_nonzero * sizeof(int));

    int k = 0;

    for (int i = 0; i < n_linhas; ++i)
    {
        m->ptr_linha[i] = k;
        for (int j = 0; j < n_cols; ++j)
        {
            if (valores[i * n_cols + j] != 0.0)
            {
                m->indice_col[k] = j;
                m->valores[k] = valores[i * n_cols + j];
                ++k;
            }
        }
    }

    m->ptr_linha[n_linhas] = k;
}

void apagaMatrizCSR(MatrizCSR *m)
{
    free(m->ptr_linha);
    free(m->indice_col);
    free(m->valores);
}

void imprimeMatrizCSR(MatrizCSR *m)
{
    printf("Matriz CSR:\n");
    printf("lin\tcol\tval\n");
    for (int i = 0; i < m->n_linhas; ++i)
    {
        int nz_start = m->ptr_linha[i];
        int nz_end = m->ptr_linha[i + 1];
        for (int nz_id = nz_start; nz_id < nz_end; ++nz_id)
        {
            int j = m->indice_col[nz_id];
            int v = m->valores[nz_id];
            printf("%d\t%d\t%d\n", i, j, v);
        }
    }
}

void alteraElementoNaMatrizCSR(MatrizCSR *m, int l, int c, int valor)
{
    int nz_start = m->ptr_linha[l];
    int nz_end = m->ptr_linha[l + 1];
    for (int nz_id = nz_start; nz_id < nz_end; ++nz_id)
    {
        int j = m->indice_col[nz_id];
        if (j == c)
        {
            m->valores[nz_id] = valor;
            return;
        }
    }
}

int consultaElementoNaMatrizCSR(MatrizCSR *m, int l, int c)
{
    int nz_start = m->ptr_linha[l];
    int nz_end = m->ptr_linha[l + 1];
    for (int nz_id = nz_start; nz_id < nz_end; ++nz_id)
    {
        int j = m->indice_col[nz_id];
        if (j == c)
        {
            return m->valores[nz_id];
        }
    }
    return 0;
}

MatrizCSR *getTranspostaCSR(MatrizCSR *m)
{
    // Passo 1: Alocar memória para a matriz transposta
    MatrizCSR *transposta = (MatrizCSR *)malloc(sizeof(MatrizCSR));
    transposta->n_linhas = m->n_cols; // Linhas e colunas trocam de lugar
    transposta->n_cols = m->n_linhas;
    transposta->n_nonzero = m->n_nonzero;

    // Inicializar estruturas
    transposta->ptr_linha = (int *)malloc((transposta->n_linhas + 1) * sizeof(int));
    transposta->indice_col = (int *)malloc(transposta->n_nonzero * sizeof(int));
    transposta->valores = (int *)malloc(transposta->n_nonzero * sizeof(int));

    // Passo 2: Contar a quantidade de elementos não-nulos por coluna da matriz original
    int *contador_coluna = (int *)calloc(m->n_cols, sizeof(int));
    for (int i = 0; i < m->n_nonzero; ++i)
    {
        contador_coluna[m->indice_col[i]]++;
    }

    // Passo 3: Preencher ptr_linha da matriz transposta
    transposta->ptr_linha[0] = 0;
    for (int i = 0; i < transposta->n_linhas; ++i)
    {
        transposta->ptr_linha[i + 1] = transposta->ptr_linha[i] + contador_coluna[i];
    }

    // Passo 4: Construir a matriz transposta (indice_col e valores)
    int *pos_atual_col = (int *)calloc(m->n_cols, sizeof(int));
    for (int i = 0; i < m->n_cols; ++i)
    {
        pos_atual_col[i] = transposta->ptr_linha[i];
    }

    for (int i = 0; i < m->n_linhas; ++i)
    {
        int nz_start = m->ptr_linha[i];
        int nz_end = m->ptr_linha[i + 1];
        for (int nz_id = nz_start; nz_id < nz_end; ++nz_id)
        {
            int coluna = m->indice_col[nz_id];
            int destino = pos_atual_col[coluna];

            transposta->indice_col[destino] = i; // Linha vira coluna na transposta
            transposta->valores[destino] = m->valores[nz_id];
            pos_atual_col[coluna]++;
        }
    }

    // Passo 5: Liberar memória auxiliar
    free(contador_coluna);
    free(pos_atual_col);

    return transposta;
}

// Soma duas matrizes no formato CSR
MatrizCSR *getSomaCSR(MatrizCSR *m1, MatrizCSR *m2)
{
    // Validação das dimensões
    if (m1->n_linhas != m2->n_linhas || m1->n_cols != m2->n_cols)
    {
        printf("Erro: Matrizes de dimensões diferentes.\n");
        return NULL;
    }

    // vamos transformar as matrizes em vetores para facilitar a soma
    int *valores1 = (int *)calloc(m1->n_linhas * m1->n_cols, sizeof(int));
    int *valores2 = (int *)calloc(m2->n_linhas * m2->n_cols, sizeof(int));

    for (int i = 0; i < m1->n_linhas; ++i)
    {
        int nz_start = m1->ptr_linha[i];
        int nz_end = m1->ptr_linha[i + 1];
        for (int nz_id = nz_start; nz_id < nz_end; ++nz_id)
        {
            int j = m1->indice_col[nz_id];
            valores1[i * m1->n_cols + j] = m1->valores[nz_id];
        }
    }

    for (int i = 0; i < m2->n_linhas; ++i)
    {
        int nz_start = m2->ptr_linha[i];
        int nz_end = m2->ptr_linha[i + 1];
        for (int nz_id = nz_start; nz_id < nz_end; ++nz_id)
        {
            int j = m2->indice_col[nz_id];
            valores2[i * m2->n_cols + j] = m2->valores[nz_id];
        }
    }

    // vamos somar os vetores
    int *valores_soma = (int *)calloc(m1->n_linhas * m1->n_cols, sizeof(int));
    for (int i = 0; i < m1->n_linhas; ++i)
    {
        for (int j = 0; j < m1->n_cols; ++j)
        {
            valores_soma[i * m1->n_cols + j] = valores1[i * m1->n_cols + j] + valores2[i * m1->n_cols + j];
        }
    }

    // vamos criar a matriz CSR da soma
    MatrizCSR *resultado = (MatrizCSR *)malloc(sizeof(MatrizCSR));
    criaMatrizCSR(resultado, valores_soma, m1->n_linhas, m1->n_cols, m1->n_linhas * m1->n_cols);

    // vamos liberar a memória alocada
    free(valores1);
    free(valores2);
    free(valores_soma);

    return resultado;
}

void imprimeMatrizCSRFormatoVetor(MatrizCSR *m)
{
    printf("Matriz CSR em formato de vetor:\n");
    for (int i = 0; i < m->n_linhas; ++i)
    {
        int nz_start = m->ptr_linha[i];
        int nz_end = m->ptr_linha[i + 1];
        int nz_id = nz_start;

        for (int j = 0; j < m->n_cols; ++j)
        {
            if (nz_id < nz_end && m->indice_col[nz_id] == j)
            {
                // Imprime valor não nulo
                printf("%0d ", m->valores[nz_id]);
                ++nz_id;
            }
            else
            {
                // Imprime zero implícito
                printf("0 ");
            }
        }
        printf("\n");
    }
}