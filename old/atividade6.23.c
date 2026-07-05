/*
6.23 Escreva um método pow(int x, int n) que recebe x e n e calcula x
n
. Seu método
também deve funcionar corretamente quando n = 0 ou n = 1. Obviamente você não deve
usar a função que já existe na sua linguagem de programação.

*/
#include <stdio.h>

int pow ( int x, int n){
    int result =0; 
    for (;n > 1;n--){
        result += x*x;
    }
    return result;
}

void main () {
    int a =4 , n=2;
    printf ("%d",pow(a,n));
}