#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Esse programa recebe o nome de um arquivo e uma palavra
///posteriormente ele verifica quantas ocorrencias da palavra existem no arquivo
///OBS: Esse codigo considera letras maiusculas e minusculas como diferentes

int main(){
    char nome_arquivo[50], buscada[50];

    printf("Digite o nome do arquivo: ");
    gets(nome_arquivo);
    printf("Qual palavra voce deseja contar?");
    setbuf(stdin,NULL);
    gets(buscada);

    FILE *arquivo;

    arquivo = fopen(nome_arquivo, "r");
    if(arquivo == NULL){
        printf("Arquivo inexistente.\n");
        system("pause");
        exit(1);
    }

    char c, palavra[50];
    int numero_de_palavras = 0, i = 0;
    while(c != EOF){
        c = fgetc(arquivo);
        if(c == ' ' || c == '\n'){ ///Verifica se o c nao é um espaço ou quebra de linha
            palavra[i] = '\0';
            if(strcmp(palavra,buscada) == 0)///Verifica se a palavra obtida é a buscada
                numero_de_palavras++;
            i = 0;///Zera o i toda vez q uma palavra for completada
        }else{
            palavra[i] = c;///Caso nao haja espaço ou quebra de linha vai incrementando palavra
            i++;
        }
    }
    printf("Nesse arquivo existem %d ocorrencias de %s.\n", numero_de_palavras, buscada);

    fclose(arquivo);
    system("pause");
    return 0;
}
