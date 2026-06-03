/*
6.19 Escreva uma função que recebe as informações sobre o cinema da questão anterior e acha
um bloco retangular de lugares livres para uma turma de escola. Você pode apresentar
dois algoritmos diferentes dependendo do como o pedido pode ser feito:
(a) Assuma que a turma precisa de um bloco retangular de m × n lugares.
(b) Assuma que a turma precisa colocar n alunos em bloco, mas não importam as
dimensões do bloco.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define ROWS 40
#define COLS 50
#define N_PICK 1700

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
void findblock ( char m[40][50]){
    int streak = 0;
    int cordxiF= 0 , yinF = 0;
    int cordxfF = 0, yfinF = 0;
    for (int c = 0;c <40;c++){
    for (int l = 0;l < 50;l++){
        int temp = 0;
        int cordxi= 0 , yin = 0;
        int cordxf = 0, yfin = 0;
        if (m[c][l] == '.'){ cordxi = c; yin = l; 
            for (int i = c;m[i][l] == '.';i++){
                for (int j = l;m[i][j] == '.';j++) {temp ++;cordxf = i; yfin = j;  }
            }
            if (temp> streak) {streak = temp; cordxiF = cordxi;yinF = yin ;cordxfF = cordxf ; yfinF = yfin;}
            }
    }
}
    printf("%d XI = %d YI = %d XF = %d YF = %d",streak,cordxiF,yinF,cordxfF,yfinF);
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
    findblock( plateia );
}