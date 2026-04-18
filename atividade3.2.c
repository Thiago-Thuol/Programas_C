/*
Repita o exercício anterior, mas em vez de achar a soma, ache a média dos números.
*/

#include <stdio.h>

void main (){
    int a, b;
    printf("Digite A e B");
    scanf("%d %d", &a,&b);

    if (a > b) {
        a += b;
        b = a - b;
        a = a - b;
    }
    printf ("A %d B %d\n",a,b);

    float i = 0;

    while ( a < b ){
       b--;
       i++;
    }
    i /= 2;
    i += a;
    printf("media %.2f\n",i);
}