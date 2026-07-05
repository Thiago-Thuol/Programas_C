/*
Escreva um algoritmo que recebe um vetor de 15 elementos contendo números positivos e
negativos e imprime os primeiros 4 números positivos no vetor. Os números devem ser
impressos na mesma ordem em que entraram no vetor.
*/

#include <stdio.h>

void main () {
    int vetor [15] = {1,2,-4,-6,3,-6,8,3,2-7,6,5,4,2,7};


    int flag = 0;

    printf("[ ");
    for (int i =0;i<15;i++){
        if (vetor[i] >= 0) {flag ++;printf("%d ",vetor[i]);}
        if (flag==4) break;
    }
    printf("]");
}