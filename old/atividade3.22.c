/*
 Escreva um algoritmo para receber um inteiro n e escrever o valor de n convertido para
a base 2. Depois disso mude seu programa para também receber uma base b e escrever o
valor de n convertido para a base b. Note que b deve ser maior do que 1 (embora existam
também conversões para bases negativas)
*/

#include <stdio.h>

void main () {
    int n = 0, base = 0;

    printf("Digite um numero: ");
    scanf("%d",&n);

    printf("Digite a base: ");
    scanf("%d",&base);

    int tempcomp = 1,final = 0,times1 = 0;

    while(tempcomp != n) {
        tempcomp = 1;
        final ++;
        for (int z = 0;z < final;z++){
            tempcomp *= base;
        }

        if (tempcomp > n)
        {times1 = n - (tempcomp/base); tempcomp = 9; final--;}
            
        }
    printf("2 ^%d",final);
    while (times1 > 0){times1--;printf("+2⁰");}
    printf("\n");
}