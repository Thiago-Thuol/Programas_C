/*
6.22 Escreva uma função que recebe um inteiro n e retorna o número reverso de n. Por exemplo,
se a função receber o número 123 ela deve retornar o inteiro 321. Sua função não deve
dar certo apenas com números de três dígitos, ela deve ser genérica
*/
#include <stdio.h>

int inverte( int n ){
    int inverted = 0;
    while (n != 0){
        inverted = inverted*10 + n%10;
        n /= 10;
    }
    return inverted;
}
void main () {
    int numeber = 123;
    printf("%d",inverte(numeber));
}