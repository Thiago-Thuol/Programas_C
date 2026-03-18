#include <stdio.h>

void main(){
    int a=0,b=0,c=0;
    printf("Digite tres lados\n");
    printf("Cateto 1: ");
    scanf("%d",&a);
    printf("Cateto 2: ");
    scanf("%d",&b);
    printf("Hipotemusa: ");
    scanf("%d",&c);
    if (((a*a) + (b*b)) == (c*c)){
        printf("e um triangulo retangulo");
    }
    else
        printf("nao e um triangulo retangulo");
}