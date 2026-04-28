#include <stdio.h>

void main () {

    char notas [8] ={4,3,7,9,3,6,54,90};

    for (int i = 0;i<8;i++){
        for (int j= i+1;j<8;j++){
            int t = 0;
            if (notas[i] > notas [j]){
                t = notas[j];
                notas[j] = notas[i];
                notas[i] = t;
            }
            else break;
        }
    }
    for (int i =0;i<8;i++){
        printf("%d\n",notas[i]);
    }
}