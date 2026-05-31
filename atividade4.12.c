/*
 Escreva um algoritmo que faz a leitura de 15 números inteiros e coloca-os em um vetor,
mas impedindo que valores repetidos entrem no vetor. Seu programa deve terminar
apenas quando o vetor estiver cheio.
*/

#include <stdio.h>

void main () {
    int vetor [15];

    for (int i =0,flag =1;i<15;){
        flag = 1;
        printf("Dgite um Numero %d: ",i+1);
        scanf("%d",&vetor[i]);
        for (int z =0;z<i;z++){
            if (vetor [i] == vetor[z]) {flag =0;break;}
        }
        if (flag) i++;
        else printf ("Numero repetido\n");
    }


    printf("[ ");
    for (int i =0;i<15;i++){
        printf("%d ",vetor[i]);
    }
    printf ("]");
}