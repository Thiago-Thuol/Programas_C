/*
 Escreva um programa que recebe um inteiro n e imprime a soma dos dígitos de n
*/

#include <stdio.h>

void main () {
    int n = 0;
    printf("digite um numero");
    scanf ("%d",&n); 

    int soma =0, atual =0;

    while (n > 0){
        atual = n % 10;
        printf("%d + ",atual);
        soma += atual;
        n /= 10;
    }
    printf("soma = %d",soma);
}