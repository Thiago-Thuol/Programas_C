#include <stdio.h>
#include <stdlib.h>

void main () {

    char frase [100] ={0};
    fgets(frase,sizeof(frase),stdin);

    int tam = 0;
    for (int i = 0;frase[i]!= '\n';i++){
        tam ++;
    }

    for (int i = 0;i< tam;i ++){
        if (frase[i] != ' ' && frase[i] != '\n'){
            printf("%c",frase[i]);
        }
        else printf ("\n");
    }

}