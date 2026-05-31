/*
6.2 Escreva um programa que recebe um inteiro e usa a função do exercício anterior repetidas
vezes até que o resultado seja 1, imprimindo os números que vão sendo obtidos.
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
    int n1 = 0,result= 0;
    scanf ("%d",&n1);
    result = action(n1);
    printf("result = %d\n",result);
    while (result != 1) {
        result = action (result);
        printf("result = %d\n",result);
    }
}


