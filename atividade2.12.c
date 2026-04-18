#include <stdio.h>
#include <math.h>

int main(){
    int a=0,b=0,c=0;
    float und_delta=4,delta=0,x1,x2;    

    printf("digte os coeficientes a b c");
    scanf("%d,%d,%d",&a,&b,&c);

    und_delta = b*b;
    und_delta -= 4*a*c;
    printf("%2.0f\n",und_delta);
        
    delta = sqrt(und_delta);

    if (delta >0){
        x1 = ((-1)*b + delta)/2*a;
        x2 = ((-1)*b - delta)/2*a;
        printf("%2.2f,%2.2f",x1,x2);
    }
    else{
        if (delta == 0){
            x1 = ((-1)*b/2*a);
            printf("%f",x1);
        }
        else printf("sem raizes reais");        
    }
    return 0;
}