#include <stdio.h>
#include <stdlib.h>

void main () {
    FILE * arq = fopen ("arquivo_legal.txt", "w");

    for (int i = 0; i < 1000; i++){
        fprintf (arq , "%d\n", i);
    }
    fclose (arq);

    FILE * arq1 = fopen ("arquivo_legal.txt", "r");

    int maior = 0;
    int temp = 0;
    while (fscanf(arq1,"%d",&temp) == 1){
        if (temp > maior) maior = temp; 
    }
    printf("%d",maior);
    fclose (arq1);
}