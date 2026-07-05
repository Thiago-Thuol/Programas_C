#include <stdio.h>

void main () {

    int tamanho = 10;
    int pilha[10] = {21, 12, 43, 20, 35, 50, 47, 29, 31 ,4};

    // fazer os scanf e adicionar os itens na lista

    int viradas = 0;

    int maior = pilha[0];

    
    for (int i =1;i<10;i++){
        if (maior < pilha[i]) maior = pilha[i];
    }
    printf("%d",maior);
    
}