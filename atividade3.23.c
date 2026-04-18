/*
Um método simples de multiplicar dois números inteiros a e b é usado no interior da
Rússia até hoje. Adaptando-o para a Era da Tecnologia da Informação, o algoritmo pode
ser o seguinte:
(a) Cria-se um inteiro x, inicializado com zero.
(b) Se a é ímpar, soma-se b em x.
(c) Multiplica-se b por 2.
(d) Divide-se a por 2 (arredonda-se para baixo se for necessário).
(e) Repete-se os passos anteriores (exceto o primeiro, obviamente) até que a seja zero.
Ao nal deste algoritmo, x estará com o valor de a ∗ b. Suas tarefas são:
 Programar o algoritmo e conmar que ele funciona.
 Explicar por que ele funciona.
*/

#include <stdio.h>

void main () {
    int a = 0 , b =0;

    printf("Digite a * b : ");
    scanf("%d %d",&a,&b);

    int  x =0;

    while (a != 0){
        if (a%2 != 0) {x += b;}
        b += b;
        a /= 2;
    }
    printf("A multiplicação é : %d",x);
}