#include <stdio.h>

void main () {

    int n;
    scanf ("%d",&n);


    int digitos=0;
    
    for (int i = n;i > 0;i/=10 ) digitos ++;
    
    int new =0 ;

    for (int z = digitos; z > 0 ; z--){
        new *= 10;
        new += n%10;
        n /= 10;
    }
    int algarismos =1 ;

    while (digitos > 0){algarismos *= 10;digitos--;}
    
    for (;algarismos > 0;algarismos/=10){
    if (new / algarismos == 0) printf("0");
    else {printf ("%d",new);break;}
    }
    
}