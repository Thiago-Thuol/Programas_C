#include <stdio.h>
#include <stdlib.h>

void main () {

    int size;
    printf("Digite o tamanho");
    scanf("%d",&size);

    int *vet = malloc( size * sizeof(int) );

    free ( vet );
}