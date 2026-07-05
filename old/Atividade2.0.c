#include <stdio.h>

void main(){
    int a,b;
    printf("Digite dois numeros\n");
    scanf("%d %d",&a,&b);
    if (a>b){
        printf("%d maior que %d",a,b);
    }
    else{
        if (a<b){
            printf("%d maior que %d",b,a);
        }
        else{
            printf("%d sao iguais %d",a,b);
        }
    }
}