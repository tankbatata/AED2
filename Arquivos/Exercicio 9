#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>



int main()
{
    FILE *arq, *arq2;

    arq = fopen("C:\\Users\\viniciusmiata\\Desktop\\ListaC11\\arq.txt", "r");
    if(arq == NULL) exit(1);
    arq2 = fopen("C:\\Users\\viniciusmiata\\Desktop\\ListaC11\\arq2.txt", "r");
    if(arq2 == NULL) exit(2);

    FILE *arq3;

    arq3 = fopen("C:\\Users\\viniciusmiata\\Desktop\\ListaC11\\arq3.txt", "w");
    if(arq3 == NULL) exit(3);


    while(1){
        char lido = fgetc(arq);
        if(lido == EOF) break;
        fputc(lido, arq3);
    }

    while(1){
        char lido = fgetc(arq2);
        if(lido == EOF) break;
        fputc(lido, arq3);
   }

    fclose(arq);
    fclose(arq2);
    fclose(arq3);

    return 0;
}

