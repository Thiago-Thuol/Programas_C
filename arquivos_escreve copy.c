#include <stdio.h>
#include <stdlib.h>

void main () {

    FILE * arq = fopen( "caderno.txt" , "w" );

    for ( int i = 0 ; i < 1000; i += 3){
        fprintf ( arq , "%d\n",i );
    }

    fclose( arq );
}