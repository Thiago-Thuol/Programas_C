
#include <stdio.h>

#define MAXTITULO 50

struct livro {

char titulo[MAXTITULO];
char autor[MAXTITULO];
char editora [MAXTITULO];
char ISBN[15];
int ano;
int paginas;
float preco;

};

void printlivro (struct livro liv) {
    printf("%s\n",liv.titulo);
    printf("%s\n",liv.autor);
    printf("%s\n",liv.editora);
    printf("%s\n",liv.ISBN);
    printf("%d\n",liv.ano);
    printf("%d\n",liv.paginas);
    printf("%.2f\n",liv.preco);
}

void main () {

    struct livro fav = {"Metamorfose", "Kafka" , "Unicamp" 
                    , "111111111111111", 1927 , 100 ,  56.9};
    
    printlivro(fav);
}