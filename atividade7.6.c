/*
7.6 Usando os dados do exercício anterior, crie vinte planetas e apresente algoritmos para:
(a) Determinar o número de habitantes no quadrante Gamma (o código para o quadrante
Gamma é 6).
(b) Determinar qual o setor mais populoso da galáxia.
(c) Encontrar o maior planeta de cada quadrante.
*/

#include <stdio.h>

struct planeta {
    char nomes[100];
    long int raio;
    long int massa;
    int satelites;
    long int habitantes;
    int quadrante;
    char galaxia;
};

int gama_count (struct planeta p[],int tam){
    int count = 0 ;
    for ( int i = 0 ; i < tam ; i++ ){
        if (p[i].quadrante == 6) count++;
    }
    return count;
}

char popul (struct planeta p[],int tam) {
    long int pop [ 'L' - 'A' ] = {0};
    for ( int i = 0; i < tam ; i++){
        pop[ p[i].quadrante - 'A' ] += p[i].quadrante;
    }
    long int maior = 0 ;
    int maior_index = 0 ;

    for (int i = 0 ; i < 'A' - 'L'; i++){
        if 
    }
    

    return quad;
}

void main() {

    struct planeta planetas[20] = {
        {"Terra", 6371, 5972, 1, 8000000000, 2, 'A'},
        {"Marte", 3389, 641, 2, 0, 3, 'A'},
        {"Venus", 6052, 4868, 0, 0, 4, 'A'},
        {"Mercurio", 2440, 330, 0, 0, 1, 'A'},
        {"Jupiter", 69911, 1898000, 95, 0, 5, 'A'},

        {"Saturno", 58232, 568000, 146, 0, 6, 'B'},
        {"Urano", 25362, 86810, 28, 0, 6, 'B'},
        {"Netuno", 24622, 102400, 16, 0, 7, 'B'},
        {"Kepler22b", 12000, 10000, 3, 500000, 8, 'B'},
        {"Pandora", 15000, 12000, 4, 2000000, 2, 'B'},

        {"Arrakis", 8000, 7000, 1, 1000000, 6, 'C'},
        {"Krypton", 11000, 9000, 2, 3000000, 4, 'C'},
        {"Vulcano", 9000, 8500, 0, 2500000, 3, 'C'},
        {"Gallifrey", 13000, 15000, 5, 7000000, 5, 'C'},
        {"Cybertron", 14000, 17000, 2, 9000000, 1, 'C'},

        {"Ego", 18000, 25000, 0, 10000000, 8, 'D'},
        {"Namekusei", 10000, 9500, 3, 4000000, 7, 'D'},
        {"LV426", 6000, 5000, 1, 10000, 6, 'D'},
        {"Coruscant", 16000, 18000, 4, 12000000000, 2, 'D'},
        {"Naboo", 12100, 11000, 2, 4500000, 4, 'D'}
    };

    printf("gama planets  = %d\n",gama_count(planetas,20));
    printf("Maior quadrante = %c\n",popul(planetas,20));

}