#include <stdio.h>
#include <math.h>

void main(){
    int x1=0,r1=0,x2=0,r2=0,vx=0,vy=0,distancia2;
    float distancia=0,inclinacao=0;

    printf("Digite a coordenada 1");
    scanf("%d,%d",&x1,&r1);
    printf("Digite a coordenada 2");
    scanf("%d,%d",&x2,&r2);

    distancia = sqrt((((x1-x2)*(x1-x2)) + ((r1-r2)*(r1-r2))));
    if (((x1-x2)*(x1-x2))<0){
        vx = (x1-x2);
        }
    else
        vx = ((x1-x2))*-1;

    if (((r1-r2)*(r1-r2))<0)
        vx = (r1-r2);
    else
        vx = ((r1-r2))*-1;
    distancia2 = vx+vy;
    
    if (distancia > (r1+r2)){
        printf("Nao colidem\n");
    }
    else
        printf("Colidem");
}