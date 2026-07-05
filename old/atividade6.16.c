/*
6.16 Escreva uma função que recebe inteiros m e n e determina o maior divisor comum de m
e n. Sugestão: use o algoritmo de Euclides que está em 3.22 para isso.
*/
#include <stdio.h>

int mdvcom ( int n,int m){
    int pivot = n;
    if (m > n) pivot = m;
    int mdiv = 0;
    for (int i = pivot;;i-- ){
        mdiv = i;
        if (m%i == 0 && n%i == 0) return mdiv;
    }
}
void main () {
    int n = 4,m = 2;
    printf("%d",mdvcom(n,m));
}