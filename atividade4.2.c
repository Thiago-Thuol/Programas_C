/*
4.2 Escreva um programa que recebe um vetor de 20 elementos e depois reverte o vetor: se
o vetor era {1, 2, 3, 4, . . . , 20} ele passa a ser {20, . . . , 4, 3, 2, 1}. Não use outro vetor
para ajudar!
*/

#include <stdio.h>

void main () {

    int lista [20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};

    int temp = 0;

    for (int j = 0;j<20-1;j++){
        for (int i = 0;i<20-1-j;i++){
            temp = lista[i+1];
            lista [i+1] = lista [i];
            lista [i] = temp;
        }
    }

    for (int i =0;i<20;i++){
        printf("%d ",lista[i]);
    }
}
