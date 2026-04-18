#include <stdio.h>

void main () {
    int key;
    
    scanf("%d",&key);

    switch( key ) {

        case 0 : printf("zero ");
                break;
        case 1 : printf("Um ");
                break;
        case 2 : printf("Dois ");
                break;
        case 3 : printf("Tres ");
                break;
        case 4 : printf("Quatro ");
                break;
        case 5 : printf("Cinco ");
                break;
        case 6 : printf("Seis ");
                break;
        case 7 : printf("Sete ");
                break;
        case 8 : printf("Oito ");
                break;
        case 9 : printf("Nove ");
                break;
        default : printf("Nao e um numero!\n");
    }



}