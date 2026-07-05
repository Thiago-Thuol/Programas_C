/*
7.7 Crie uma struct que representa uma nave da Federação, contendo:
21
(a) Nome da nave, classe e tamanho (toneladas).
(b) Número de tripulantes e de naves auxiliares.
(c) Planeta de origem e planeta de destino.
(d) Quadrante e setor atuais na galáxia
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct nave {
    char name[20];
    char origin_plan[20];
    char destin_plan[20];
    int trip;
    int aux;
    int quadrant;
    char galaxy;  
};

void nome_gen (char nomes []) {

    char silabas [9][7] = {"elp","tram","lat","rem", "thor", "vax", "loy", "fen", "nax"};

        int size = rand() %4 + 1;
        int index_total = {0};
        while ( size > 0 ){
            char chosen[7] = {0};
            strcpy (chosen, silabas[rand() % 9 ]);
            int size_pre = strlen(chosen)/sizeof(char);
            for (int index = 0 ; index < size_pre; index ++){
                nomes[index_total] = chosen [index];
                index_total ++;
            }
            size--;
        }
    }

void main () {
    srand (time(NULL));
    struct nave frota [20] = {0};

    for (int i = 0 ; i<20 ; i++) {
        char nome [25] = {0};
        nome_gen(nome);
        char nome_o [25] = {0};
        nome_gen(nome_o);
        char nome_d [25] = {0};
        nome_gen(nome_d);
        strcpy (frota [i].name,nome);
        strcpy (frota [i].origin_plan, nome_o);
        strcpy (frota [i].destin_plan , nome_d);
        frota[i].trip = rand() % 10000;
        frota[i].aux = rand() % 20;
        frota[i].quadrant = rand() % 8;
        frota[i].galaxy = rand() %11 + 'A';
    }
}

