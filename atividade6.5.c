/*
6.5 Escreva uma função int ehNumero( char vet[] ) que recebe um vetor de caracteres
terminado por '\0' e retorna 0 ou 1 se o vetor pode estar representando um número (pense
que um número só pode ter os dígitos de 0 a 9 e mais um único ponto decimal).
*/

int ehNumero ( char vet[] ){
    int num = 1;
    int pont = 0;
    for (int i = 0;vet[i] == '\0';i++){
        if (vet[i] == '0' || vet[i] == '1' || vet[i] == '2' || vet[i] == '3' || vet[i] == '4' || vet[i] == '5' || vet[i] == '6' || vet[i] == '7' || vet[i] == '8' || vet[i] == '9');
        else num = 0;
        if (vet [i] == '.') pont ++;
    }
    if (pont > 1 || !num ) return 0;
    else return 1;
}

void main () {
    char palavra [1000] = {0};
    scanf("%d",palavra);
    if (ehNumero(palavra)) printf ("é numero ");
    else printf ("nao é numero ");
}