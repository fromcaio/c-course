#include <stdio.h>
#include <stdlib.h>
// #include <unistd.h> // unix/linux/mac funcao sleep entrada em segundos
#include <windows.h> // windows funcao sleep entrada em milisegundos

void imprimeCabecalho();
int imprimeMenuInicial();
void imprimeSoma();
void imprimeFatorial();

void imprimeCabecalho()
{
    system("cls");
    printf("====================================\n");
    printf("         %s\n", "From Cayo C Course");
    printf("====================================\n\n");
}
int imprimeMenuInicial()
{
    printf("0 - Exit\n");
    printf("1 - Sum\n");
    printf("2 - Factorial\n");
    int option;
    printf("Choose an option: ");
    scanf("%d", &option);
    return option;
}
void imprimeSoma()
{
    imprimeCabecalho();
    printf("Digite dois valores inteiros:");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Soma: %d\n", a + b);
}
void imprimeFatorial()
{
    imprimeCabecalho();
    printf("Insira um numero:\n");
    int n;
    scanf("%d", &n);
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    printf("Factorial: %d\n", factorial);
}

void main()
{
    int option;
    do
    {
        imprimeCabecalho();
        option = imprimeMenuInicial();
        switch (option)
        {
        case 0:
            imprimeCabecalho();
            printf("Exiting...\n");
            break;
        case 1:
            imprimeSoma();
            Sleep(2000);
            // sleep(2); // linux ou mac
            break;
        case 2:
            imprimeFatorial();
            Sleep(2000);
            // sleep(2); // linux ou mac
            break;
        default:
            imprimeCabecalho();
            printf("Invalid option\n");
            Sleep(2000); // windows
            // sleep(2); // linux
            break;
        }
    } while (option != 0);
}