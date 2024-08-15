#include <stdio.h>

// MUITO CUIDADO!
// 1. Declaração de um ponteiro. Por exemplo float *p;
// 2. Desreferenciamento de um ponteiro. Por exemplo *p = 10;
// 3. Multiplicação. Por exemplo: x * y;

void main()
{
    float a = 5.0f, b = 2.0;
    // 1. declaração de um ponteiro
    float *pa = &a, *pb = &b;
    // 3. multiplicação
    float r1 = a * b;
    // 2. desreferenciamento e multiplicação
    float r2 = *pa * *pb;
    printf("\n r1: %f\nr2: %f\n", r1, r2);
}