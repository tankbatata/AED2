#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///Esse programa recebe uma letra e verifica quantas vezes ela aparece no arquivo
    FILE *arquivo;
    arquivo = fopen("arq.txt", "r");

    if(arquivo == NULL){
        printf("Erro na abertura do arquivo");
        system("pause");
        exit(1);
    }

    char c;
    printf("Letra: ");
    setbuf(stdin,NULL);
    scanf("%c", &c);

    char charArquivo;
    int numeroDeCa = 0;
    ///Percorre todo o arquivo e incrementa "numerodeCa" quando a mesma letra
    ///digitada pelo usuario é encrontrada
    while(1){
        charArquivo = fgetc(arquivo);
        if(charArquivo == EOF) break;
        if(charArquivo == c) numeroDeCa++;
    }
    printf("Existem %d letras \"%c\" nesse texto.\n", numeroDeCa, c);

    return 0;
}
