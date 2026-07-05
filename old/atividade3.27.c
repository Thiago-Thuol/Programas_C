/*
Um dos métodos que determina raizes cúbicas de N é o método de Joãozinho, bastante
semelhante ao de Heron. Iniciando com k = 1, o método segue a regra
k =
2k + N/k2
3
.
Escreva um programa que calcula raizes cúbicas com este algoritmo. Adapte seu programa
para que ele conrme os resultados!
*/

#include <stdio.h>

void main () {

    int n =0 ;
    double k = 1;

    printf("escreva o numero q deseja descobrir a raiz : ");
    scanf("%d",&n);

    for (int q = 0;q < 12;q++){
            k = ((k*2) + (n/(k*k)))/3;
        }
    printf("raiz = %.20lf",k);
}