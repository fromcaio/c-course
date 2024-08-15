#include <stdio.h>
#include <stdlib.h>

void main()
{
    float *array = (float *)calloc(5, sizeof(float));

    for (int i = 0; i < 5; i++)
    {
        array[i] = i + 1;
        printf("array[%d]: %d", array[i]);
    }

    array = realloc(array, 3 * sizeof(float));

    for (int i = 0; i < 3; i++)
        printf("array[%d]: %d", array[i]);
}