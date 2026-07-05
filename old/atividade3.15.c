/*
 Refaça o programa do exercício 2.17, adaptando-o para funcionar com datas em anos
diferentes e incluindo anos bissextos com a informação do exercício 2.14. Use-o para
determinar há quantos dias você nasceu. Teste os programas dos seus colegas e conrme
que todos dão os mesmos valores.
*/
#include <stdio.h>

void main (){
    int mes1, dia1,total1 =0,ano1 = 0 ;

    printf("Digite o ano1: ");
    scanf("%d",&ano1); 

    printf("Digite o mese1: ");
    scanf("%d",&mes1);

    printf("Digite o dia1: ");
    scanf("%d",&dia1);

    int mes2, dia2,ano2 = 0,total2 = 0;

    printf("Digite o ano 2: ");
    scanf("%d",&ano2); 

    printf("Digite o mese2: ");
    scanf("%d",&mes2);

    printf("Digite o dia2: ");
    scanf("%d",&dia2);


    switch ( mes1 ) {

    case 12 : total1 += 30;
    case 11 : total1 += 31;
    case 10 : total1 += 30;
    case 9 : total1 += 31;
    case 8 : total1 += 31;
    case 7 : total1 += 30;
    case 6 : total1 += 31;
    case 5 : total1 += 30;
    case 4 : total1 += 31;
    case 3 : total1 += 28;
    case 2 : total1 += 31;

    }
    total1 += dia1;
    if (ano1 % 400 == 0 && mes1 > 3) total1 ++;

        switch ( mes2 ) {

    case 12 : total2 += 30;
    case 11 : total2 += 31;
    case 10 : total2 += 30;
    case 9 : total2 += 31;
    case 8 : total2 += 31;
    case 7 : total2 += 30;
    case 6 : total2 += 31;
    case 5 : total2 += 30;
    case 4 : total2 += 31;
    case 3 : total2 += 28;
    case 2 : total2 += 31;

    }
    total2 += dia2;
    if (ano2 % 400 == 0 && mes2 > 3) total2 ++;

    int difano = 0,anomenor = 0,totalfinal = 0;

    if (ano1 != ano2){
        if (ano1 > ano2) {difano  = ano1-ano2;anomenor = ano2; totalfinal += (total1-total2);}
        else {difano  = ano2-ano1;anomenor = ano1, totalfinal += (total2-total1);}

        while (difano > 0){
            if (anomenor % 400 == 0) totalfinal += 366;
            else totalfinal += 365;
            anomenor ++;
            difano --;
            }
        }
    else{
        if (total1 > total2) totalfinal += (total1 - total2);
        else totalfinal += (total2 - total1);
    }
    printf("Já se passaram %d dias desde o começo do ano!",totalfinal);
}