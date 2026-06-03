/*
6.12 Use a função fatorial do exercício anterior para escrever a função comb(int n, int k),
que retorna o número de combinações de n elementos escolhidos em grupos de k elementos
*/
#include <stdio.h>

int fatorial(int n) {
    int fat = 1;
    for (int i =1 ; i <=n;i++){
        fat *= i;
    }
return fat;
}
int combinacao (int i,int k){
    return fatorial(i)/(fatorial(k)*(fatorial(i-k)));
}

void main () {
    int n,k;
    scanf("%d %d",&n,&k);
    printf ("%d",combinacao(n,k));
}