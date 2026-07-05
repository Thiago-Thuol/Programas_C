#include <stdio.h>

struct fraction {
    int numerador;
    int denominador;

};

void print_fraction(struct fraction f){
    printf("%d / %d = %0.2f\n",f.numerador,f.denominador, 1.0*f.numerador/f.denominador);
}

void pega_fraction (struct fraction * f){
    scanf("%d %d", &f->numerador,&f->denominador);
}

struct fraction struct_fraction_mult(struct fraction fraction1,struct fraction fraction2){
    struct fraction result = {(fraction1.numerador*fraction2.numerador),(fraction1.denominador*fraction2.denominador)};
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

void main () {
    struct fraction a,b,c;
    pega_fraction( &a );
    pega_fraction( &b );
    pega_fraction( &c );
    print_fraction( a );
    print_fraction( b );
    print_fraction( c );
    print_fraction(struct_fraction_mult(a,b));
    print_fraction(struct_fraction_add(a,b));
    print_fraction(struct_fraction_reduce(a));
}
