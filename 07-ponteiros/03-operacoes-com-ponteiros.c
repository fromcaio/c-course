#include <stdio.h>

// operações com ponteiros

void main()
{
    // int a;
    // int *p = &a;
    int a, *p = &a;
    printf("%x + 1 = %x\n", p, p + 1);
    printf("%x - 1 = %x\n", p, p - 1);
}