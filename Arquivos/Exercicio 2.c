#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///Esse programa verifica a quantidade de linhas existentes em um arquivo
    FILE *arquivo;
    arquivo = fopen("arq.txt", "r");

    char c;
    int linhas = 0;

    ///Lê todo o arquivo e incrementa "c" quando for lido um "\n" ou seja quando a quebra de linha
    while(1){
        c = fgetc(arquivo);
        if(c == EOF) break;
        if(c == '\n') linhas++;
    }
    printf("Linhas do documento: %d.\n", linhas);
    fclose(arquivo);
    return 0;

}
