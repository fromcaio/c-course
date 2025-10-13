#ifndef MATRIZ_LINEARIZADA_H
#define MATRIZ_LINEARIZADA_H

typedef struct
{
    int l, c;  // linhas e colunas
    int *data; // dados da matriz
} Matriz;

// aloca nova matriz
void criaMatriz(Matriz *m);
// desaloca matriz
void apagaMatriz(Matriz *m);
// alteraElementoNaMatriz
void alteraElementoNaMatriz(Matriz *m, int l, int c, int valor);
// consultaElementoNaMatriz
int consultaElementoNaMatriz(Matriz *m, int l, int c);
// imprimeMatriz
void imprimeMatriz(Matriz *m);
// retorna a matriz transposta
Matriz *getTransposta(Matriz *m);
// retorna a soma de duas matrizes
Matriz *getSoma(Matriz *m1, Matriz *m2);

#endif