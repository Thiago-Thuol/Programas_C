/*
4.4 Escreva um programa que recebe um vetor de 20 elementos e depois descobre se existem
3 elementos dentro dele que somados dão um outro elemento do vetor.
*/

#include <stdio.h>

void main () {
    int numeros [20] = {8,7,5,6,7,9,3,5,7,5,6,2,4,7,4,8,6,3,9,1};

    for (int i = 0 ;i<20-2;i++){
        for (int j =i+1;j<20-2;j++){
            for (int z =j+1,t= 0;z<20-2;z++){
                t =  (numeros[i] + numeros[j] + numeros[z]);
                for (int k = 0 ;k<20-2;k++){
                    if (t == numeros[k]) printf(" %d + %d + %d = %d tem o mesmo valor do elemento [%d] = %d\n",numeros[i] , numeros[j] , numeros[z],t,k, numeros[k]);
                }
            }

        }
    }

}
