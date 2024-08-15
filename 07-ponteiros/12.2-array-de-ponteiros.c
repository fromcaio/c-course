#include <stdio.h>

void main()
{
    int array0[10];
    int array1[10];
    int array2[10];
    int array3[10];

    int *ar_ponteiro[4];

    ar_ponteiro[0] = array0;
    ar_ponteiro[1] = array1;
    ar_ponteiro[2] = array2;
    ar_ponteiro[3] = array3;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 10; j++)
        {
            printf("ar_ponteiro[%d][%d]: %d\n", i, j, ar_ponteiro[i][j]);
            printf("ar_ponteiro[%d][%d]: %d\n", i, j, *(ar_ponteiro[i] + j));
        }
}