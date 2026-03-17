#include <stdio.h>

void main(){
    int a=0,b=0,c=0;
    printf("Digite dois numeros\n");
    scanf("%d %d %d",&a,&b,&c);

    if (((a < b) && (a < c)) && ((b > a) && (b < c))){
        printf("Ordem crescente!");
    }
    else{
        printf("Sem ordem crescente!");
    }


}  
