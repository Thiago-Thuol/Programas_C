//Refaça o programa do exercício 2.17, adaptando-o para funcionar com datas em anos
//diferentes. Você pode assumir que os anos sempre tem 365 dias.

#include <stdio.h>

void main () {
    int mes1=0, dia1=0,total1=0,ano1=0,ano2=0,total2=0,mes2=0,dia2=0,ano_final=0 ;

    printf("Digite o ano: ");
    scanf("%d",&ano1);

    printf("Digite os meses: ");
    scanf("%d",&mes1);

    printf("Digite os dias: ");
    scanf("%d",&dia1);

    printf("Digite o ano: ");
    scanf("%d",&ano2);

    printf("Digite os meses: ");
    scanf("%d",&mes2);

    printf("Digite os dias: ");
    scanf("%d",&dia2);

    if (mes1 >= 2) total1 += 31;
    if (mes1 >= 3) total1 += 28;
    if (mes1 >= 4) total1 += 31;
    if (mes1 >= 5) total1 += 30;
    if (mes1 >= 6) total1 += 31;
    if (mes1 >= 7) total1 += 30;
    if (mes1 >= 8) total1 += 31;
    if (mes1 >= 9) total1 += 31;
    if (mes1 >= 10) total1 += 30;
    if (mes1 >= 11) total1 += 31;
    if (mes1 >= 12) total1 += 30;

    if (mes2 >= 2) total2 += 31;
    if (mes2 >= 3) total2 += 28;
    if (mes2 >= 4) total2 += 31;
    if (mes2 >= 5) total2 += 30;
    if (mes2 >= 6) total2 += 31;
    if (mes2 >= 7) total2 += 30;
    if (mes2 >= 8) total2 += 31;
    if (mes2 >= 9) total2 += 31;
    if (mes2 >= 10) total2 += 30;
    if (mes2 >= 11) total2 += 31;
    if (mes2 >= 12) total2 += 30;

    total1 += dia1;

    total2 += dia2;

    if (ano1>ano2) ano_final = ano1-ano2;
    else ano_final = ano2 -ano1;
    ano_final = ano_final * 365;

    if (total1>total2) printf("A diferenca e de %d dias !",total1-total2+ano_final);
    else printf("A diferenca e de %d dias !",total2-total1+ano_final);


}