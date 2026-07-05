/*
Escreva um programa que imprime uma tabuada até o 10 × 10
*/

#include <stdio.h>

void main (){
    for (int z = 1; z <=10;z++){
        for (int i=0;i<=10;i++){
            printf("%d x %d --> %d\n",z,i,z*i);
        }
    }

}