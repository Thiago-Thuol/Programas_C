#include <stdio.h>

void main(){
    int a=0,b=0,c=0,maior,menor;
    printf("Digite dois numeros\n");
    scanf("%d,%d,%d",&a,&b,&c);

    maior = menor = a;

    if ( b < menor ) menor = b;
    if ( c < menor ) menor = c;

    if ( b > maior ) maior = b;
    if ( c > maior ) maior = c;
    
    printf("\n%d %d %d",menor,a+b+c-maior-menor,maior);
}