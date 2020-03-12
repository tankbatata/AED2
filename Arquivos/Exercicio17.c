#include <stdio.h>
#include <stdlib.h>


int main(){
    int numeros[10] = {1,2,3,4,5,6,7,8,9,10};
    char binario[5];

    FILE *arquivo;
    arquivo = fopen("binario.txt", "w");
    if(arquivo == NULL) exit(1);

    for(int i = 0; i<10;i++){
            itoa(numeros[i],binario,2);
            fputs(binario, arquivo);
            fputs("\n", arquivo);
    }

    return 0;
    ///Se a saida for 0 o programa executou sem erros
    ///Se a saida for 1 houve erro na criaçao do arquivo
}
