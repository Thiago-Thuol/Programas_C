/*
 Em outubro de 1793 a recém instituída República Francesa colocou em vigor um novo
calendário, que foi usado até 1806. Neste calendário o ano era dividido em 12 meses
de exatamente 30 dias cada um, seguidos de 5 dias sem mês (eram seis dias em anos
bissextos). Os nomes destes 12 meses eram:
(1) Vendémiaire (vindima) (5) Pluviôse (chuvoso) (9) Prairial (pastagem)
(2) Brumaire (nevoeiro) (6) Ventôse (ventoso) (10) Messidor (colheita)
(3) Frimaire (geada) (7) Germinal (semeadura) (11) Thermidor (calor)
(4) Nivôse (nevado) (8) Floréal (orescência) (12) Fructidor (frutuoso)
Além disso, cada mês era dividido em três décadas de 10 dias cada, e o décimo dia era um
dia de descanso (isso não deixou o calendário mais querido, pois no calendário antigo o dia
de descanso acontecia a cada sete dias). Os dias eram chamados de Primeiro até Décimo e
eram divididos em 10 horas de 100 minutos, cada uma dividida em 100 segundos (nenhum
desses tinha a mesma duração das unidades que temos hoje). Os cinco/seis dias sem mês
que completavam o ano eram chamados de Dia da Virtude, do Gênio, do Trabalho, da
Razão, da Recompensa e da Revolução e eram sempre feriados.
Sabendo tudo isso, escreva um algoritmo que faz a conversão de datas entre os calendários.
*/

#include <stdio.h>

void main () {

    int mes =0, dia = 0,hora = 0 ,minutos = 0, segundos = 0 ;

    printf("escrava o mes atual e o dia hora minutos segundos\n");
    scanf("%d %d %d %d %d",&mes,&dia,&hora,&minutos,&segundos);

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

    int index = (dia / 30)+1;

    if (index == 1) printf ("Vendémiaire");
    if (index == 2) printf ("Brumaire");
    if (index == 3) printf ("Frimaire");
    if (index == 4) printf ("Nivôse");
    if (index == 5) printf ("Pluviose");
    if (index == 6) printf ("Ventôse");
    if (index == 7) printf ("Germinal");
    if (index == 8) printf ("Floréal");
    if (index == 9) printf ("Prairial");
    if (index == 10) printf ("Messidor");
    if (index == 11) printf ("Thermido");
    if (index == 12) printf ("Fructidor");

    dia = dia % 30;
    
    int horas_fr = dia / 10;

    int minutos_fr = horas_fr/100;

    int segundo_fr = minutos_fr/100;

    minutos += hora * 60;

    segundos += minutos * 60;

    horas_fr += segundos / 100000;

    segundos = segundos % 10000;

    minutos_fr += segundos / 100;

    segundos = segundos % 100;

    segundo_fr += segundos ;

    printf ("\nhoras %d\nminutos %d\nsegundo %d \n",horas_fr,minutos_fr,segundo_fr);

}