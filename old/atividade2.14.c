//Faça um programa que recebe um ano e verifica se o ano é bissexto, imprimindo uma
//mensagem. As regras para um ano ser bissexto são:
//(a) Ele deve ser divisível por quatro.
//(b) Se for um ano terminado em 00, então ele também deve ser divisível por 400

#include <stdio.h>

void main (){
    int numero_inp;

    printf("Digite um ano\n");
    scanf("%d",&numero_inp);

    if (numero_inp%4 == 0) {
        if ((numero_inp-(numero_inp/100)*100) == 0) {

            if (numero_inp%400 == 0) printf("é um ano bissexto!\n");
            else printf("nao é um ano bissexto!\n");
            }
        else printf("é um ano bissexto!\n");
        }

    else printf("nao é um ano bissexto!\n");
}