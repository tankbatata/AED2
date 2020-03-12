#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Esse programa recebe telefones e salva em arquivo.txt

int main(){
    FILE *arquivo;

    arquivo = fopen("arquivo.txt", "w");

    while(1){
        char telefone[10];
        printf("Digite o telefone: ");
        gets(telefone);
        if(!(strcmp(telefone,"0"))) break;
        fputs(telefone,arquivo);
        fputc('\n', arquivo);
}
    fclose(arquivo);
    system("pause");
    return 0;

}
