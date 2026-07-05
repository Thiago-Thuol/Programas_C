/*
7.8 Escreva um programa que cria vinte planetas e dezesseis naves. Preencha os dados das
naves e planetas com o gerador de nomes 10.2 feito anteriormente, e coloque números
ao acaso para os valores adequados. Depois de tudo isso seu programa deve pedir um
quadrante e um setor da galáxia, imprimindo um relatório com os dados dos planetas e
das naves no local.
*/
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

struct planeta {
    char nomes[50];
    long int raio;
    long int massa;
    int satelites;
    long int habitantes;
    int quadrante;
    char galaxia;
};


struct nave {
    char name[45];
    struct planeta origin_plan;
    struct planeta destin_plan;
    int trip;
    int aux;
    int quadrant;
    char galaxy;  
};

void print_nave (struct nave nv){
    printf ( "Nome da nave %s \n" , nv.name);
    printf ( "Nu. de naves Auxiliares %d\n" , nv.aux);
    printf ( "Plano de Destino %s\n" , nv.destin_plan.nomes);
    printf ( "Planeta de Origem %s\n" , nv.origin_plan.nomes);
    printf ( "Tripulação %d\n", nv.trip);
    printf ( "Quadrante Atual %d\n" , nv.quadrant);
    printf ( "Galáxia %c\n" , nv.galaxy);
}

void planet_gen (char nomes []) {

    char silabas [9][7] = {"zor","van","xel","thar", "lyn", "kael", "dor", "nex", "ilum"};

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
        nomes[index_total] = '\0';
    }

void nave_name_gen (char nomes []) {

    char silabas [9][18] = {"star","destroyer","lord","sky", "flash", "super", "immortal", "fent", "max"};

        int size = rand() %3 + 1;
        int index_total = {0};
        while ( size > 0 ){
            char chosen[9] = {0};
            strcpy (chosen, silabas[rand() % 9 ]);
            int size_pre = strlen(chosen)/sizeof(char);
            for (int index = 0 ; index < size_pre; index ++){
                nomes[index_total] = chosen [index];
                index_total ++;
            }
            size--;
        }
        nomes[index_total] = '\0';
    }

void main () {

    srand (time(NULL));
    struct planeta planetas [20] = {0};
    struct nave frota [16] = {0};

    for (int i = 0 ; i < 20 ; i++){
        char nome [50] = {0};
        planet_gen (nome);
        strcpy (planetas[i].nomes, nome);
        planetas[i].habitantes = rand() %1000000;
        planetas[i].massa = rand() %10000000;
        planetas[i].raio = rand() %10000;
        planetas[i].satelites = rand() %10;
        planetas[i].galaxia =rand() %11 + 'A';
        planetas[i].quadrante = rand() % 8;
    }

    for (int i = 0 ; i<16 ; i++) {
        char nome [25] = {0};
        nave_name_gen(nome);

        strcpy (frota [i].name,nome);
        frota[i].destin_plan = planetas[rand()%19];
        frota[i].origin_plan = planetas[rand()%19];
        frota[i].trip = rand() % 10000;
        frota[i].aux = rand() % 20;
        frota[i].quadrant = rand() % 8;
        frota[i].galaxy = rand() %11 + 'A';
    }
    for (int i =0; i< 16; i++) print_nave(frota[i]);
}

