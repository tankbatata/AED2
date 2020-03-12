#include <stdio.h>
#include <stdlib.h>

///Esse programa le um arquivo, organizado da seguinte forma
///     NOME DIA MES ANO \n
/// SE NAO OUVER O "\n", ou seja sem a quebra de linha da ultima pessoa, O PROGRAMA NAO FUNCIONARA corretamente
///Data referete a data de nascimento da pessoa
///Com essa entrada ele coloca em outro arquivo o nome e a idade da pessoa


int main(){

    FILE *arquivo;

    ///Leitura da data atual
    int dia,mes,ano;
    printf("Qual da data de hoje? \n");
    printf("Dia: ");
    scanf("%d", &dia);
    if(dia>31 || dia < 0) exit(3);
    printf("Mes: ");
    scanf("%d", &mes);
    if(mes>12 || mes < 0) exit (3);
    printf("Ano: ");
    scanf("%d", &ano);
    if(dia>29 && mes == 2) exit(3);
    if(dia>30 && mes <= 6 && mes%2 != 0 && mes != 2) exit(3);
    if(dia>30 && mes >6 && mes%2 == 0) exit(3);

    arquivo = fopen("dados.txt", "r");
    if(arquivo == NULL) exit(1);


    FILE *arquivo2;

    arquivo2 = fopen("idade.txt", "w");
    if(arquivo2 == NULL) exit(2);

    char nome[50], sendo_lido, data[4];
    sendo_lido = fgetc(arquivo);
    int j = 0, dat[3], idade, k = 0;

    while(sendo_lido != EOF){
        if(sendo_lido == ' '){///Quando ouver espaço o programa fara uma verificaçao
            sendo_lido = fgetc(arquivo);
            if(sendo_lido >= '0' && sendo_lido <= '9'){///Caso as proximas informaçoes seja a data ele armazena esses dados
                for(int i = 0; i<4; i++){
                    if(sendo_lido == ' ') break;
                    data[i] = sendo_lido;
                    sendo_lido = fgetc(arquivo);
                    }
                    dat[k] = atoi(data);
                    k++;
            }else {///Caso nao seja ele continua atualizando o nome da pessoa
                nome[j] = ' ';
                nome[j+1] = sendo_lido;
                j++;
                }
        }else
            if(sendo_lido == '\n'){///Quando chega no final da linha ele calcula a idade, e coloca as informaçoes no novo arquivo
                nome[j] = '\0';
                k = 0; ///Importante zerar os contadores de nome e dat, para quando for ler a proxima pessoa
                j = 0;
                fputs(nome,arquivo2);
                fputs(" tem ", arquivo2);
                if(dat[0] > dia && dat[1] > mes) idade = ((ano - dat[2]) - 1);///Verificando a idade
                else if(dat[1] > mes) idade = ((ano - dat[2]) -  1);
                    else idade = ano - dat[2];
                char ida[4];
                itoa(idade, ida,10);
                fputs(ida,arquivo2);
                fputs("\n", arquivo2);
                sendo_lido = fgetc(arquivo);
            }else{
        nome[j] = sendo_lido;///Caso nao haja o caracter de espaço o programa so atualiza o nome e segue o loop
        sendo_lido = fgetc(arquivo);
        j++;}
    }
    fclose(arquivo);
    fclose(arquivo2);

    return 0; ///Se retornar 0 deu tudo certo
              ///Se retornar 1 ou 2 houve erro na abertura do 1 ou 2 arquivo
              ///Se retornar 3 a data de entrada esta invalida
}
