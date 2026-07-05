/*
Escreva um programa que recebe um valor inteiro n e diz se este valor é um número
primo. Se não for, o programa apresenta uma lista dos números que dividem n.
*/
#include <stdio.h>

char primo () {

    long long int n = 0, notprim = 1;

    printf("Digite um número: ");
    scanf("%lld",&n);

    for (long long int i = 2; i < (n/2); i++){
        if (n%i == 0) notprim = 0;
    }
    if (notprim) return 'Y';
    else return 'N';
}   
void main (){
    printf ("%c",primo());
}

