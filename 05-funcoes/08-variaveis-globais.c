#include <stdio.h>

int v[5];

void alteraArray()
{
    for (int i = 0; i < 5; i++)
        v[i] = 10;
}

void main()
{
    v[0] = 0;
    v[1] = 0;
    v[2] = 0;
    v[3] = 0;
    v[4] = 0;
    for (int i = 0; i < 5; i++)
        printf("%d", v[i]);
    alteraArray();
    printf("\n");
    for (int i = 0; i < 5; i++)
        printf("%d", v[i]);
}