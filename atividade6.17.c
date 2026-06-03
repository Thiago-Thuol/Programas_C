/*
6.17 Escreva um algoritmo que controla a compra de entradas em um cinema. O algoritmo
deve representar a ocupação dos assentos da platéia (40 las de 50 assentos cada), onde
cada assento pode estar reservado (marcado com R), comprado (marcado com C), ou
livre (marcado com .). Você deve fornecer uma função que procura um lugar livre na
platéia e informa sua posição, bem como outra função que imprime um mapa da platéia,
marcando os lugares de acordo com sua situação, imprimindo em seguida os totais de
lugares ocupados, reservados e vagos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROWS 40
#define COLS 50
#define N_PICK 1950

void pick_and_place_RC(char mat[ROWS][COLS]) {
    bool chosen[ROWS][COLS] = { false };
    int placed = 0;
    srand((unsigned) time(NULL));

    while (placed < N_PICK) {
        int r = rand() % ROWS;
        int c = rand() % COLS;
        if (chosen[r][c]) continue;           // já escolhida -> pular
        chosen[r][c] = true;
        mat[r][c] = (rand() % 2) ? 'R' : 'C'; // escolhe R ou C aleatoriamente
        placed++;
    }
}
void fill( char m[40][50]){
    for (int c = 0;c <40;c++){
    for (int l = 0;l < 50;l++){
        m [c][l] = '.';
        }
    }
}
void findplace ( char m[40][50]){
    for (int c = 0;c <40;c++){
    for (int l = 0;l < 50;l++){
        if (m [c][l] == '.'){
            printf ("lugar %d %d  disponivel",c,l);
            printf("\n");
        }
    }
}
}
void printmatrix ( char m[40][50] ){
    for (int c = 0;c <40;c++){
        for (int l = 0;l < 50;l++){
            printf ("%c ",m [c][l]);
        }
        printf("\n");
    }
}

void main () {
    char plateia [40][50] ;
    fill(plateia);
    pick_and_place_RC(plateia);
    printmatrix( plateia );
    findplace( plateia );
}