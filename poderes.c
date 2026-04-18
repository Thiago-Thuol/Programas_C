#include <stdio.h>

void main(){
    int a , b;

    printf("Forneca A e B\n");

    scanf("%d %d",&a,&b);

    while (a > b) {
        printf("coco\n");       
        b++;
    }
    do {
        printf("coco\n");
    } while( a > b);

    //for (antes de comecar i =0  lista de coisa x+= 1, y += 1; enquanto i < 100 ; do i += 3 ){}


}