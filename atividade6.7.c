/*
6.7 Escreva uma função void contaTriplo( char vet[], int *vog, int *cons, int *simb)
que recebe um vetor de caracteres (terminado por '\0') e deixa escrito em vog, cons e
simb o número de vogais, consoantes e símbolos (não-vogais nem consoantes) que estão
no vetor.
*/
#include <stdio.h>

void contaTriplo( char vet[], int *vog,int *cons, int *simb){
    for (int i = 0; vet[i] != '\0';i++){
        if ((vet[i] > 64 && vet [i] <91) || (vet[i] > 96 && vet [i] <123)){
            if (vet[i] == 'a' || vet[i] == 'e' || vet[i] == 'i' || vet[i] == 'o' || vet[i] == 'u' || vet[i] == 'A' || vet[i] == 'E' || vet[i] == 'I' || vet[i] == 'O' || vet[i] == 'U'){
                *vog = *vog +1;
            }
            else *cons = *cons + 1;
        }
        else *simb = *simb + 1;
    }
}

void main () {
    int vog = 0;
    int cons = 0;
    int simb = 0;
    char vet [1000] = {"Oi."};

    contaTriplo(vet,&vog,&cons,&simb);
    printf("vog = %d cons = %d simb = %d",vog,cons,simb);

}