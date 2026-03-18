#include <stdio.h>
#include <math.h>

void main(){
    int a=0,b=0,c=0;
    float delta=0,x1,x2;    

    printf("digte os coeficientes a b c");
    scanf("%d,%d,%d",&a,&b,&c);
    
    delta = sqrt(delta);

    if (delta >0){
        x1 = (-b + delta)/2*a;
        x2 = (-b - delta)/2*a;
        printf("%f.2,%f.2",x1,x2);
    }
    else printf("sem raizes reais");
}