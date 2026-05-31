/*
 Escreva um programa que recebe um vetor de 20 elementos e depois descobre a maior
sequencia de números ímpares um ao lado do outro que estão dentro do vetor.
*/

#include <stdio.h>

void main () {
    int numeros [20] = {1,2,3,4,5,5,6,7,8,9,10,11,11,11,12,13,14,15,16,20};
    int sequencia = 0;

    for (int n =0,temp = 0;n < 20;n++){
        if (numeros[n] % 2 != 0) temp ++;
        else {if (temp > sequencia) sequencia = temp;
                temp =0;}  
    }
    printf("%d",sequencia);


}