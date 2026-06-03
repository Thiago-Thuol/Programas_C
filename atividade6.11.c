/*
6.11 Escreva uma função que recebe um inteiro n e devolve o fatorial de n.
*/
#include <stdio.h>
int fatorial ( int n){
    int fat = 1;
    for (int i =1 ; i <=n;i++){
        fat *= i;
    }
    return fat;
}

void main () {
    int numero = 0;
    scanf ("%d",&numero);
    printf ("fatorial de %d = %d",numero,fatorial(numero));
}