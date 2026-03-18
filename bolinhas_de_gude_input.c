#include <stdio.h>

void main(){
    int i,a=0,b=0,c=0,caixas=0;



    printf("Bolinhas Grandes: ");
    scanf("%d",&a);
    printf("Bolinhas Media: ");
    scanf("%d",&b);
    printf("Bolinhas Pequenas: ");
    scanf("%d",&c);

    for (i = a; i >= 0; i = i - 150){

        caixas += 1; 
        a = i;
    }
    for (i = b; i >= 0; i = i - 300){

        caixas += 1;
        b = i;
    }
    for (i = c; i >= 0; i = i - 550){

        caixas += 1;
        c = i;
    }
    b = (float) c * 1.84;
    b = (float) a * 2 ;
    printf("%d\n",caixas-3);
    printf("%d,%d,%d\n",a,b,c);
    
}