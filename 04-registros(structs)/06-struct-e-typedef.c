#include <stdio.h>

typedef struct pnt
{
    float x, y;
} pnt;

void main()
{
    struct pnt p = {1, 3};
    printf("\nP1(%.1f,%.1f)\n", p.x, p.y);
}