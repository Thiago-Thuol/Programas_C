/*
Escreva um programa que acha as soluções inteiras da equação
3X + 2Y − 7Z = 5
para valores de X, Y e Z entre zero e 100. Prepare-se, pois são algumas dúzias de
soluções
*/

#include <stdio.h>

void main () {
//formula 3x + 2Y -Z = 5
    int total = 0 ;

    for (int x = 0;x <101;x++){
        for (int y = 0;y <101;y++){
            for (int z = 0;z <101;z++){
                if ( ((3*x) + (2*y) - (7*z)) ==5  ) {printf("3*%d + 2*%d - 7*%d = 5\n",x,y,z);total++;}

            }}}
    printf("total :%d",total);
}