#include <stdio.h>

void main()
{
    int a = 2, b = 3, c;
    void *pa = &a;
    void *pb = &b;

    c = *(int *)pa + *(int *)pb;
    printf("c = %d\n", c);
}