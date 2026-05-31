/*
6.4 Escreva uma função que recebe um vetor de caracteres (terminado por '\0') e devolve o
número de vogais que estão no vetor.
*/

#include <stdio.h>

int vogais (char vetor[]) {
    int count = 0;
    for (int i = 0;vetor [i] != '\0';i++){
        if (vetor[i] == 'a' || vetor[i] == 'e' || vetor[i] == 'i' || vetor[i] == 'o' || vetor[i] == 'u') count++;
        if (vetor[i] == 'A' || vetor[i] == 'E' || vetor[i] == 'I' || vetor[i] == 'O' || vetor[i] == 'U') count++;
    }
    return count;
}

void main () {
    char palavra [10000] = {0};
    scanf("%s",palavra);
    printf ("vogais %d",vogais(palavra));
}