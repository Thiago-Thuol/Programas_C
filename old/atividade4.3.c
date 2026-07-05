/*
4.3 Escreva um programa que recebe um vetor de 20 elementos e depois descobre se existem
2 elementos dentro dele que somados dão um outro elemento do vetor.
*/

#include <stdio.h>


void main () {
    int elementos [20] = {60,40,70,60,60,60,80,60,40,60,60,110,60,60,60,60,60,60,60,12};

    for (int i = 0;i<20;i++){
        for (int j = i+1;j<20;j++){
            for (int itens = 0;itens<20;itens++)
            if (i == j && j == itens && i == itens);
            else if ((elementos[i]+elementos[j]) == elementos[itens]) printf("%d + %d = %d\n",elementos[i],elementos[j],elementos [itens]);
        }
    }

}