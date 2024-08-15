#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// sprintf

void main()
{
    char string[100];
    int number = 25;
    float pi = 3.14123123;

    sprintf(string, "float: %f int: %i", pi, number);
    printf("%s", string);
}