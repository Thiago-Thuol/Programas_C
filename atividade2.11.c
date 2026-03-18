#include <stdio.h>
#include <math.h>

void main(){
    int parcelas=0;
    float divida=0,valor=0,primeira_parcela=0;
    printf("Escreva o valor de sua divida: ");
    scanf("%f",&divida);
    printf("Escreva o numero de parcelas q voce pretende pagar: ");
    scanf("%d",&parcelas);
    if (parcelas > 72) printf("Esse numero de parcelas nao e permitido!");
    else {
      parcelas -= 1;
      primeira_parcela = (float) 0.10*divida;
      divida = (float) 0.90*divida;
      valor = (float) divida/parcelas;
      printf("%f primeira parcela, %d numero de parcelas %f valor de cada parcela",primeira_parcela,parcelas+1,valor);
    
    }
}