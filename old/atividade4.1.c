/*
4.1 Escreva um programa que recebe um vetor de 20 elementos e depois descobre se existem
2 elementos dentro dele que somados dão 15.
*/

#include <stdio.h>

void main () {
    int elementos [20] = {1,2,3,4,5,6,7,8,9,10,12,12,3,4,55,6,3,8,30,12};

    for (int i = 0;i<20;i++){
        for (int j = i+1;j<20;j++){
            if (i == j);
            else if ((elementos[i]+elementos[j]) == 15) printf("%d + %d = 15\n",elementos[i],elementos[j]);
        }
    }

}