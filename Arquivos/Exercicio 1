#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *arquivo;

    ///Crio o arquivo arq.txt caso nao exista, ou abro ele e apago o anterior
    arquivo = fopen("arq.txt", "w");
    ///Verificando se o arquivo foi aberto corretamente
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
        }

    char x;

    ///Loop até o usuario inserir 0
    while(1){
        setbuf(stdin,NULL);
        scanf("%c", &x);
        if(x == '0') break;
        ///Grava x no arquivo, e result me fala se a operaçao foi bem sucedida
        int result = fputc(x,arquivo);
        if(result == NULL){
            printf("Erro na escrita do arquivo.\n");
            break;
        }
    }
    fclose(arquivo);

    ///Parte 2 do exercicio
    ///Abrir arquivo apenas para leitura
    arquivo = fopen("arq.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
        }

    char y;

    ///Ler até o fim do arquivo

    while(1){
        y = fgetc(arquivo);
        if(y == EOF) break;
        printf("%c", y);

    }

    fclose(arquivo);

    return 0;
}
