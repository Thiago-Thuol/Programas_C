#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int valor;
    struct Node* esq;
    struct Node* dir;
    
} Node;

Node* criarNode(int valor) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->valor = valor;
    node->esq = NULL;
    node->dir = NULL;
    return node;
}

Node* inserirNode(Node* raiz, int valor) {
    if (raiz == NULL) return criarNode(valor);
    if (valor < raiz->valor) raiz->esq = inserirNode(raiz->esq, valor);
    else raiz->dir = inserirNode(raiz->dir, valor);
    
    return raiz;
}

void printTree(struct Node* root, int space) {
    const int COUNT = 10;
    if (root == NULL) return;
    space += COUNT;
    printTree(root->dir, space);
    printf("\n");
    for(int i = COUNT; i < space; i++) printf(" ");
    printf("%d\n", root->valor);
    printTree(root->esq, space);
}

int main() {
    Node* root = NULL;

    root = inserirNode(root, 50);
    root = inserirNode(root, 30);
    root = inserirNode(root, 70);
    root = inserirNode(root, 20);
    root = inserirNode(root, 40);
    root = inserirNode(root, 60);
    root = inserirNode(root, 80);

    printTree(root, 0);

    return 0;
}