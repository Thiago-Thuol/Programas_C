/*
7.4 Crie uma struct que representa os dados de um terreno retangular. Depois de escolher
como representar o terreno, declare um vetor de 100 terrenos e apresente algoritmos para:
(a) Listar os terrenos que são quadrados.
(b) Encontrar o terreno de maior perímetro.
(c) Encontrar o terreno que mais se assemelha a um quadrado.
(d) Encontrar o terreno que menos se assemelha a um quadrado.
*/
#include <stdio.h>

struct terreno {
    int lado_a;
    int lado_b;
};

void printt (struct terreno t) {
    printf("%d %d\n",t.lado_a,t.lado_b);
}

void quadrado (struct terreno t){
    if (t.lado_a == t.lado_b) printt(t);
}

void main () {
    struct terreno terrenos[10] = {{1,2},{2,2},{4,3},{5,6},{8,8},{1,2},{3,3},{7,6},{7,7},{10,10}};
    
    for  (int i =0;i<10;i++){
        quadrado(terrenos[i]);
    }
    int temp= 0;
    int index = 0; 
    for  (int i =0;i<10;i++){
        if  (((2*(terrenos[i].lado_a))+(2*(terrenos[i].lado_a))) > temp ) {temp = ((2*(terrenos[i].lado_a))+(2*(terrenos[i].lado_a))); index = i;}
    }
    printf ("%d ",temp);
    printt(terrenos[index]);
}