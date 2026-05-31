#include <stdio.h>

void main () {
    char palavra [20] = {0};
    int vogais = 0;
    int dupl = 0;
    int chiil = 1;

    scanf ("%s",palavra);
    for (int i =0;i <20;i++){
        if (i<19){
            if (palavra[i] == 'c' && palavra[i+1] == 'd') {chiil = 0;break;}
            if (palavra[i] == 'p' && palavra[i+1] == 'q') {chiil = 0;break;}
            if (palavra[i] == 'x' && palavra[i+1] == 'y') {chiil = 0;break;}
            if (palavra[i] == 'u' && palavra[i+1] == 'v') {chiil = 0;break;}
            if (palavra[i] == 'v' && palavra[i+1] == 'u') {chiil = 0;break;}
            if (palavra[i] == palavra[i+1]) dupl = 1;
        }
        if (palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u') vogais++;
    }
    if (chiil && dupl && vogais >2) printf ("legal");
    else printf ("chata");

}