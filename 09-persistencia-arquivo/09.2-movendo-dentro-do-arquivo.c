#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char *text = "Hello, world! This is a tutorial using fseek.";
    char ch;
    char stop_char = '!';

    // Criando um arquivo temporário na memória
    // O arquivo temporário é criado com o modo "w+" (leitura e escrita)
    // e é automaticamente excluído quando o ponteiro de arquivo é fechado ou o programa termina.
    fp = tmpfile();
    if (fp == NULL)
    {
        perror("Unable to create temporary file");
        return 1;
    }

    // Escrevendo a string no arquivo temporário
    fputs(text, fp);

    // Voltando o ponteiro do arquivo para o início
    // necessário para ler o conteúdo do arquivo a partir do início.
    fseek(fp, 0, SEEK_SET);

    printf("Lendo até o caractere '%c':\n", stop_char);

    // Caminhnando pelo arquivo até encontrar o caractere stop_char
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == stop_char)
        {
            // Se o caractere for o stop_char, lê o próximo caractere e sai do loop
            fgetc(fp);
            break;
        }
    }

    // Imprimindo os caracteres restantes após o stop_char
    printf("\nCaracteres restantes após '%c':\n", stop_char);

    while ((ch = fgetc(fp)) != EOF)
    {
        // printf("%c", ch);
        putchar(ch);
    }

    // Fechado o arquivo temporário
    fclose(fp);
    return 0;
}