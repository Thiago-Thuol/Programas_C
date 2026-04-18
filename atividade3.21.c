/*
Escreva um programa que determina o maior divisor comum de dois números a e b, usando
o algoritmo de Euclides, que na versão abaixo deixa o valor do maior divisor comum em
a.
enquanto b for diferente de zero
tmp = a;
a = b;
b = tmp % b;
print a
*/

#include <stdio.h>

void main () {
    int a = 0,b = 0 ;

    printf("Digite os numeros : ");
    scanf("%d %d",&a,&b);

    while (b != 0){
        int tmp = a;
        a = b;
        b = tmp % b;
        printf("%d\n",a);
    }
}