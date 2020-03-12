#include <stdio.h>
#include <stdlib.h>

///Esse programa recebe como entrada um arquivo da seguinte forma
///Nome(com no maximo 40 caracteres) ANO, e um ano.
///E retorna o nome e se a pessoa é maior ou menor de idade
///PARA ESSE PROGRAMA FUNCIONAR CORRETAMENTE O ARQUIVO TEXTO DEVE TERMINAR EM "\ n" OU SEJA COM QUEBRA DE LINHA OU SEJA COM UM ENTER


int main(){
    printf("Ano atual: ");
    int ano;
    scanf("%d", &ano);

    printf("Nome do arquivo de entrada: ");///Leitura do nome do arquivo de entrada
    char nome_arquivo_entrada[50];
    setbuf(stdin,NULL);
    gets(nome_arquivo_entrada);

    printf("Nome do arquivo de saida: "); ///Leitura do nome do arquivo de saida
    char nome_arquivo_saida[50];
    setbuf(stdin,NULL);
    gets(nome_arquivo_saida);

    FILE *arq_entrada; ///Leitura do arquivo de entrada
    arq_entrada = fopen(nome_arquivo_entrada, "r");
    if(arq_entrada == NULL) exit(1);

    FILE *arq_saida; ///Cria arquivo de saida
    arq_saida = fopen(nome_arquivo_saida, "w");

    char c = fgetc(arq_entrada);
    char ano2[4], nome[41];
    int j = 0, idade;

    while(c != EOF){
        if(c == ' '){///Verifica se a seguir vem outro nome ou o ano
            c = fgetc(arq_entrada);
            if(c <= '9' && c >= '0'){///Se for o ano o armazena
                for(int i = 0; i<4; i++){
                    ano2[i] = c;
                    c = fgetc(arq_entrada);
                    }
                }else{///Se for outro nome continua armazenando em nome
                    nome[j] = ' ';
                    nome[j+1] = c;
                    j = j+2;
                    c = fgetc(arq_entrada);
                }
        }else if(c != '\n'){///Se nao houver quebra de linha o programa apenas continua incrementando o nome
                nome[j] = c;
                c = fgetc(arq_entrada);
                j++;}
            else{///Quando há a quebra de linha o programa, coloca os dados no 2 arquivo e passa para a leitura da proxima linha
                nome[j] = '\0';///Definir o fim da string nome
                j = 0;///Zerar para ler um novo nome
                fputs(nome, arq_saida);
                fputs(" eh ", arq_saida);
                idade = (ano - atoi(ano2));
                ///Verificaçao sobre a idade da pessoa
                if(idade < 18) fputs("menor de idade.\n", arq_saida);
                else if(idade == 18) fputs("entrando na maior idade.\n", arq_saida);
                else fputs("maior de idade.\n", arq_saida);
                c = fgetc(arq_entrada);
            }

    }

    ///Importante nao esquecer de fechar os FILES
    fclose(arq_entrada);
    fclose(arq_saida);
    return 0;
}
