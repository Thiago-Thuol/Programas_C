#include <stdio.h>

void main (){
    int a, b, soma =0 ;

    printf("Digite A e B");
    scanf("%d %d", &a,&b);

    if (a > b) {
        a += b;
        b = a - b;
        a = a - b;
    }
    printf ("A %d B %d\n",a,b);

    int i = a;

    while ( i <= b ){
       soma += i;
       i++; 
    }
    printf("soma %d",soma);
}