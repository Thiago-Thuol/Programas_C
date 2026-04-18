/*
# Exercício código sequencial e condicionais
Você deve escrever um programa que calcule o salário nal de um funcionário da Abangu Corporation.
O cálculo de salário nal é bastante simples:
 
- Seu programa deve receber o salário base b do funcionário.
- Seu programa deve receber o número de dependentes d do funcionário.
- Seu programa deve receber o número de anos de casa c do funcionário.
- Seu programa deve receber o ano atual a. 

- O funcionário recebe um acréscimo de 4% sobre o salário base para cada dependente que ele tem
(até o máximo de 6 dependentes).
- Se o funcionário tem menos de 3 dependentes, ele recebe um acréscimo de 3% sobre o salário
base para cada 5 anos de casa que ele tem (até o máximo de 5 acréscimos).
- Se o funcionário tem 3 ou mais dependentes ele recebe um acréscimo de 4% sobre o salário base
para cada 6 anos de casa que ele tem (até o máximo de 7 acréscimos).
- Todos ganham 1% extra de aumento sobre o salário base se for um ano bissexto.
*/

#include <stdio.h>

void main() {
    float b = 1000; //salario base
    int d = 8; //dependentes
    int c = 40; //anos de casa
    int a = 2000; //ano atual
    
    float acrescimo = 1.0;


    if (d < 7) {
        acrescimo += d*0.04;
    } else {
        acrescimo += 0.24;
    }

    if (d < 3) {
        if (c <= 25) {
            acrescimo += 0.03 * (c/5);
        } else {
            acrescimo += 0.25;
        }
    } else {
        if (c <= 42 ) {
            acrescimo += 0.04 * (c/6);
        } else {
            acrescimo += 0.42;
        }
    }
    printf("Acrescimo: %.2f\n", acrescimo);

    if (a%400 == 0) {
        acrescimo += 0.01;
        printf ("bisextto");
    }else ;

    printf("Salario Base: R$ %.2f\n", b);
    printf("Acrescimo: %.2f\n", acrescimo);
    printf("Salario com Acrescimos: R$ %.2f\n", b*acrescimo);

}