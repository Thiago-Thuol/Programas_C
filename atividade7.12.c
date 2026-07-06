/*
7.12 Crie uma struct que representa os dados de um submarino nuclear:
(a) Nome e classe.
(b) Deslocamento (toneladas) e tripulantes.
(c) Número de torpedos (entre 10 e 16).
(d) Posição e direção (dois inteiros para cada um)
Coloque doze submarinos do time A e doze do time B em um tabuleiro de 12 × 12
posições tomando cuidado para que não haja dois submarinos na mesma posição. Em
seguida deixe que eles se destruam em rodadas: cada submarino que ainda tem munição
atira um torpedo que atinge alguma outra posição do tabuleiro, aniquilando o que houver
lá (mesmo que seja do mesmo time). Depois de atirar os submarinos se movem na direção
adequada. Em caso de destruição, um relatório é emitido. Quando ninguém mais tiver
torpedos, emita um relatório com a situação final.
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

struct SUB_NUC
{
    char nome [20];
    int desl;
    int trip;
    int pos [2];
    int dir [2];
};
void print_SUB (struct SUB_NUC sb){
    printf("%s\n",sb.nome);
}
void show_tab (char tab [12][12]){
    for (int x = 0; x < 12 ; x++){
        for (int y = 0 ; y < 12 ; y++){
            printf("%c",tab[x][y]);
        }
        printf("\n");
    }
}

void sub_name_gen (char nomes []) {

    char silabas [9][18] = {"ocean","destroyer","lord","sky", "flash", "super", "immortal", "fent", "max"};

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

void cord_gen (int check_x [24], int check_y[24],int index){
    int cant_use = 0;
    int cord_x = rand() % 12 ;
    int cord_y = rand() % 12 ;
    while (1){
        for (int i = 0;i< 24;i++){
            if ((check_x [i] == cord_x) && (check_y [i] == cord_y) ) cant_use = 1;
        }
        if (cant_use == 1) {cord_x = rand() % 12 ;cord_y = rand() % 12 ;}
        else break;
    }
    check_x[index] = cord_x;
    check_y[index] = cord_y;
}

void main () {
    srand(time(NULL));
    char tab_princ [12][12] = {0};
    for (int x = 0; x < 12 ; x++){
        for (int y = 0 ; y < 12 ; y++){
            tab_princ[x][y] = '*';    
        }
    }
    
    int pos_x [24] = {0};
    int pos_y [24] = {0};

    struct SUB_NUC submarinosA [12] = {0};
    struct SUB_NUC submarinosB [12] = {0};

    char nome_temp [20] = {0};
    for (int i = 0; i < 12;i++){
        sub_name_gen(nome_temp);
        strcpy(submarinosA[i].nome , nome_temp);
        sub_name_gen(nome_temp);
        strcpy(submarinosB[i].nome , nome_temp);

        cord_gen (pos_x,pos_y,i);
        tab_princ[pos_x[i]][pos_y[i]] = 'A';
        cord_gen (pos_x,pos_y,i+1);
        tab_princ[pos_x[i+1]][pos_y[i+1]] = 'B';
    }

    show_tab(tab_princ);
}
