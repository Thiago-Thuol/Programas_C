/*
8.6 Faça um programa que lê um arquivo produzido pelo exercício 8.5 e traz de volta os dois
arquivos iniciais.
*/
#include <stdio.h>
#include <stdlib.h>

void main (){
    FILE * descr_1 = fopen ("descr_1.txt","w");
    FILE * descr_2 = fopen ("descr_2.txt","w");
    FILE * read = fopen ("arqc.txt","r");

    char codigo  [30] = {0};
    char dec_1 [30] = {0};
    char dec_2 [30] = {0};

    while (fscanf(read,"%s",codigo) == 1){
        printf("%s",codigo);
        int index_tot = 0;
        int index1 = 0;
        int index2 = 0;
        while(codigo[index_tot] != '\0'){
            if (index_tot % 2 == 0) {dec_1[index1] = codigo[index_tot];index1 ++;}
            else {dec_2[index2] = codigo[index_tot];index2++;}
            index_tot ++;
        }
        dec_1[index1] = '\0';
        dec_2[index2] = '\0';
        fprintf (descr_1,"%s\n",dec_1);
        fprintf (descr_2,"%s\n",dec_2);
    }
    fclose(descr_1);
    fclose(descr_2);
    fclose(read);
}