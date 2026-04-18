/*
 Com a regra que você pode perceber a partir das equações abaixo, escreva um programa
que calcula o valor de Sn para qualquer valor de n maior do que zero:
S1 = 1
S2 = 2 + 3
S3 = 4 + 5 + 6
S4 = 7 + 8 + 9 + 10
S5 = 11 + 12 + 13 + 14 + 15
*/

#include <stdio.h>

void main () {
    int SX = 0;

    printf("Digite o SX: ");
    scanf("%d",&SX);

    int tempSX = 0;
    int last = 0;
    for (int i = 1; i <= SX;i++){
        printf("S%d = ",i);
        tempSX = 0;
        for (int times = 1;times <= i;times++){
            last ++;
            tempSX += last;
            if (times == (i))printf("%d SOMA = %d",last,tempSX); 
            else printf("%d + ",last);

        }
        printf("\n");
    }


}