//Escreva um programa que recebe a linha e a coluna de uma casinha do tabuleiro de xadrez ao lado e diz qual a
//cor da casa.
//Depois de fazer isso escreva outro programa para receber as coordenadas de
//duas casas e dizer se são da mesma
//cor.

#include <stdio.h>

void main(){

    int x1,y1,x2,y2,cor1,cor2;

    printf("digite as coordenadas da primeira peca x,y\n");
    scanf("%d,%d",&x1,&y1);

    printf("digite as coordenadas da segunda peca x,y\n");
    scanf("%d,%d",&x2,&y2);

    if (((((x1%2) == 0) && ((y1%2) == 0)) || (((x1%2) != 0) && ((y1%2) != 0))) && ((((x2%2) == 0) && ((y2%2) == 0)) || (((x2%2) != 0) && ((y2%2) != 0)))){
        printf("sao da mesma cor");
    }
    else printf("nao sao da mesma cor");

}