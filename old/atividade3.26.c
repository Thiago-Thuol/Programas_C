/*
Um método para cálculo de raizes quadradas de um número N já era conhecido pelos
babilônios em. . . bom, há muito tempo atrás. (Este método também é conhecido como
método de Heron, um matemático grego que o descreveu 20 séculos depois dos babilônios,
perto do ano 50 DC.) Começando de um valor inicial k (geralmente valendo um) os
babilônios geravam um novo valor de k de acordo com a regra:
k = 2k + N/k
.   --------
       2
recalculando k várias vezes. À medida que o processo é repetido, os novos valores de k se
aproximam cada vez mais da raiz de N. Escreva um programa que recebe o valor de N e
imprime os primeiros doze valores obtidos com esta fórmula, testando-os para ver se eles
realmente se aproximam da raiz de N.
*/

#include <stdio.h>

void main () {

    int n =0 ;
    double k = 1;

    printf("escreva o numero q deseja descobrir a raiz : ");
    scanf("%d",&n);

    for (int i = n; i%2 == 0;i/=2){
        for (int q = 0;q < 12;q++){
            k = (k + (n/k))/2;
        }
    }
    printf("raiz = %.20lf",k);
}