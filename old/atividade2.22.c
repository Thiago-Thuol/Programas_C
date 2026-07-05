/*
Escreva um algoritmo que recebe um ano maior do que zero e diz a que século ele pertence.
Para relembrar, os anos de 1 a 100 são do século I, os anos de 101 a 200 são do século II e
assim por diante. Você não precisa escrever o número do século com numeração romana,
mas precisa conferir seu programa pra ver se ele está mesmo certo
*/
#include <stdio.h>

void main () {

    int ano =0, sec = 0;

    printf ("Digite o ano atual \n");
    scanf ("%d",&ano);

    sec = ano / 100;

    if (ano % 100 != 0 ){
        sec += 1;
    }

    printf ("Seculo %d",sec);


}