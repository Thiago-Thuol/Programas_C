/*
6.26 Escreva uma função que determina raizes quadradas, usando o método do problema 3.27.
Esta função recebe um número x e retorna (evidentemente) √
x
*/
#include <stdio.h>

double raizes ( int n){
    double res = 1;
     for (int q = 0;q < 12;q++){
            res = (res + (n/res))/2;
        }
    return res;
}
void main () {
    printf("raiz = %.20lf",raizes(9));
}