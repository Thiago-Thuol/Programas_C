#include <stdio.h>

void main () {
    char palavra [20];

    scanf("%20s",palavra);

    for (int i = 0; palavra[i] != '\0';){
        if (palavra[i+1] == '\0') break;
        int pas = palavra[i];
        palavra[i] = palavra[i+1];
        palavra[i+1] = pas;
        i += 2;
    }
    printf ("%s",palavra);

}