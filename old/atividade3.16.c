/*
Escreva um algoritmo que recebe dois números inteiros de quatro dígitos (por exemplo,
1743 e 5218) e cria um novo número que foi feito intercalando os dígitos dos dois números.
Neste caso, o resultado para 1743 e 5218 seria 15724138. Esteja preparado, por que fazer
isso não é muito simples.
*/
#include <stdio.h>

void main (){
    int n1 = 1743, n2 = 5218;

    /*printf("Digite dois numeros de 4 digitos: ");
    scanf("%d %d",&n1,&n2);*/

    for (int i = 1000;i > 0;i/=10){
        printf("%d",n1/i - ((n1/(i*10))*10));
        printf("%d",n2/i - ((n2/(i*10))*10));
    }
}