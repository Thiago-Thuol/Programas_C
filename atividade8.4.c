/*
8.4 Escreva um programa que lê dois arquivos A e B e informa se eles são exatamente iguais
ou (se não forem) informa o primeiro caractere em que eles fcaram diferentes. Informe
também em que linha dos arquivos isso aconteceu
*/
#include <stdio.h>
#include <stdlib.h>

void main () {
    FILE * arq1 = fopen ("numeros.txt","r");
    FILE * arq2 = fopen ("numeros2.txt","r");


    int temp1 = 0;
    int temp2 = 0;
    int linha = 0;
    int iguais = 1;
    while (fscanf (arq1,"%d",&temp1) == 1 && fscanf (arq2,"%d",&temp2)== 1){
        linha++;
        if (temp1 == temp2);
        else {printf("Diferente na linha %d",linha);iguais=0;break;}
    }
    if (iguais) printf ("são iguais");
    fclose(arq1);
    fclose(arq2);
}