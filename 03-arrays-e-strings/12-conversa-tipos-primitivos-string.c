#include <stdio.h>
#include <stdlib.h>

// convertendo de um tipo primitivo para uma string
// itoa
// ltoa
// sprintf

void main()
{
    // itoa - int para array (string)
    int i = 12345;
    char string[10];
    // variavel inteira, string, base (2,8,10,16)
    itoa(i, string, 10);
    printf("%s\n", string);

    // ltoa
    long num = 1234567890L;
    char buffer[20];
    // variavel long int, string, 10
    ltoa(num, buffer, 10);
    printf("%s\n", buffer);
}