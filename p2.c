#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Fracao {
  int  num, den;
};

void printfracao( struct Fracao f ) {
  printf( "%d/%d (%lf)\n", f.num, f.den, 1.0*f.num/f.den );
}

void pegafracao( struct Fracao * f ) {
  scanf( " %d/%d", &f->num, &f->den);
}

struct Fracao soma( struct Fracao a, struct Fracao b ) {
  struct Fracao res;
  res.den = a.den * b.den;
  res.num = a.num * b.den + b.num * a.den;
  return res;
}

struct Fracao subtrai( struct Fracao a, struct Fracao b ) {
  struct Fracao res;
  res.den = a.den * b.den;
  res.num = a.num * b.den - b.num * a.den;
  return res;
}

void main() {

  struct Fracao a, b, c;

  pegafracao( &a );
  pegafracao( &b );

  c = soma( a, b );
  printfracao( c );

}
