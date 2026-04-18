/*
Escreva um programa que examina um número dado pelo usuário e diz se há um 33
dentro dele
*/

#include <stdio.h>

void main () {
    int n = 0;
    printf("digite um numero");
    scanf ("%d",&n); 

    int soma =0,prev = 0, atual =0;

    while (n > 0){
        prev = atual;
        atual = n % 10;
        if (prev == 3 && atual == 3) soma++;
        n /= 10;
    }
    if (soma>1)printf("tem 33");
    printf("\nsoma = %d",soma);
}