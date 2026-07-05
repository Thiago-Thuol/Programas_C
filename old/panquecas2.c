#include <stdio.h>

void main () {

    int tam ;
    printf("Digite o Tamanho "); 
    scanf("%d",&tam);
    printf("\n");


    int pilha [tam];

    for (int i = 0;i<tam;i++){
        printf("Digite o numero %d ",i+1);
        scanf("%d",&pilha[i]);
        printf("\n");
    }
    printf("Sua lista inicial\n");
    for (int print = 0;print < tam; print++){
            printf("%d ",pilha[print]);
        }
        printf("\n");

    int posmaior = 0;
    int viradastotais = 0;
        //inicio do loop
    for (int times = 0 ; times < tam ; times++){
        printf ("times = %d\n",times);
        
        posmaior = times;
        printf("MaiorINI = %d\n",pilha[posmaior]);

        //achar o maior
        for (int p = times+1 ; p < tam ;p++){
            if (pilha[posmaior] < pilha[p] ) posmaior = p ;
        }
        printf("Maior = %d\n",pilha[posmaior]);
        // verifica se o maior ja se encontra na primeira pos
        if (pilha[posmaior] == pilha[times]) {printf("Ja na ordem %d \n",pilha[posmaior]); continue ;}

        //pos maior e o numero do index ex posmaior 4 = 1,2,3,4,[5],6,7
        // se eu quero inverter 6,5,1,[3],2 pos 3 . tam-pos = 5-3 = 2     0<2 True 1<2 True 2<2 False roda 2 vezes

        if (pilha[posmaior] != pilha[tam-1]) viradastotais ++;
        
        for (int a = 0; a < tam-posmaior; a++){
            for (int m = 1,t =0;m< tam-posmaior-a;m++){
                // 6,5,1,4,3,2 -- 6,5,1,2,3,4 
                t = pilha[posmaior+m];
                pilha[posmaior+m] = pilha[posmaior+m-1];
                pilha[posmaior+m-1] = t;
                }

        }
        // print depois da pimeirira virada
        printf("primeira virada\n");
        for (int print = 0;print < tam; print++){
            printf("%d ",pilha[print]);
        }
        printf("\n");

        // Vira a partir do ponto direiro do maior ja arrumado ex || 6,5,1,2,3,4 -- 6,5,e,1,2,3,4 -- 6,5,4,3,2,1
        
        for (int a = 0; a < tam-times; a++){
            //tam - times = 6 - 2 = 4 roda 3 vezes
            for (int m = 1,t =0;m< tam-times-a;m++){
                //6,5,1,3,2,4 -- 6,5,e,1,3,2,4 -- 6,5,4,2,3,1
                t = pilha[times+m];
                pilha[times+m] = pilha[times+m-1];
                pilha[times+m-1] = t;
                }
        }

        // print depois da segunda virada
        printf("segunda virada\n");
        for (int print = 0;print < tam; print++){
            printf("%d ",pilha[print]);
        }
        printf("\n");
        viradastotais ++;

    }

    printf("\nviradas Totais = %d",viradastotais);

}