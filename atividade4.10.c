/*
Escreva um programa que recebe um vetor (por exemplo [2, 3, 4, 7, 1] ) e substitui o
elemento da posição i pelo produto de todos os outros elementos do vetor. Para o
exemplo, o resultado seria [84, 56, 42, 168].
*/

#include <stdio.h>

void main () {
    int vetor [5] = {2,3,4,7,1};
    
    printf ("[ ");
    for (int i = 0,soma = 1;i<5;i++,soma=1){
        for (int z =0;z<5;z++){
            if (z != i) soma *= vetor[z]; 
        }
        printf ("%d ",soma);
    }
    printf ("]");

}
