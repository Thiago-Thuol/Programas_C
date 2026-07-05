/*
6.13 Faça uma função que recebe uma matriz A5×5 e dois inteiros i e j, trocando as linhas i e
j da matriz. Imprima o resultado e conforme
*/
#include <stdio.h>

void printmatrix ( int m[5][5] ){
    for (int c = 0;c <5;c++){
        for (int l = 0;l < 5;l++){
            printf ("%d ",m [c][l]);
        }
        printf("\n");
    }
}
void trocatroca( int m[5][5],int i,int j ){
    int temp =0;
    for (int c = 0;c <=5;c++){
            temp = m[c][i];
            m[c][i] = m[c][j];
            m[c][j] = temp;
        }
    }


void main () {
        int matriz[5][5] = {
        { 1,  2,  3,  4,  5},
        { 6,  7,  8,  9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}
    };
    int i = 0;
    int j = 4;
    printmatrix(matriz);
    trocatroca(matriz,i,j);
    printmatrix(matriz);
}

