#include <stdio.h>
#include <stdlib.h>
#include "matriz_linearizada.h"

// typedef struct
// {
//     int l, c;  // linhas e colunas
//     int *data; // dados da matriz
// } Matriz;

// aloca nova matriz
// void criaMatriz(Matriz *m);
// desaloca matriz
// void apagaMatriz(Matriz *m);
// alteraElementoNaMatriz
// void alteraElementoNaMatriz(Matriz *m, int l, int c, int valor);
// consultaElementoNaMatriz
// int consultaElementoNaMatriz(Matriz *m, int l, int c);
// imprimeMatriz
// void imprimeMatriz(Matriz *m);
// retorna a matriz transposta
// Matriz *getTransposta(Matriz *m);
// retorna a soma de duas matrizes
// Matriz *getSoma(Matriz *m1, Matriz *m2);

void criaMatriz(Matriz *m)
{
    // matriz linearizada
    m->data = (int *)malloc(m->l * m->c * sizeof(int));
}

void apagaMatriz(Matriz *m)
{
    free(m->data);
}

void alteraElementoNaMatriz(Matriz *m, int l, int c, int valor)
{
    m->data[l * m->c + c] = valor;
}

int consultaElementoNaMatriz(Matriz *m, int l, int c)
{
    return m->data[l * m->c + c];
}

void imprimeMatriz(Matriz *m)
{
    for (int i = 0; i < m->l; i++)
    {
        for (int j = 0; j < m->c; j++)
        {
            printf("%d ", m->data[i * m->c + j]);
        }
        printf("\n");
    }
    printf("\n");
}

Matriz *getTransposta(Matriz *m)
{
    Matriz *transposta = (Matriz *)malloc(sizeof(Matriz));
    transposta->l = m->c;
    transposta->c = m->l;
    transposta->data = (int *)malloc(transposta->l * transposta->c * sizeof(int));

    for (int i = 0; i < m->l; i++)
    {
        for (int j = 0; j < m->c; j++)
        {
            transposta->data[j * transposta->c + i] = m->data[i * m->c + j];
        }
    }

    return transposta;
}

Matriz *getSoma(Matriz *m1, Matriz *m2)
{
    Matriz *soma = (Matriz *)malloc(sizeof(Matriz));
    soma->l = m1->l;
    soma->c = m1->c;
    soma->data = (int *)malloc(soma->l * soma->c * sizeof(int));

    for (int i = 0; i < m1->l; i++)
    {
        for (int j = 0; j < m1->c; j++)
        {
            soma->data[i * soma->c + j] = m1->data[i * m1->c + j] + m2->data[i * m2->c + j];
        }
    }

    return soma;
}