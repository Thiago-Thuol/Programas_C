#include <stdio.h>
#include <unistd.h>

#define MAXTITULO 50

struct livro {

char titulo[MAXTITULO];
char autor[MAXTITULO];
char editora [MAXTITULO];
char ISBN[15];
int ano;
int paginas;
float preco;
int quantidade;

};

void printlivro (struct livro liv) {
    printf("Titulo %s\n",liv.titulo);
    printf("Autor %s\n",liv.autor);
    printf("Editora %s\n",liv.editora);
    printf("ISBN %s\n",liv.ISBN);
    printf("ANO %d\n",liv.ano);
    printf("Paginas %d\n",liv.paginas);
    printf("Preco %.2f\n",liv.preco);
    printf("Estoque %d\n",liv.quantidade);
    printf("\n");
}

void main () {
    printf("\033[H\033[J");
    struct livro catalago[] = {{"Metamorfose", "Kafka" , "Unicamp" 
                    , "111111111111111", 1927 , 100 ,  56.9,10},
                    {"PequenoGUI", "Guiulha" , "LOmbraria" 
                    , "111111111111112", 2030 , 1 ,  1.99,1}};
    
    int tamanho = sizeof(catalago)/sizeof(catalago[0]);
    float caixa = 0;

    while (1){
        printf("\033[H\033[J");
        for (int i = 0;i<tamanho;i++){
        printlivro(catalago[i]);
    }
    char ch = 0;
    printf ("compra ou fim [c/f]");
    scanf("%c",&ch);
    if ( ch == 'f') break;
    if ( ch == 'c' ){

        int esc = 0;
        printf ("escolha o livro");
        scanf("%d",&esc);
        printf ("voce escolheu\n");
        printlivro(catalago[esc]);
        if ( catalago[esc].quantidade == 0 ) printf("sem estoque\n");
        else  {
            catalago[esc].quantidade --;
            caixa += catalago[esc].preco;

        }
        sleep(1);
    }

    }
}