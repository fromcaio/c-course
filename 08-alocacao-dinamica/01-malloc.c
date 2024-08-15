#include <stdio.h>
#include <stdlib.h>

void fun()
{
    int *x = (int *)malloc(sizeof(int));
    *x = 5;
    printf("\n%d\n", *x);
    free(x);
}

void main()
{
    fun();
}