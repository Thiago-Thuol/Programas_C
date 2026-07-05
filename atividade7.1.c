/*
Use as frações do problema 7.0 e reprograme o exercício 3.27, fazendo as contas com as
frações que você deniu. Com isto você não deve mais achar floats que chegam perto
da raiz de um número, mas deve achar frações que se aproximam. . . ache frações que se
aproximam de √
2,
√
3,
√
5 e conrme o resultado! Já esteja alerta para o fato de que
os numeradores e denominadores crescem rapidamente e logo estouram a capacidade de
armazenamento dos números inteiros, permitindo apenas quatro ou cinco iterações.
*/
#include <stdio.h>

struct fraction {
    int numerador;
    int denominador;

};

void print_fraction(struct fraction f){
    printf("%d / %d = %0.5f\n",f.numerador,f.denominador, 1.0*f.numerador/f.denominador);
}

void pega_fraction (struct fraction * f){
    scanf("%d %d", &f->numerador,&f->denominador);
}

struct fraction struct_fraction_mult(struct fraction fraction1,struct fraction fraction2){
    struct fraction result = {(fraction1.numerador*fraction2.numerador),(fraction1.denominador*fraction2.denominador)};
    return result;
};
struct fraction struct_fraction_div(struct fraction fraction1,struct fraction fraction2){
    struct fraction result = {(fraction1.numerador*fraction2.denominador),(fraction1.denominador*fraction2.numerador)};
    return result;
};

struct fraction struct_fraction_add(struct fraction fraction1,struct fraction fraction2){
    struct fraction result = {
        ((fraction1.numerador*fraction2.denominador)+(fraction2.numerador*fraction1.denominador)),
        (fraction1.denominador*fraction2.denominador)};
    return result;
};

struct fraction struct_fraction_reduce(struct fraction f){
    int b = f.numerador;
    int a = f.denominador;
    while (b != 0){
        int tmp = a;
        a = b;
        b = tmp%b;
    }
        struct fraction result = {
        (f.numerador/a),
        (f.denominador/a)};
    return result;
}

struct fraction raiz (struct fraction f){

    f = struct_fraction_reduce(f);

    struct fraction k = {1,1};
    struct fraction div2 = {2,1};

    for (int i = 0;i<4;i++){
        k =  struct_fraction_div(struct_fraction_add(k,struct_fraction_div(f,k)),div2);
    }

    print_fraction(k);
}


void main () {
    struct fraction a;
    pega_fraction( &a );
    raiz(a);
    
    
}