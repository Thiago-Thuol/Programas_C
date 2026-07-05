#include <stdio.h>

void main(){
    int a=0,b=0,c=0;
    printf("Digite tres lados\n");
    scanf("%d,%d,%d",&a,&b,&c);

    if ((a == b) && ((a == c) && (b == c))){
        printf("Triangulo Equilatero");
    }
    else{
        if (((a == b) && ((a != c) && (b != c))) || (((a != b) && ((a != c) && (b == c))) || ((a != b) && ((a == c) && (b != c))))){
            printf("Triangulo Isosceles");
        }
        else{
            if ((a == 0) || ((a == 0) || (b == 0)))
                printf("Nao e triangulo");
            else{
                printf("Triangulo Escaleno");
                } 
            }
        }
    }