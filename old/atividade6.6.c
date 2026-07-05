/*
6.6 Escreva uma função float valor( char vet[] ) que recebe um vetor de caracteres
terminado por '\0' que representa um número (como por exemplo 3.14159) e retorna
um oat com o mesmo valor.
*/

#include <stdio.h>

int ehNumero ( char vet[] ){
    int num = 1;
    int pont = 0;
    for (int i = 0;vet[i] != '\0';i++){
        if (vet[i] == '0' || vet[i] == '1' || vet[i] == '2' || vet[i] == '3' || vet[i] == '4' || vet[i] == '5' || vet[i] == '6' || vet[i] == '7' || vet[i] == '8' || vet[i] == '9' || vet[i] == '.');
        else num = 0;
        if (vet [i] == '.') pont ++;
    }
    printf("%d\n",pont);
    printf("%d\n",num);
    if (pont > 1 || num == 0 ) return 0;
    else return 1;
}
float valor ( char vet [] ){
    float valor = 0;
    int temfloat = 0;
    int size = 0;
    for (int i = 0 ; vet[i] != '\0';i++){
        if (temfloat == 0 && vet[i]!= '.'){
            valor *=10;
            valor += vet[i]-48;
        }
        if (vet[i]== '.'){
            temfloat = 1;
        }
        size++;
    }
    float valorfloat = 0;
    if (temfloat){
        for (int i = size-1 ; vet[i] != '.';i--){
            valorfloat += vet[i]-48;
            valorfloat /= 10;
        }
        valorfloat/10;
    }
    return (valor+valorfloat);
}
    


void main () {

    char numero [10000] = {0};
    scanf ("%s",numero);
    if (ehNumero(numero)){
        printf ("%.3f",valor(numero));
    }
    else printf ("nao e numero");
}