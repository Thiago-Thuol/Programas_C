/*
Na ginástica olímpica as notas de uma equipe são dadas assim: seis atletas fazem seus
exercícios e recebem suas notas entre 0 e 10. Em seguida a nota geral da equipe é dada
pela média das quatro maiores notas recebidas. Faça um programa que recebe seis notas
correspondentes aos atletas e apresenta a nota geral da equipe.
*/

#include <stdio.h>

void main () {

    float a1 = 0.0f,
          a2 = 0.0f, 
          a3 = 0.0f, 
          a4 = 0.0f, 
          a5 = 0.0f, 
          a6 = 0.0f;

    float primeiro = 0 , segundo = 0, terceiro = 0;

    printf ("Digite a nota das 6 atletas");
    scanf ("%f %f %f %f %f %f",&a1,&a2,&a3,&a4,&a5,&a6);

    primeiro = a1;

    if (a2 > primeiro){primeiro = a2; segundo = a1;}
    else segundo = a2;

    if (a3 > segundo) {
        if (a3 > primeiro){terceiro = segundo; segundo = primeiro; primeiro = a3;}
        else{terceiro = segundo; segundo = a3;}
    }
    else terceiro = a3;

    if (a4 > terceiro) {
        if (a4 > segundo){
            if (a4 > primeiro) {terceiro = segundo; segundo = primeiro; primeiro = a4;
            }else {terceiro = segundo; segundo = a4;}
        }else terceiro = a4;
    }

        if (a5 > terceiro) {
        if (a5 > segundo){
            if (a5 > primeiro) {terceiro = segundo; segundo = primeiro; primeiro = a5;
            }else {terceiro = segundo; segundo = a5;}
        }else terceiro = a5;
    }

        if (a6 > terceiro) {
        if (a6 > segundo){
            if (a6 > primeiro) {terceiro = segundo; segundo = primeiro; primeiro = a6;
            }else {terceiro = segundo; segundo = a6;}
        }else terceiro = a6;
    }
    float media = ( primeiro + segundo + terceiro ) / 3;
    printf ("%f %f %f\n",primeiro,segundo,terceiro);
    printf ("%f",media);


}