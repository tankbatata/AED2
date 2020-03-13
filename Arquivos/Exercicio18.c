#include <stdio.h>
#include <stdlib.h>

///Modelo do txt lido pelo progama
/// Nome Preço


int main(){
    FILE *arquivo;

    arquivo = fopen("dados.txt", "r");
    if(arquivo == NULL) exit(1);

    char linha[100], nome[40], preco_string[6];
    float preco, preco_total = 0;



    while (1){
        fgets(linha,99, arquivo);
        if(feof(arquivo)){
            break;
        }
        for(int i = 0; i<100;i++)
            if(linha[i] == ' '){
                i++;
                if(linha[i] >= '0' && linha[i] <= '9'){
                    for(int j = 0; j<6;j++)
                    preco_string[j] = linha[i];
                    i++;
                    if(linha[i] == '\n'){
                        preco = atof(preco_string);
                        preco_total = preco_total + preco;
                        break;
                    }
                }else{
                    nome[i] = linha[i];
                }
            }else{
                nome[i] = linha [i];
            }
    }
    printf("%.2f", preco_total);

}
