/*
6.8 Escreva uma função void viraFrase( char vet[] ) que recebe um vetor de caracteres
(terminado por '\0') e inverte o vetor: Papagaio azul e verde deve ser transformado em
edrev e luza oiagapaP.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void viraFrase ( char vet[] ){
    int size = 0;
    for (int i = 0; vet[i] != '\0';i++){
        size ++;
    }
    size --;
    printf ("size = %d",size);
    int moves = size;
    int temp = 0;
    for (int i =0 ; i <moves/2; i ++ ){
        temp = vet[size-i];
        vet[size-i] = vet[i];
        vet[i] = temp;
    }
    printf("%s",vet);
}

void main () {
    char frase [1000] = {0};
    fgets(frase,sizeof(frase),stdin);
    viraFrase(frase);
}