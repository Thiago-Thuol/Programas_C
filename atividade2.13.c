//Escreva um programa que é capaz de escrever os dígitos de um número de até três dígitos.
//Por exemplo, ao receber 358 seu programa deve escrever três cinco oito

#include <stdio.h>

void main (){
    int numero_inp;

    printf("Digite um numero de tres digitos ou menos\n");
    scanf("%d",&numero_inp);

    printf("%d\n",numero_inp/100);

    printf("%d\n",numero_inp/10-(numero_inp/100)*10);
    
    printf("%d\n",numero_inp-(numero_inp/10)*10);
}