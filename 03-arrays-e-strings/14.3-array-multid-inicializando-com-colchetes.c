#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Como inicializar um array

void main()
{
    // Assim como arrays unidimensionais, arrays multidimensioes podem
    // ser inicializador com o uso de colchetes {}

    int a[3][4] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int b[3][3][2] = {
        {{1, 2}, {1, 2}, {1, 2}},
        {{1, 2}, {1, 2}, {1, 2}},
        {{1, 2}, {1, 2}, {1, 2}}};
}