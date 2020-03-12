#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome_arquivo[100];
    printf("Digite o nome do arquivo: ");
    gets(nome_arquivo);

    FILE *arquivo;

    arquivo = fopen(nome_arquivo,"r");
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo");
        exit(1);
    }

    char dados[21],nome[40],populacao[10];
    char maior_cidade[40], maior_populacao[10];


    int i;///Contador dos for, dados e nome
    int k = 0; ///Contador do loop
    while((fgets(dados,99,arquivo)) != NULL){
        ///varre "dados" e para no espaço, pois depois do espaço é a populaçao
        for(i = 0; dados[i] != ' ';i++){
                nome[i] = dados[i];
        }
        nome[i] = '\0';
        int j = 0; ///Contador de "populaçao"
        ///continua a varredura mas agr colocando em população
        for(i++; dados[i] != '\n' ;i++){
                populacao[j] = dados[i];j++;}
        populacao[j] = '\0';

        if(k == 0) {///No primeiro loop, seta a primeira cidade como maior
            strcpy(maior_cidade,nome);
            strcpy(maior_populacao,populacao);
            }
        else
            if(atoi(populacao) > atoi(maior_populacao)){///compara com a maior cidade atual
                strcpy(maior_cidade,nome);
                strcpy(maior_populacao,populacao);
                }
        k++;
    }

    FILE *new_arq;
    new_arq = fopen("Maior_Cidade.txt", "w");

    if(new_arq == NULL){
        printf("Erro na criaçao do arquivo.\n");
        exit(1);
    }
    
    ///Coloca em um novo arquivo a maior cidade e sua populaçao
    fputs(maior_cidade, new_arq);
    fputs(" ", new_arq);
    fputs(maior_populacao, new_arq);


    return 0;
}
