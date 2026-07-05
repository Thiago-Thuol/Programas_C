#include <stdio.h>
#include <stdlib.h>

void main () {

    FILE * arq = fopen( "caderno.txt" , "r" );

    char letras[20];


    while ( fscanf( arq, "%s", letras) == 1 ){
        printf("peguei %s\n",letras);
    }
    /*
    int num;

    while ( fscanf( arq, "%d", &num) == 1 ){
        printf("peguei %d\n",num);
    }
    */
    fclose( arq );
}