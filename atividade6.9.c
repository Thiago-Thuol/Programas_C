/*
6.9 Escreva uma função void mataVogais( char vet[] ) que recebe um vetor de caracteres (terminado por '\0') e retira as vogais do vetor: Papagaio azul e verde deve ser
transformado em Ppg zl vrd.
*/
#include <stdio.h>
void mataVogais (char vet[]){
    for (int i = 0 ; vet[i] != '\0';i++){
        if (vet[i] == 'a' || vet[i] == 'e' || vet[i] == 'i' || vet[i] == 'o' || vet[i] == 'u' || vet[i] == 'A' || vet[i] == 'E' || vet[i] == 'I' || vet[i] == 'O' || vet[i] == 'U'){
                for (int j = i;vet[j] != '\0';j++){
                    vet[j] = vet [j+1];
                }
        }
    }
}

void main () {
    char vet [1000] = {"Papagaio azul e verde"};
    mataVogais(vet);
    printf("%s",vet);

}