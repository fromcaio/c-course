#include <stdio.h>

typedef struct
{
    float x, y;
} Ponto;

void main()
{
    Ponto ponto = {2.5, 4.0};
    Ponto *p = &ponto;
    printf("\n (%.1f,%.1f) \n", ponto.x, ponto.y);
    printf("\n (%.1f,%.1f) \n", (*p).x, (*p).y);
    printf("\n (%.1f,%.1f) \n", p->x, p->y);
}