/*
6.15 Escreva uma função que recebe um inteiro n e escreve n em binário. Depois altere a
função para escrever n em uma base b que também é enviada para a função.
*/
#include <stdio.h>

int bin ( int n ,int base){
    if (n < base) return n;
    if (n%base == 0) {return bin(n/base,base)*10+0;}
    else return bin(n/base,base)*10+n%base;
    }

void main (){
    int numero = 1023;
    int base = 2;
    printf ("%d",bin(numero,base));

}