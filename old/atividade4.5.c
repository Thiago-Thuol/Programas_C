/*4.5 Escreva um programa que recebe um vetor de 20 elementos e depois descobre quais os 3
elementos do vetor que estão um ao lado do outro e tem a maior soma*/

#include <stdio.h>

void main () {

    int numeros [20] = {8,7,5,6,7,9,3,5,7,5,6,2,4,7,4,8,6,3,9,1};

    int maior = 0; 

    for (int i =0, t = 0;i<20-2;i++){
        t = (numeros[i]+numeros[i+1]+numeros[i+2]);
        if (maior < t) {maior = t; printf("%d %d %d = %d\n",numeros[i],numeros[i+1],numeros[i+2],numeros[i]+numeros[i+1]+numeros[i+2]);}
    }
    printf("%d",maior);
}