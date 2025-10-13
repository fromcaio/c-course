#ifndef MATRIZ_CSR_H
#define MATRIZ_CSR_H

// vamos representar uma matriz CSR (Compressed Sparse Row) como uma struct
typedef struct
{
	int n_linhas;
	int n_cols;
	int n_nonzero;
	int *ptr_linha;
	int *indice_col;
	int *valores;

} MatrizCSR;

// aloca nova matriz
void criaMatrizCSR(MatrizCSR *m, int *valores, int n_linhas, int n_cols, int n_nonzero);
// desaloca matriz
void apagaMatrizCSR(MatrizCSR *m);
// alteraElementoNaMatriz
void alteraElementoNaMatrizCSR(MatrizCSR *m, int l, int c, int valor);
// consultaElementoNaMatriz
int consultaElementoNaMatrizCSR(MatrizCSR *m, int l, int c);
// imprimeMatriz
void imprimeMatrizCSR(MatrizCSR *m);
// imprimeMatrizCSRFormatoVetor
void imprimeMatrizCSRFormatoVetor(MatrizCSR *m);
// retorna a matriz transposta
MatrizCSR *getTranspostaCSR(MatrizCSR *m);
// retorna a soma de duas matrizes
MatrizCSR *getSomaCSR(MatrizCSR *m1, MatrizCSR *m2);

#endif