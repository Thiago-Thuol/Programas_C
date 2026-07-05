#include <stdio.h>
#include <stdlib.h>

void main () {
    FILE * arq = fopen ("numeros.txt","w");

    for (int i = 0; i< 1000;i++){
        if (i % 2 == 0) fprintf(arq,"%d\n",201);
        else fprintf(arq,"%d\n",200);
    }
    fclose (arq);

    FILE * read = fopen ("numeros.txt","r");
    FILE * read_big = fopen ("numeros.txt","r");

    int temp = 0;
    int maior = 0;
    while (fscanf(read,"%d",&temp) == 1){
        if (temp > maior)maior = temp;
    }
    int times = 0;
    while (fscanf(read_big,"%d",&temp) == 1){
        if (temp == maior)times ++;
    }
    printf ("%d %d",maior,times);

    fclose (read);
    fclose (read_big);
}