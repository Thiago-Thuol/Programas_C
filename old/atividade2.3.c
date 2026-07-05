#include <stdio.h>

void main(){
    int a=0,b=0,c=0,p=0,s=0,t=0;
    float dp=0.0,ds=0.0;
    printf("Digite dois numeros\n");
    scanf("%d %d %d",&a,&b,&c);

    if ((a>=b) && (a>=c)){
        p = a;
        if (b>=c){
            s = b;
            t = c;
        }
        else{
            s = c;
            t = b;
        }
    }
    else{
        if (b>=c){
            p = b;
        }
        else{
            p = c;
            if (a>=b){
                s = a;
                t = b;
            }
            else{
                s = b;
                t = a;
            }
        }
    }
    dp = p * 0.5;
    ds = s * 0.75;
    printf("\n%d %f %f",t,dp,ds);
}