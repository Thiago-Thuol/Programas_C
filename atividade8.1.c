/*
8.1 Escreva um programa que lê um arquivo contendo inteiros e escreve dois arquivos, um
contendo os números ímpares e outro contendo os números pares.
*/

#include <stdio.h>
#include <stdlib.h>

void main () {
    FILE * read = fopen ("arquivo_legal.txt","r");
    FILE * w_i = fopen ("arquivo_impares.txt","w");
    FILE * w_p = fopen ("arquivo_pares.txt","w");

    int temp = 0;
    while ( fscanf (read,"%d",&temp) == 1){
        if (temp%2==0) fprintf(w_p,"%d\n",temp);
        else fprintf(w_i,"%d\n",temp);
        temp = 0;
    }
    fclose (read);
    fclose (w_i);
    fclose (w_p);
}