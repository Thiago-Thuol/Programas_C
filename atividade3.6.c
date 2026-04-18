/*
Refaça o programa do exercício 2.19 usando repetições e veja como a sua vida vai car
mais fácil.
*/

//Você pode abrir uma caderneta de poupança depositando o valor a no primeiro mês e
//o valor b nos meses seguintes. Supondo que a taxa de juros que você recebe pelo seu
//dinheiro é j (com j > 1, esperamos. . . ) escreva um programa que lista quanto dinheiro
//você terá na conta a cada mês. Ache o valor correto de j, depois suponha que a = b e faça
//as contas pra ver quanto você pode colocar na sua poupança todo mês. Depois descubra
//quando você terá um milhão.

#include <stdio.h>

void main (){
    int valor_a= 0,valor_b = 0,mes=0;
    float juros =1.005,total = 0;

    printf("digite o primeiro\n");
    scanf("%d",&valor_a);

    printf("digite o segundo deposito\n");
    scanf("%d",&valor_b);

    total += valor_a;
    while (total < 1000000)
    {
        mes += 1;
        printf("mes\n %d",mes);
        total += valor_b;
        total = total * juros;
    }
    printf("Chegou a um milhao!!! %.2f mes %d",total,mes);
}