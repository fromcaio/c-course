#include <stdio.h>

void main()
{
    int a = 2;
    float f = 2.0f;
    char c = 'c';

    void *pa = &a;
    printf("a = %d\n", *(int *)pa);
    pa = &f;
    printf("f = %f\n", *(float *)pa);
    pa = &c;
    printf("c = %c\n", *(char *)pa);
}