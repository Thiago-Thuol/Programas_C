/*
7.3 Planeje structs para armazenar os dados de ligações telefônicas e os dados de usuários de
telefones. Depois faça o algoritmo para listar todas as chamadas feitas por um usuário
em um mês de uso do telefone. Não esqueça de justicar quaisquer decisões importantes
que você tenha tomado ao planejar os registros.
*/

#include <stdio.h>


struct phone{
    int number;
    int rece;

};

struct user {
    char nome [100];
    int call;
    struct phone youphone;
};

void main  (){

}
