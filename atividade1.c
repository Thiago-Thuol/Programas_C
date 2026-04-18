//Você deve escrever um programa que calcule o salário nal de um funcionário da Abangu Corporation.
//O cálculo de salário nal é bastante simples:

#include <stdio.h>

void main () {

    float salario_b = 0 , acrescimo = 1;

    int ano_atual = 0 , dependentes = 0 , anos = 0;

    //O funcionário recebe um acréscimo de 4% sobre o salário base para cada dependente que ele tem
    //(até o máximo de 6 dependentes).

    //Se o funcionário tem menos de 3 dependentes, ele recebe um acréscimo de 3% sobre o salário
    //base para cada 5 anos de casa que ele tem (até o máximo de 5 acréscimos).

    printf("Digite o salario base! : ");
    scanf("%f",&salario_b);

    printf("Digite os dependentes! : ");
    scanf("%d",&dependentes);

    printf("Digite os anos com posse da casa! : ");
    scanf("%d",&anos);

    printf("Digite o ano atual! : ");
    scanf("%d",&ano_atual);


/// ------- dependentes menor q 3 -----------////

    if (dependentes <3) {

     acrescimo += 0.04*dependentes;
     
     if (anos > 25) anos = 25;
     
     acrescimo += 0.03 * (anos / 5) ;
        

    }

    // Se o funcionário tem 3 ou mais dependentes ele recebe um acréscimo de 4% sobre o salário base
    //para cada 6 anos de casa que ele tem (até o máximo de 7 acréscimos).

// ---------- dependentes maior q 3 ---------///

    if (dependentes >= 3 ){

        if (dependentes > 6) dependentes = 6;  

        acrescimo += 0.04*dependentes;
        //printf ("acrescimo = %f\n",acrescimo);

        if (anos > 42) anos = 42;
        acrescimo += 0.04 * (anos / 6) ;
        //printf ("acrescimo = %f\n",acrescimo);

    }

    //Todos ganham 1% extra de aumento sobre o salário base se for um ano bissexto.

//--------verifica se o ano e bissexto---------///

    if (ano_atual%400 == 0) {
        acrescimo += 0.01;    
    }
    printf ("acrescimo = %f\n",acrescimo);
    salario_b = salario_b * acrescimo;

    printf("seu salario final é %.2f",salario_b);
}