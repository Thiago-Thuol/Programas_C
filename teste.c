#include <stdio.h>

void main() {
int a = 105;
float x = 101.31;
printf("Com d: %d\n", a ); // Depois de rodar cada um dos comandos,
printf("Com 7d: %7d\n", a ); // explique o que ele fez!
printf("Com 07d: %07d\n", a );
printf("Com -7d: %-7d\n", a );
printf("Com f: %f\n", a );
printf("Com 7f: %7f\n", x );
printf("Com .3f: %.3f\n", x );
printf("Com 7.4f: %7.4f\n", x );
printf("Com c: %c\n", a );
printf("Com c: %c\n", x );

float c=0,F = 33;
c = (F - 32) * 5/9;
printf("%f\n",c);
c = 5/9.0 * (F - 32);
printf("%f\n",c);
c = 1.0 * 5/9 * (F - 32);
printf("%f\n",c);
c = 5 * 1/9 * (F - 32);
printf("%f\n",c);
}