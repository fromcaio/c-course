#include <stdio.h>

int *obterArray()
{
    static int v[5];
    for (int i = 0; i < 5; i++)
        v[i] = i;
    return v;
}

void main()
{
    int *array = obterArray();
    int *array2 = obterArray();
    
    array2[0] = 1;
    array2[1] = 1;
    array2[2] = 1;
    array2[3] = 1;
    array2[4] = 1;

    for (int i = 0; i < 5; i++)
        printf(" %d ", array[i]);
}