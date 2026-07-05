#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void main () {
    srand (time(NULL));

    char silabas [9][7] = {"elp","tram","lat","rem", "thor", "vax", "loy", "fen", "nax"};
    char nomes [25] [20] = {0};

    for (int i = 0 ; i < 20 ; i++){
        int size = rand() %4 + 1;
        int index_total = 0;
        while ( size > 0 ){
            char chosen[7] = {0};
            strcpy (chosen, silabas[rand() % 9 ]);
            int size_pre = strlen(chosen)/sizeof(char);
            for (int index = 0 ; index < size_pre; index ++){
                nomes[i][index_total] = chosen [index];
                index_total ++;
            }
            size--;
        }
        printf ("%s\n",nomes[i]);
    }
}