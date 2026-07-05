/*
 Escreva um programa que recebe 10 inteiros fornecidos pelo usuário e depois informa a
média dos valores pares e a média dos valores ímpares
*/

#include <stdio.h>

void main (){
    int i = 10; 
    float soma =0;
    while (i > 0){

        int temp = 0;

        printf("\ndigite o Numero %d ",i);
        scanf ("%d",&temp);

        i--;

        soma += temp;
    }
    soma /= 10;
    printf ("Média %.2f",soma);

}