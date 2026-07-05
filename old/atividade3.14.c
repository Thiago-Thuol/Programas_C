/*
3.14 Escreva um programa para calcular a soma abaixo com 10, 20 e 30 termos, sem usar a
função pow():
*/

#include <stdio.h>

void main () {
    float count = 0;
    for (float i = 1 ; i <= 30; i++){
        if (i == 10) printf("10 -- %.2f\n",count);
        if (i == 20) printf("20 -- %.2f\n",count);
        if (i == 30) printf("30 -- %.2f\n",count);
        count += 1/i;
    }

}