#include <stdio.h>

typedef struct
{
    float x, y;
} ponto;

ponto somaPontos(ponto A, ponto B)
{
    ponto S;
    S.x = A.x + B.x;
    S.y = A.y + B.y;
    return S;
}
void main()
{
    ponto P1 = {1, 3};
    ponto P2 = {5, 4};
    ponto P3 =
        somaPontos(P1, P2);
    printf("Soma: (%.1f,%.1f)", P3.x, P3.y);
}