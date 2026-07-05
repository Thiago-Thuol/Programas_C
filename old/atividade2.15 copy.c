// Escreva um programa que recebe uma data (dia e mês) e diz quantos dias já se passaram
//desde o início do ano. Cuidado, pois os meses não tem sempre 30 dias!

#include <stdio.h>

void main () {
    int mes, dia,total ;

    printf("Digite os meses: ");
    scanf("%d",&mes);

    printf("Digite os dias: ");
    scanf("%d",&dia);

    if (mes >= 2) total += 31;
    if (mes >= 3) total += 28;
    if (mes >= 4) total += 31;
    if (mes >= 5) total += 30;
    if (mes >= 6) total += 31;
    if (mes >= 7) total += 30;
    if (mes >= 8) total += 31;
    if (mes >= 9) total += 31;
    if (mes >= 10) total += 30;
    if (mes >= 11) total += 31;
    if (mes >= 12) total += 30;

    total += dia;

    printf("Já se passaram %d dias desde o começo do ano!",total);


}