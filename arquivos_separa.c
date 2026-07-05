#include <stdio.h>
#include <stdlib.h>

void main () {

    FILE * arq = fopen( "caderno.txt" , "r" );
    FILE * arqp = fopen( "pares.txt" , "w" );
    FILE * arqi = fopen( "impares.txt" , "w" );

    int num;

    while ( fscanf( arq, "%d", &num) == 1 ){
        printf("peguei %d\n",num);
        if ( num % 2 == 0) fprintf( arqp , "%d\n", num );
        else fprintf( arqi , "%d\n", num );
    }

    fclose( arq );
    fclose( arqp );
    fclose( arqi );
}