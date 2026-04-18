/*
 Escreva um programa que recebe um número n e depois aplica estar regras:
(a) Se n for par, ele é transformado em n/2
(b) Se n for ímpar ele é transformado em 3n + 1
Faça isso até n virar 1 e vá imprimindo os números por onde ele passa. Ao nal informe
quantas transformações foram feitas até ele virar 1.
*/

#include <stdio.h>

void main () {
    int n =0 ;

    printf ("Digite o numero");
    scanf("%d",&n);

    int i = 0;

    while (n != 1){
        if (n%2 == 0) n/= 2;
        else n = 3 * n + 1;
        printf("%d\n",n);
        i++;
    }
    printf("final %d ciclos %d\n",n,i);


}