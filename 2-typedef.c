#include<stdio.h>
#include<stdlib.h>
#include<string.h>
 

 typedef int d1;

 int main () {

    int toplam,carpim,fark,mod;
    system("color 0a");
    d1 d2;
    d1 d3;
    d2=20;
    d3=30;
    toplam=d2+d3;
    printf("toplam: %d",toplam);
    carpim=d2*d3;
    printf("carpim: %d",carpim);
    fark=d3-d2;
    printf("fark: %d",fark);
    mod=d2%d3;
    printf("mod: %d",mod);

    return 0;
}

    
