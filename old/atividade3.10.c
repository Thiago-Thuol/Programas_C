/*
Escreva um programa que recebe um valor n e imprime na tela
1
2 2
3 3 3
4 4 4 4
....
n n n n n n n
*/

#include <stdio.h>

void main (){
    int layer = 10;


    int i = 0 ;


    while ( i < layer){
        i ++;
        int t = i;
        while (0<t){
            printf("%d",i);
            t--;
        }
        printf("\n");
        
    }
}