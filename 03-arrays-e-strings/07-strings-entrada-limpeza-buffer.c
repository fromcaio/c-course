#include <stdio.h>

// limpeza do buffer

void main()
{
    char str[50];
    printf("Digite uma string: ");

    // fflush(stdin); //windows

    // __fpurge(stdin); //linux

    setbuf(stdin, NULL); // both
    scanf("%s", &str);
    setbuf(stdin, NULL); // both
    printf("A string digitada foi:%s\n", str);
}