#include <stdio.h>
#include <stdlib.h>

void maximo (int a,int b,int *res ) {
    if (a > b) *res = a;
    *res = b;
}

void main () { 
    int a,b;
    int res;
    scanf("%d %d",&a,&b);
    maximo(a,b,&res);
    printf ("%d",res);
}