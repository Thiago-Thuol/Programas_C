/*
6.14 Faça uma função que recebe uma matriz A10×10 e a transpõe, ou seja, o elemento que está
em A2,3 vai para A3,2 e vice-versa.
*/
#include <stdio.h>
void printmatrix ( int m[10][10] ){
    for (int c = 0;c <10;c++){
        for (int l = 0;l < 10;l++){
            printf ("%d ",m [c][l]);
        }
        printf("\n");
    }
}
void change ( int m [10] [10]){
    int temp = 0;
    for (int c = 0;c <10;c++){
    for (int l = c+1;l < 10;l++){
        temp = m [c][l];
        m [c][l] = m[l][c];
        m[l][c] = temp;
        }
    }
}
void main () {

    int matrix [10][10]  = {
    {1,   2,   3,   4,   5,   6,   7,   8,   9,  10},
    {11,  12,  13,  14,  15,  16,  17,  18,  19,  20},
    {21,  22,  23,  24,  25,  26,  27,  28,  29,  30},
    {31,  32,  33,  34,  35,  36,  37,  38,  39,  40},
    {41,  42,  43,  44,  45,  46,  47,  48,  49,  50},
    {51,  52,  53,  54,  55,  56,  57,  58,  59,  60},
    {61,  62,  63,  64,  65,  66,  67,  68,  69,  70},
    {71,  72,  73,  74,  75,  76,  77,  78,  79,  80},
    {81,  82,  83,  84,  85,  86,  87,  88,  89,  90},
    {91,  92,  93,  94,  95,  96,  97,  98,  99, 100}
    };
    printmatrix(matrix);
    change(matrix);
    printmatrix(matrix);
}