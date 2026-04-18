/*
Em um Universo Paralelo, o Deus supremo decide:
(a) No dia 1, vou colocar um coelhinho no planeta Zorg, que está vazio.
(b) No dia 2, vou colocar mais um coelhinho no planeta Zorg.
(c) A partir do dia 3 vou colocar no planeta Zorg a quantidade de coelhinhos que havia
2 dias antes.
Escreva um programa que diz quantos coelhinhos estão em Zorg no dia n.
*/

#include <stdio.h>

void main () {
    int n = 0,total = 0,antant = 1, ant = 1;

    scanf("%d",&n);

    if (n > 0){
        n --;
        total ++;
        antant = total;
    } // dia 1

    if (n > 0){
        n --;
        total ++;
        ant = total;
    } // dia 2

    for (int i = 0; i < n && n > 0 ;i++){
        printf("antant%d ant%d Dia%d\n",antant,ant,i +3);
        total += antant;
        printf("total do dia %d = %d\n",i + 3,total);
        antant = ant;
        ant = total;
    }
    printf("%d",total);

}