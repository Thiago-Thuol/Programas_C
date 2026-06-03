/*
6.24 Escreva uma função numdiv(int n) que recebe um inteiro n e retorna o número de
divisores de n. Depois escreva uma função ehprimo(int n) que verifica se n é primo e
imprime uma mensagem na tela dizendo se é ou não é.
*/
#include <stdio.h>

int numdiv(int  n){
    int res = 0;
    for ( int  i = n ; i > 0 ; i--){

        if (n % i == 0) res ++;
    }
    return res;
}
int ehprimo(int n){
    if (numdiv(n) == 2) return 1;
    return 0;
}

void main () {
    if(ehprimo(11))printf("E primo");
    else printf("nao E primo");
}