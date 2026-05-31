/*
 Escreva um algoritmo que recebe dois vetores A e B com 10 e 15 elementos respectivamente e encontra o maior elemento que está contido ao mesmo tempo nos dois vetores,
ou imprime uma mensagem se não houver nenhum elemento em comum.
*/

#include <stdio.h>

void main () {
    
    int VA [10] = {1,2,3,4,5,11,7,8,9,10};
    int VB [15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

    int maoirc = 0;
    for (int a =0;a<10;a++){
        for (int b=0;b<15;b++){
            if (VA[a]==VB[b] && VA[a] > maoirc) maoirc = VA[a];
        }
    }
    printf("MAIOR COMUM = %d",maoirc);
}