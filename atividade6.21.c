/*
6.21 Descubra o que faz a função abaixo. Para testar, use números positivos
*/

#include <stdio.h>

int mistery( int a, int b ) {
int r = 0;
while ( b > 0 ) {
r += (b % 2) * a;
b /= 2;
a *= 2;
}
return r;
}

void main () {
    int a = 6 , b = 7;
    printf("%d",mistery(a,b));
}