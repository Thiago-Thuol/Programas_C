/*
6.1 Escreva uma função que recebe um inteiro n e retorna n/2. Depois escreva uma função
que recebe um inteiro n e retorna 3n + 1. Escreva uma nova função que usa as funções
que você já tem. A nova função recebe um número n e se ele for ímpar retorna 3n + 1, se
for par retorna n/2.
*/

#include <stdio.h>
int par (int n){
    return (n/2);
}
int impar (int n){
    return (3*n + 1);
}

int action (int n){
    if (n%2 == 0) return par(n);
    else return impar(n);
}

void main () {
    int n1 = 0;
    scanf ("%d",&n1);
    printf ("%d",action(n1));

}