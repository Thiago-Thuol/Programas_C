/*
 Escreva um programa que examina todos os números entre 1 milhão e 10 milhões e conta
quantos números não tem 33 dentro deles.
*/

#include <stdio.h>

void main () {
    
    int m = 1000000 , mm  = 100000000;

    int soma =0,prev = 0, atual =0, indice = m;


    while (mm >= m){
        indice = m ;
        while (indice > 0){
            prev = atual;
            atual = indice % 10;
            if (prev == 3 && atual == 3) soma++;
            indice /= 10;
        }
        m ++;
    }
    if (soma>1)printf("tem 33");
    printf("\nsoma = %d",soma);
}