## Parte 1: TAD para Matriz Linearizada

### Funções a serem implementadas

Você deverá criar um cabeçalho `matriz_linearizada.h` e um arquivo de implementação `matriz_linearizada.c` com as seguintes funções:

`void criaMatriz(Matriz *m);`
> Aloca memória para o vetor `data` com base em `m->l` e `m->c`.

`void apagaMatriz(Matriz *m);`
> Libera a memória alocada para `data`.

`void alteraElementoNaMatriz(Matriz *m, int l, int c, int valor);`
> Altera o valor de um elemento na posição `(l, c)`.  
> O índice no vetor será `l * m->c + c`.

`int consultaElementoNaMatriz(Matriz *m, int l, int c);`
> Retorna o valor do elemento na posição `(l, c)`.

`void imprimeMatriz(Matriz *m);`
> Imprime a matriz no formato tradicional de linhas e colunas.

`Matriz *getTransposta(Matriz *m);`
> Retorna um ponteiro para uma nova matriz que é a transposta da matriz `m`.

`Matriz *getSoma(Matriz *m1, Matriz *m2);`
> Retorna um ponteiro para uma nova matriz que é a soma de `m1` e `m2`.  
> Assuma que as dimensões são compatíveis.

## Parte 2: TAD para Matriz Esparsa (Formato CSR)

Matrizes esparsas são aquelas com uma grande quantidade de elementos nulos.  
Armazená-las como matrizes densas seria um desperdício de memória.  
O formato **CSR (Compressed Sparse Row)** armazena apenas os elementos não nulos em **três vetores**.

### 1. Estrutura
Crie uma `struct` para a representação **CSR**.

### 2. Funções a serem implementadas

Crie um cabeçalho `matriz_csr.h` e um arquivo de implementação `matriz_csr.c` com as seguintes funções:

`void criaMatrizCSR(MatrizCSR *m, int *valores_originais, int n_linhas, int n_cols, int n_elementos_total);`
> Converte uma matriz densa (representada por `valores_originais`) para o formato CSR,  
> alocando e preenchendo os vetores da struct `MatrizCSR`.

`void apagaMatrizCSR(MatrizCSR *m);`
> Libera a memória alocada para os três vetores da matriz.

`int consultaElementoNaMatrizCSR(MatrizCSR *m, int l, int c);`
> Retorna o valor do elemento na posição `(l, c)`.  
> Se o elemento não estiver armazenado, retorne `0`.

`void alteraElementoNaMatrizCSR(MatrizCSR *m, int l, int c, int valor);`
> Altera o valor de um elemento não nulo já existente.  
> (Observação: a inserção de um novo elemento não nulo é mais complexa e **não é requisito** deste exercício).

`void imprimeMatrizCSRFormatoVetor(MatrizCSR *m);`
> Imprime a matriz reconstruída no formato de linhas e colunas, mostrando os zeros implícitos.

`MatrizCSR *getTranspostaCSR(MatrizCSR *m);`
> Retorna um ponteiro para uma nova matriz CSR que é a **transposta** da matriz `m`.

`MatrizCSR *getSomaCSR(MatrizCSR *m1, MatrizCSR *m2);`
> Retorna um ponteiro para uma nova matriz CSR que é a **soma** de `m1` e `m2`.

## Parte 3: Programa de Teste

Crie um arquivo `main.c` que inclua os dois cabeçalhos e realize os seguintes testes:

### 🧮 Teste da Matriz Linearizada

1. Crie duas matrizes densas de 3x2.  
2. Preencha-as com valores (exemplo: `valor = linha + coluna`).  
3. Imprima as duas matrizes.  
4. Calcule e imprima a **soma** das duas matrizes.  
5. Calcule e imprima a **transposta** da matriz soma.  
6. Libere toda a memória alocada.

### 🧩 Teste da Matriz CSR

1. Declare uma matriz esparsa em formato de vetor, como no exemplo abaixo.  
2. Use sua função `criaMatrizCSR` para converter este vetor em uma `MatrizCSR`.  
3. Imprima a matriz no formato de vetor para verificar a conversão.  
4. Teste as funções `consultaElementoNaMatrizCSR` e `alteraElementoNaMatrizCSR` e imprima os resultados.  
5. Calcule e imprima a **transposta** da matriz CSR.  
6. Calcule e imprima a **soma** da matriz original com sua transposta.  
7. Libere toda a memória alocada.