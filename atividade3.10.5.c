/*
Depois de fazer isso, altere seu programa para achar a soma de todos os números que
foram impressos.
E depois disso, mude seu programa para imprimir a soma de cada linha depois dela ser
impressa.
*/

#include <stdio.h>

void main (){
    int layer = 10, soma = 0;


    int i = 0 ;


    while ( i < layer){
        i ++;
        soma += i*i;
        int t = i;
        while (0<t){
            printf("%d",i);
            t--;
        }
        printf("+ %d",i*i);
        printf("\n");
        
    }
    printf("soma %d",soma);

}