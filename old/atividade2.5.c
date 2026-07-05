#include <stdio.h>

void main(){
    int idade=0,valor=0;
    printf("Digite sua idade\n");
    scanf("%d",&idade);
    if (idade >59)
        valor = 8;
    else if (idade <= 7)
            valor = 7;
        else if (idade <= 18)
            valor = 10;
            else
                valor = 12;
    printf("Valor a ser pago $%d",valor);
}