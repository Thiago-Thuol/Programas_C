#include <stdio.h>

void main (){
    int x1,x2,y1,y2;

    int x3,x4,y3,y4;

    printf("Digite as coordenada do primeiro e do segundo ponto do primeiro retangulo ex : x,y\n");
    scanf("%d,%d", &x1, &y1);
    scanf("%d,%d", &x2, &y2);

    printf("Digite as coordenada do primeiro e do segundo ponto do segundo retangulo ex : x,y\n");
    scanf("%d,%d", &x3, &y3);
    scanf("%d,%d", &x4, &y4);

    if (x3 >= x2 || x4 <= x1 || y2 >= y3 || y4 >= y1){
        printf("nao colidem");
    }
    else{
        printf("colidem\n");

        int int_x_esq, int_x_dir,int_y_up, int_y_down,area;

        if (x3 > x1) int_x_esq = x3;
        else int_x_esq = x1;

        if (x2 > x4) int_x_dir = x4;
        else int_x_dir = x2;

        if (y3 > y1) int_y_up = y1;
        else int_y_up = y3;

        if (y2 > y4) int_y_down = y2;
        else int_y_down = y4;

        area =  (int_x_dir - int_x_esq) * (int_y_up - int_y_down);

        printf("area da intercecao %d",area);
    }
}