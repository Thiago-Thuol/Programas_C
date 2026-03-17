#include <stdio.h>

void main(){
    int peso_sobre,peso_prato=0;
    float valor=0.0;
    printf("Digite o peso do prato e o da sobremesa\n");
    printf("digite o peso do prato em gramas");
    scanf("%d",&peso_prato);
    printf("digite o peso da sobremesa em gramas");
    scanf("%d",&peso_sobre);

    valor = (0.084 * (peso_prato+peso_sobre));
    if (valor > 48.00){
        printf("Valor a ser pago $48 buffet livre");
    }
    else
        printf("Valor a ser pago $%f",valor);


}