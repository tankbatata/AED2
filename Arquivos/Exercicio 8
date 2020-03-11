#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

///Fac¸a um programa que leia o conteudo de um arquivo e crie um arquivo com o mesmo 
///conteudo, mas com todas as letras minusculas convertidas para maiusculas. Os no- 
///mes dos arquivos serao fornecidos, via teclado, pelo usuario. A funcao que converte 
///maiuscula para minuscula e o toupper(). Ela e aplicada em cada caractere da string. 

int main()
{
   FILE *arq, *newArq;

    char nomeArq[70], nomeNewArq[70];
    printf("Digite o nome do arquivo que deseja converter: ");
    gets(nomeArq);
    arq = fopen(nomeArq, "r");

    if(arq == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }

    printf("Digite o nome do arquivo que deseja criar: ");
    gets(nomeNewArq);
    newArq = fopen(nomeNewArq, "w");
    if(newArq == NULL){
        printf("Erro ao criar novo arquivo.\n");
        system("pause");
        exit(1);
    }


    char c;
    while(1){
        c = getc(arq);
        if(c == EOF) break;
        c = toupper(c);
        int result = fputc(c,newArq);
        if(result == NULL){
            printf("Erro na gravacao.\n");
            exit(1);
            }
        }
}


