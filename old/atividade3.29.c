/*
Escreva um programa que recebe um número x < 1 e apresenta uma soma de frações
que aproxima x. Por exemplo, se recebermos x = 0.543 uma soma de frações que pode
aproximar x seria
x ≈ 1/2 + 1/24 + 1/750 = 0.5429999999999
Seu programa deve ter algum tipo de controle para o grau de aproximação desejado pelo
usuário.
*/

#include <stdio.h>

void main () {

    float x =1;

    while (x >= 1){
        printf("Digite o número: ");
        scanf("%f",&x);
        if (x < 1) break;
        else printf("\nNumero invalido\n");
    }

    int aprox = 3;
    float pesq = 0;
    float div = 2;

    for (int i =1;i <= aprox;){
        if ((pesq + (1/div)) > x) {div ++ ;}

        else {
            if ((pesq + (1/div)) == x) {printf ("1/%.f",div);break;}
            pesq += (1/div);
            i ++;
            printf ("1/%.f+",div);
        }
    } 
}