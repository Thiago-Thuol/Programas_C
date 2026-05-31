#include <stdio.h>

void main () {
    char moleculas [100] = {0};
    scanf("%s",moleculas);
    for (int i = 0; i<100;){
        if (moleculas[i] >64 && moleculas[i] <91){
            printf("%c",moleculas[i]);
            i++;
            if (moleculas[i] >96 && moleculas[i] <123){
                printf("%c",moleculas[i]);
                i++;
            }
        }
        else i++;

    }
}