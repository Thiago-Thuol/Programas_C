/*6.0 Escreva uma função que recebe três inteiros a, b e c e retorna o maior dos três inteiros*/

#include <stdio.h>

int maior (int a, int b,int c){
    if (a>b && a>c) return a;
    if (b>a && b>c) return b;
    else return c;
}

void main (){
    int n1,n2,n3;
    scanf ("%d %d %d",&n1,&n2,&n3);
    printf("%d",maior(n1,n2,n3));
}