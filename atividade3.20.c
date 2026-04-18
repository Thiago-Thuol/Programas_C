/*
Escreva um programa que recebe um inteiro n e escreve n com separadores a cada 3
dígitos. Por exemplo, se n = 123456789 então seu programa deve escrever 123.456.789.
Depois teste seu programa com os números 9, 19, 109, 1009 e 10009.
*/

#include <stdio.h>

void main () {
    int n =0 ;

    printf("Digite o numero :");
    scanf("%d",&n);

    //verificar quantas casas

    int casas = 0;
    for (int i = n;i > 0;){
        i = i/10;
        casas++;
    }
    printf("%d\n",casas);

    switch (casas)
    {
    case 9 :
    case 8 :
    case 7 :
            printf("%d,",(n/1000000));
    case 6 :
    case 5 :
    case 4 :
            printf("%d,",(n/1000)-((n/1000000)*1000));
    case 3 :
    case 2 :
    case 1 :
            printf("%d",(n%1000));

    }

}