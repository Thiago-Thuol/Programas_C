/*
 Repita o exercício anterior, mas ache apenas a soma dos números que não são múltiplos
de sete
*/

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
       if (i % 7 != 0){
       soma += i;
       }
       i++;
       
    }
    printf("soma %d",soma);
}