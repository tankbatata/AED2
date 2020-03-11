#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///Esse programa verifica a quantidade de vogais existentes em um arquivo
    FILE *arquivo;
    arquivo = fopen("arq.txt", "r");

    char c;
    int vogal = 0;

    ///Lê todo o arquivo e incrementa "vogal" quando for lida uma vogal
        while(1){
        c = fgetc(arquivo);
        if(c == EOF) break;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o'|| c == 'u' ) vogal++;
        if(c == 'A' || c == 'E' || c == 'I' || c == 'O'|| c == 'U') vogal++;
    }
    printf("Vogais do documento: %d.\n", vogal);
    fclose(arquivo);
    return 0;

}
