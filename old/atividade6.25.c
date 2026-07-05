/*
6.25 Adapte a função ehprimo(int n) para ter um programa que recebe um inteiro n e encontra o primeiro primo maior ou igual a n.
*/
#include <stdio.h>

int numdiv(int  n){
    int res = 0;
    for ( int  i = n ; i > 0 ; i--){

        if (n % i == 0) res ++;
    }
    return res;
}
int ehprimo(int n){
    int primo1 =0;
    int primo2 =0;
    if (numdiv(n) == 2) return n;
    while (1){
        for (int i = n+1,temp;temp != 2;i++){
            temp = (numdiv(i));
            primo1 = i;
        }
        for (int i = n-1,temp;temp != 2;i--){
            temp = (numdiv(i));
            primo2 = i;
        }
        int comp1 = (primo1-n);
        if (comp1 < 0) comp1 *= -1;
        int comp2 = (primo2-n);
        if (comp2 < 0) comp2 *= -1;
        if (comp1 > comp2) return primo2;
        return primo1;
    }
}

void main () {
    printf("%d",ehprimo(10));
}