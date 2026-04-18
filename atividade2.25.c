/*
Depois de fazer o primeiro contato com uma civilização extraterrestre (os termopilitas)
você fcou encarregado de fazer a conversão de datas entre as duas civilizações. Por
coincidência o ano dos termopilitas tem a mesma duração do ano terrestre, mas é dividido
de maneira diferente: a menor unidade de tempo é o blip, que dura 3 segundos terrestres.
Quarenta blips fazem um tak, que é a próxima unidade. Quinze taks fazem um salek, e
30 saleks fazem um mazel. Oito mazel fazem um brat, e 73 brat formam o ano inteiro.
Com estas informações, resolva:
 Escreva um programa que recebe uma data terrestre no formato dia mes hora min
seg e imprime a data no formato termopilita: brat mazel salek tak blip.
 Faça um outro programa que faz a conversão contrária, do ano termopilita para o
ano terrestre.
 Aproveite e construa uma tabela de conversões das unidades de tempo termopilitas,
dizendo o quanto cada uma delas vale nas unidades terrestres.
*/

#include <stdio.h>

void main () {
    int mes=0, //
        dia=0, 
        hora=0,
        min=0,
        seg=0; // 3 seg = 1 blip --- 40 blips = tak -- 15 taks = salek -- 30 saleks = mazel -- 8 mazel = 1 brat -- 73 brats = 1 ano

    printf ("Digite o mes dia hora min seg\n");
    scanf ("%d %d %d %d %d",&mes,&dia,&hora,&min,&seg);

    switch ( mes ) {

    case 12 : dia += 30;
    case 11 : dia += 31;
    case 10 : dia += 30;
    case 9 : dia += 31;
    case 8 : dia += 31;
    case 7 : dia += 30;
    case 6 : dia += 31;
    case 5 : dia += 30;
    case 4 : dia += 31;
    case 3 : dia += 28;
    case 2 : dia += 31;

    }
    dia -= 1;
    hora += dia * 24;
    min += hora * 60;
    seg += min * 60;

    int ano  = seg / 31536000;
    seg -= ano * 31536000;

    int brats = seg / 432000;
    seg -= brats * 432000;

    int mazel = seg / 54000;
    seg -= mazel * 54000;

    int saleks = seg / 1800;
    seg -= saleks * 1800;

    int taks = seg / 120;
    seg -= taks * 120;

    int blips = seg / 3;

    printf ("anos %d\nbrats %d\nmazel %d\nsaleks %d\ntaks %d\nblips %d",ano,brats,mazel,saleks,taks,blips);



}