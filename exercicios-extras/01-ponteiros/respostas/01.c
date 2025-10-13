#include<stdio.h>
#include<stdlib.h>

// Função que verifica se um elemento pertence a um conjunto
int verifica_se_pertence_ao_conjunto(int *x, int n, int elemento){
    for (int i = 0; i < n; i++){
        if (x[i] == elemento){
            return 1;
        }
    }
    return 0;
}

// Função que retorna a união de dois conjuntos
int *uniao(int *x1, int *x2, int n1, int n2, int*qtd){
    int *x3 = (int *)malloc((n1 + n2) * sizeof(int));
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2){
        if (verifica_se_pertence_ao_conjunto(x3, k, x1[i]) == 0){
            x3[k] = x1[i];
            i++;
            k++;
        }
        else
            i++;
        if (verifica_se_pertence_ao_conjunto(x3, k, x2[j]) == 0){
            x3[k] = x2[j];
            j++;
            k++;
        }
        else
            j++;
    }

    *qtd = k;
    return x3;
}

void main (){
    int x1[] = {1,3,5,6,7};
    int x2[] = {1,3,4,6,8};

    int qtd = 0;
    // os parametros da funcao uniao sao os conjuntos x1 e x2,
    // o tamanho de x1 e x2, e um ponteiro para a variavel qtd
    // que armazenara o tamanho do conjunto uniao
    int * x3 = uniao(x1, x2, 5, 5, &qtd);
    
    for (int i = 0; i < qtd; i++){
        printf("x3[%d] = %d\n", i, x3[i]);
    }

    free(x3);
}