/*
6.3 Adapte o programa do exercício anterior para descobrir qual número entre 1 e 100000
produz a sequencia mais longa até chegar em 1. Imprimir os números que vão sendo
obtidos pode não ser uma boa ideia agora. . .
*/

#include <stdio.h>
int par (int n){
    return (n/2);
}
int impar (int n){
    return (3*n + 1);
}

int action (int n){
    if (n%2 == 0) return par(n);
    else return impar(n);
}

void main () {
    int result= 0,escolhido = 0,trys = 0;
    for (int i = 1 ; i<100001;i++){
        result = i;
        int temp = 0;
        while (result != 1) {
            result = action (result);
            temp ++;
        }
        if (temp >trys){trys = temp; escolhido = i;}
    }
    printf ("escolhido %d tentativas %d",escolhido,trys);
}
