#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// atoi - array para inteiro
// atof - array para float
// atol - array para long int

void main()
{
    // convertendo string para inteiro
    char a[4] = "100";
    int value = atoi(a);
    printf("Value = %i\n", value);

    // convertendo string para float
    char b[4] = "3.17";
    float value_float = atof(b);
    printf("Value = %f\n", value_float);

    // convertendo string para long int
    char c[15] = "1234525";
    long int value_li = atol(c);
    printf("Value = %li\n", value_li);
}