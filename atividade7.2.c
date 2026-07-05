/*
7.2 Apresente uma struct para guardar uma data (dia, mês, ano). Depois cumpra as tarefas
abaixo:
(a) escreva uma função que imprime uma data com o formato adequado;
(b) escreva uma função que recebe duas datas e imprime a data mais antiga;
*/

#include <stdio.h>

struct date {
    int day;
    int mounth;
    i7nt year;
};

void print_Date (struct date D){
    printf("%d / %d / %d",D.day,D.mounth,D.year);
}

void older (struct date D1, struct date D2){
    if (D1.year > D2.year) print_Date ( D2 );
    if (D1.year < D2.year) print_Date ( D1 );
    if (D1.mounth > D2.mounth) print_Date ( D2 );
    if (D1.mounth < D2.mounth) print_Date ( D1 );
    if (D1.year > D2.day) print_Date ( D2 );
    if (D1.year < D2.day) print_Date ( D1 );
    
}
void main () {
    struct date D1 = {10,3,2006};
    struct date D2 = {9,3,2006};
    older (D1,D2);
}

