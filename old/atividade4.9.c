/*
Escreva um programa que recebe um vetor de 20 elementos e depois descobre o número
que aparece mais vezes no vetor
*/

#include <stdio.h>

void main () {
    int numero [20] = {1,1,1,14,7,8,9,0,7,6,5,5,5,5,4,4,3,3,3,1};
    int sequencia = 0;

    for (int n =0,temp = 0;n < 20;n++){
        temp = 0;
        for (int z =0;z<20;z++){
            if (numero[n] == numero[z]) temp++;
        }
        if (sequencia < temp) sequencia = temp;
    }
    printf("%d",sequencia);

}

