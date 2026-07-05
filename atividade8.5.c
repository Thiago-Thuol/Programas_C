/*
8.5 Escreva um programa que lê dois arquivos A e B e escreve um arquivo C, onde é colocada
uma letra de A e depois uma de B e assim por diante. Então depois de ler A="aboboras"
e B="caramelo" o arquivo C será "acbaorbaomrealso". Faça isso até que o arquivo mais
curto termine.
*/

#include <stdio.h>
#include <stdlib.h>

void main () {
    FILE * write = fopen ("arqc.txt","w");
    FILE * arq1 = fopen ("palavras.txt","r");
    FILE * arq2 = fopen ("palavras2.txt","r");

    char test[30] = {0};
    char test1[30] = {0};
    char new_word[30] = {0};

    while ( fscanf(arq1,"%s ",test) == 1 && fscanf(arq2,"%s ", test1 )==1 ){
        int index1 = 0 ;
        int index2 = 0 ; 
        printf ("%s %s",test,test1);
        while ( test[index1] != '\0' || test1[index2] != '\0'){
                
            new_word[index1+index2] = test[index1];
            index1 ++;
            new_word[index1+index2] = test1[index2];
            index2 ++;
        }
        new_word[index1+index2] = '\0';
        fprintf (write,"%s\n",new_word);
    }
    fclose (write);
    fclose (arq1);
    fclose (arq2);
}