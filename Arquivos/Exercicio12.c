#include <stdio.h>
#include <stdlib.h>

///Esse programa le o arquivo e retorna quantos caracteres, palavras e linhas ele contem.


int main(){
    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "r");

    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo\n.");
        system("pause");
        exit(1);
    }
    int caracteres = 0, linhas = 1, palavras = 0, i = 0;
    char c;
    while (c != EOF){
        c = fgetc(arquivo);
        caracteres++;///Todo novo caracter lido incrementa essa variavel
        if(c == '\n') linhas++;
        if((c < 'a' || c > 'z') && (c < 'A' || c > 'Z') && (c < '0' || c > '9')){///Verifica se c nao é uma letra ou numero
            if(i != 0)///Verifica se existe uma letra antes desse caracter, para considerar que uma palavra foi concluida
                palavras++;
            i = 0;///Contador q só é incrementando quando uma letra aparece
        }else i++;

    }
    printf("Caracteres: %d\nLinhas: %d\nPalavras: %d\n", caracteres, linhas,palavras);

    fclose(arquivo);
    system("pause");
    return 0;

}
