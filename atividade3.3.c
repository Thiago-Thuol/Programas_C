/*
Escreva um programa para calcular a soma da progressão aritmética que inicia em a, tem
razão b e com n termos:
a + (a + b) + (a + 2b) + (a + 3b) +
*/

#include <stdio.h>

void main () {

    int a,b,n, PRA = 0;

    printf("PRA digite A B e N");

    scanf("%d %d %d",&a,&b,&n);

    int i =0;

    while (i <= n){
        PRA = a+(b*i);
        i ++;
    }
    printf("resultado : %d",PRA);

}