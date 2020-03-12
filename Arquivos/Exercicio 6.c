#include <stdio.h>
#include <stdlib.h>
#include <string.h>

///Faca um programa que receba do usuario um arquivo texto e mostre na tela quantas ´
///vezes cada letra do alfabeto aparece dentro do arquivo.


int main()
{
    FILE *arq;
    arq = fopen("arq.txt", "r");
    if(arq == NULL){
        printf("Erro ao abrir o arquivo.\n");
        system("pause");
        exit(1);
    }

    int letras[26];
    for(int i = 0; i<26;i++) letras[i] = 0;

    char c;
    while(1){
        c = fgetc(arq);
        if(c == EOF) break;
        if(c >= 'a' && c <= 'z')
            switch(c){
            case 'a': letras[0]++;break;
            case 'b': letras[1]++;break;
            case 'c': letras[2]++;break;
            case 'd': letras[3]++;break;
            case 'e': letras[4]++;break;
            case 'f': letras[5]++;break;
            case 'g': letras[6]++;break;
            case 'h': letras[7]++;break;
            case 'i': letras[8]++;break;
            case 'j': letras[9]++;break;
            case 'k': letras[10]++;break;
            case 'l': letras[11]++;break;
            case 'm': letras[12]++;break;
            case 'n': letras[13]++;break;
            case 'o': letras[14]++;break;
            case 'p': letras[15]++;break;
            case 'q': letras[16]++;break;
            case 'r': letras[17]++;break;
            case 's': letras[18]++;break;
            case 't': letras[19]++;break;
            case 'u': letras[20]++;break;
            case 'v': letras[21]++;break;
            case 'w': letras[22]++;break;
            case 'x': letras[23]++;break;
            case 'y': letras[24]++;break;
            case 'z': letras[25]++;break;
            }
        else
            switch(c){
            case 'A': letras[0]++;break;
            case 'B': letras[1]++;break;
            case 'C': letras[2]++;break;
            case 'D': letras[3]++;break;
            case 'E': letras[4]++;break;
            case 'F': letras[5]++;break;
            case 'G': letras[6]++;break;
            case 'H': letras[7]++;break;
            case 'I': letras[8]++;break;
            case 'J': letras[9]++;break;
            case 'K': letras[10]++;break;
            case 'L': letras[11]++;break;
            case 'M': letras[12]++;break;
            case 'N': letras[13]++;break;
            case 'O': letras[14]++;break;
            case 'P': letras[15]++;break;
            case 'Q': letras[16]++;break;
            case 'R': letras[17]++;break;
            case 'S': letras[18]++;break;
            case 'T': letras[19]++;break;
            case 'U': letras[20]++;break;
            case 'V': letras[21]++;break;
            case 'W': letras[22]++;break;
            case 'X': letras[23]++;break;
            case 'Y': letras[24]++;break;
            case 'Z': letras[25]++;break;
            }
    }
    printf("Letras:\n");
    printf("A: %d\n", letras[0]);
    printf("B: %d\n", letras[1]);
    printf("C: %d\n", letras[2]);
    printf("D: %d\n", letras[3]);
    printf("E: %d\n", letras[4]);
    printf("F: %d\n", letras[5]);
    printf("G: %d\n", letras[6]);
    printf("H: %d\n", letras[7]);
    printf("I: %d\n", letras[8]);
    printf("J: %d\n", letras[9]);
    printf("K: %d\n", letras[10]);
    printf("L: %d\n", letras[11]);
    printf("M: %d\n", letras[12]);
    printf("N: %d\n", letras[13]);
    printf("O: %d\n", letras[14]);
    printf("P: %d\n", letras[15]);
    printf("Q: %d\n", letras[16]);
    printf("R: %d\n", letras[17]);
    printf("S: %d\n", letras[18]);
    printf("T: %d\n", letras[19]);
    printf("U: %d\n", letras[20]);
    printf("V: %d\n", letras[21]);
    printf("W: %d\n", letras[22]);
    printf("X: %d\n", letras[23]);
    printf("Y: %d\n", letras[24]);
    printf("Z: %d\n", letras[25]);

    fclose(arq);
    return 0;
}
