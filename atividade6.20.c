/*
6.20 Escreva uma função que recebe um inteiro n e informa quantos bits são 1 quando n é
escrito em binário.
*/
#include <stdio.h>

int bin ( int n ,int base){
    if (n < base) return n;
    if (n%base == 0) {return bin(n/base,base)*10+0;}
    else return bin(n/base,base)*10+n%base;
    }
int bincount (int n ){
    n = bin (n,2);
    int count =0;
    for (int i = 0; n != 0;i++){
        if (n%10 == 1) count ++;
        n /= 10;
    }
    return count;
}
void main () {
    int numero = 10;
    printf("%d",bincount(numero));
}