#include <stdio.h>

void main(){
    int a=0,b=0,c=0,primeiro=0,segundo=0,terceiro=0;
    printf("Digite dois numeros\n");
    scanf("%d,%d,%d",&a,&b,&c);

    if ((a>b) && (a>c)){
        primeiro = a;
        if (b>c){
            segundo = b;
            terceiro = c;
        }
        else{
            segundo = c;
            terceiro = b;
        }
    }
    else{
        if (b>c){
            primeiro = b;
            if (a>c){
            segundo = a;
            terceiro = c;
            }
            else{
            segundo = c;
            terceiro = a;
            }    
        }
        else{
            primeiro = c;
            if (a>b){
                segundo = a;
                terceiro = b;
            }
            else{
                segundo = b;
                terceiro = a;
            }
        }
    }
    printf("\n%d %d %d",terceiro,segundo,primeiro);
}