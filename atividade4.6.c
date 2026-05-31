/*4.6 Escreva um programa que recebe uma palavra e diz se a palavra é um palíndromo (um
palíndromo é uma palavra que é a mesma de trás para a frente, como arara).*/

void main (){
    char palavra [100]; 

    scanf("%s",palavra);

    int tamanho =0 ; 

    for (int i =0;i<100;i++){
        if (palavra[i] == '\0') {tamanho = i;break;}
    }
    printf("tamanho %d\n",tamanho);

    int palindromo = 1;

    for (int i =0;i<tamanho;i++){
        printf("%c e %c",palavra[i],palavra[tamanho-i-1]);
        if (palavra[i] != palavra[tamanho-i-1]) {palindromo = 0;break;};
    }
    if (palindromo) printf("Palindromo");
    else printf("Nao Palindromo");
}