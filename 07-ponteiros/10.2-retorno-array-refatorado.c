#include <stdio.h>

typedef struct arrayTam
{
    int *ar;
    int tam;
} arrayTam;

arrayTam obterArray()
{
    arrayTam ar;
    static int array[10];
    ar.ar = array;
    ar.tam = 10;
    return ar;
}
void main()
{
    arrayTam ar = obterArray();
    arrayTam ar2 = obterArray();

    for (int i = 0; i < ar.tam; i++)
    {
        printf("ar.ar[%d]: %d\n", i, ar.ar[i]);
        printf("ar.ar[%d]: %d\n", i, *(ar.ar + i));
    }
}