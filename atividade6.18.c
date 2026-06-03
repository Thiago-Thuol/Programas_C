/*
6.18 Escreva o algoritmo de uma função que recebe as informações sobre o cinema da questão
anterior e acha dois lugares livres para um casal.
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROWS 40
#define COLS 50
#define N_PICK 1800

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
void findplacecasal ( char m[40][50]){
    for (int c = 0;c <39;c++){
    for (int l = 0;l < 50;l++){
        if (m [c][l] == '.' && m [c][l+1] == '.'){
            printf ("lugar %d %d  e lugar %d %d disponivel",c,l,c,l+1);
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
    findplacecasal( plateia );
}