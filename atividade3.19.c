/*
Escreva um programa que lê uma série de números, imprimindo a média dos números que
já entraram. O programa inicia perguntando quantos números serão digitados mas não
pode armazenar os valores que vão chegando. Por exemplo:
Número Média
2 2
5 3.5
7 4.666
2 4
Depois adapte seu programa para não perguntar mais quantos números serão digitados,
faça ele ler números até que seja dado um número negativo.
*/
#include <stdio.h>

void main () {
    //int n = 0;

    //printf("Quantos numeros serao digitados: ");
   // scanf("%d",&n);
    float soma = 0;
    for (int i = 1;i;i++){
        int input = 0 ; 
        printf("Digite o número %d: ",i);
        scanf("%d",&input);
        if (input < 0) break; // break quando for menor q 0
        soma += input;
        printf("%.3f\n",(soma/i));
    }
}