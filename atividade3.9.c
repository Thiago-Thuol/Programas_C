/*
Escreva um programa que recebe um inteiro n e diz se os dígitos de n estão em ordem
crescente ou não.
*/

#include <stdio.h>

void main () {
    int n = 0;

    printf("Digite n : ");
    scanf("%d",&n);

    int  atu = n % 10, ant = ((n % 100) - (n % 10))/10;

    while (n > 0){
        
        if (atu >= ant){

            atu = n % 10;
            ant = ((n % 100) - (n % 10))/10;
            n /= 10;

            }
        else {printf("Não estão em ordem crescente");break;}
    }
    if (ant == 0) printf("Estão em ordem crescente");
}
