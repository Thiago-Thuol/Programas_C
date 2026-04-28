/*
4.0 Escreva um programa que recebe um vetor de 10 números inteiros e depois cumpre as
seguintes tarefas:
12
(a) encontra e imprime o menor e o maior números do vetor.
(b) escreve o vetor na ordem inversa.
(c) calcula a média dos elementos do vetor. Depois mude o seu programa para também
imprimir o elemento do vetor que tem o valor mais próximo da média.
(d) examina o vetor para ver se há elementos repetidos, imprimindo-os se houver.
*/
#include <stdio.h>

void main () {
    int notas [10] = {3,6,10,3,6,6,3,10,10,7};

    int menor = notas[0];

    int maior = notas[0];

    float  media = notas[0];

    for (int i =1;i<8;i++){
        media += notas[i];
        if (menor > notas[i]) menor = notas[i];
        if (maior < notas[i]) maior = notas[i];
    }

    media /= 8;
    printf ("Menor %d\n",menor);
    printf ("Maior %d\n",maior);
    printf ("Media %.2f\n",media);


    printf("[ ");
    for (int i =0;i<8;i++){
        printf("%d ",notas[8-i]);
    }
    printf("]");

    int maisperto =  notas[0];
    float diferenciado = maisperto - media;

    for (int i =1;i<8;i++){
        diferenciado = maisperto - media;
        if (diferenciado < 0) diferenciado *= -1;
        float diferencat = notas[i]-media;
        if (diferencat < 0) diferencat *= -1;
        if (diferenciado > diferencat) maisperto = notas[i];
    }


    printf("Mais perto da media = %d",maisperto);


    


}