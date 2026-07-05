/*
 A Lapônia vai estabelecer um sistema com apenas três tipos de moedinhas de centavos
lapões e o rei ja decidiu que não vai haver uma moeda de um centavo. Os ministros
dizem que com essa decisão alguns valores podem ser impossíveis de fornecer como troco,
e você deve escrever um algoritmo que recebe três valores propostos para as moedinhas e
descobre quais os valores entre 1 e 100 centavos que não podem ser construídos com elas.
Forneça os resultados para os seguintes casos de teste:
 Moedas de 2, 3 e 5 centavos. 1
 Moedas de 3, 4 e 7 centavos. 1,2,5
 Moedas de 2, 4 e 7 centavos. 1,3,5
 Moedas de 3, 7 e 11 centavos. 1,2,5
 Moedas de 2, 4 e 31 centavos.  1,3,5,7,9,11,13,15,17,19,21,23,25,27,29
 Moedas de 5, 7 e 17 centavos.  1,2,3,4,6,8,9,11,13,16,18,23
 Moedas de 5, 13 e 17 centavos. 1,2,3,4,6,7,8,9,11,12,14,16,19,21,24,29
 Moedas de 6, 9 e 19 centavos. 1,2,3,4,5,7,8,10,11,13,14,16,17,20,22,23,26,29,32,35,41
 Moedas de 7, 9 e 19 centavos. 1,2,3,4,5,6,8,10,11,12,13,15,17,20,22,24,29,31
*/

#include <stdio.h>

void main () {
    int m1 =7,  m2 =9,  m3=19;

    for (int cem = 1,pos = 0; cem <= 100;cem++){
        pos = 0;
        for (int p1 = 0;p1 <= 100;p1++){
            for (int p2 = 0;p2 <= 100;p2++){
                for (int p3 = 0;p3 <= 100;p3++){
                    if ((p1*m1)+(p2*m2)+(p3*m3)==cem) pos = 1;
                }
            }
        }
        if (pos == 0) printf("%d,",cem);



    }

}