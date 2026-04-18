// Escreva um programa que recebe uma data (dia e mêse diz quantos dias já se passaram
//desde o início do ano. Cuidado, pois os meses não tem sempre 30 dias!

#include <stdio.h>

void main (){
    int mes, dia,total =0 ;

    printf("Digite os meses: ");
    scanf("%d",&mes);

    printf("Digite os dias: ");
    scanf("%d",&dia);

    switch ( mes ) {

    case 12 : total += 30;
    case 11 : total += 31;
    case 10 : total += 30;
    case 9 : total += 31;
    case 8 : total += 31;
    case 7 : total += 30;
    case 6 : total += 31;
    case 5 : total += 30;
    case 4 : total += 31;
    case 3 : total += 28;
    case 2 : total += 31;

    }
    total += dia;

    printf("Já se passaram %d dias desde o começo do ano!",total);
}