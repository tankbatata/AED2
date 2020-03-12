#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Faca um programa que receba do usuario um arquivo texto. Crie outro arquivo texto
///contendo o texto do arquivo de entrada, mas com as vogais substitu´ıdas por ‘*’.


int main()
{
    FILE *arq;
    arq = fopen("arq.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }

    FILE *newArq;
    newArq = fopen("newArq.txt", "w");

    int result;
    char c;
    while(1){
        c = fgetc(arq);
        if(c == EOF) break;
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            result = fputc('*', newArq); ///Coloca * no lugar de vogais minusculas
        else
            if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
                result = fputc('*', newArq); ///Coloca * no lugar de vogais maiusculas
            else
                result = fputc(c, newArq); ///Coloca o caracter no novo arquivo

        if(result == NULL){///Verifica se nao existe erro na escrita
            printf("Erro na escrita");
            system("pause");
            return 0;
        }
    }


    fclose(arq);
    return 0;
}
