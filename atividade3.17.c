/*
 A soma
1 +1/2+1/3+1/4+ . . . +1/n
cresce devagar, mas tem valores cada vez maiores e vai para ∞ à medida que n cresce.
Escreva um programa que recebe um valor de n e apresenta o valor da soma ate incluir
1/n.
*/
#include <stdio.h>

void main () {
    int n = 0;
    float soma= 0;

    printf("escreva um numero n: ");
    scanf("%d",&n);

    for (float i = 1 ; i != n;i++){
        soma += 1/i;
    }
    printf("%.2f",soma);

}