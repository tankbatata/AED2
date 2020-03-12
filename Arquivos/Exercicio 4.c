#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    ///Esse programa verifica a quantidade de vogais e consoantes de um arquivo
    FILE *arquivo;
    arquivo = fopen("arq.txt", "r");

    char c;
    int vogal = 0, consoante = 0;
    
    ///Nesse loop todo o arquivo é varrido, e incrementa vogal quando ler uma vogal
    ///ou incrementa consoante quando le uma consoante
    while (1){
        c = fgetc(arquivo);
        if(c == EOF) break;
        if(c >= 'a' && c <= 'z')
            if(c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')consoante++;
            else vogal++;
        if(c >= 'A' && c <= 'Z')
            if(c != 'A' && c != 'E' && c != 'I' && c != 'O' && c != 'U')consoante++;
            else vogal++;

    }
    printf("Nesse arquivo existe:\n%d vogais e %d consoantes", vogal, consoante);
    
    fclose(arquivo);
    return 0;
}
