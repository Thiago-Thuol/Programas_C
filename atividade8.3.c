#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main () {
    FILE * arq = fopen ("palavras.txt","w");
    
    char pal1[10] = "onion";
    char pal2[10] = "articuno";
    char pal3[10] = "magnamar";
    char pal4[10] = "mewtwo";
    for (int i = 0 ; i < 20 ; i ++){
        fprintf(arq,"%s\n",pal1);
        fprintf(arq,"%s\n",pal2);
        fprintf(arq,"%s\n",pal3);
        fprintf(arq,"%s\n",pal4);
    }

    fclose(arq);
    FILE * arq1 = fopen ("palavras2.txt","w");
    
    char pal10[10] = "bilau";
    char pal20[10] = "birimbau";
    char pal30[10] = "golpista";
    char pal40[10] = "pituca";
    for (int i = 0 ; i < 20 ; i ++){
        fprintf(arq1,"%s\n",pal10);
        fprintf(arq1,"%s\n",pal20);
        fprintf(arq1,"%s\n",pal30);
        fprintf(arq1,"%s\n",pal40);
    }

    fclose(arq1);

    FILE * read = fopen ("palavras.txt","r");

    char temp_vet [10] = {0};
    int count = 0;
    for (int i = 1; i < 21; i++ ){
        read = fopen ("palavras.txt","r");
        count = 0;
        while (fscanf(read,"%s",temp_vet) == 1){
            if (strlen(temp_vet) == i)  count ++;
        }
        printf("%d palavras com %d letras\n",i,count);
    }
}