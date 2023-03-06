#include<stdio.h>
#include<stdlib.h>
#define pi 3.14

float daire_alan(float yaricap) {
    float sonuc;
    sonuc = pi * yaricap * yaricap;
    return sonuc;
}

float daire_cevre(int yaricap) {
    float sonuc;
    sonuc = 2 * pi * yaricap;
    return sonuc;
}

int main () {
   
   int dairenin_yaricapi,secim;

   printf("Dairenin yaricapini giriniz:");
   scanf("%d",&dairenin_yaricapi);
   printf("hangi işelmi yapmak istiyorsunuz");
   printf("dairenin alani icin 1'e cevresi icin 2'ye basiniz:");
    scanf("%d",&secim);
    if(secim==1)
    {
        printf("dairenin alani:%f",daire_alan(dairenin_yaricapi));
    }
    else if(secim==2)
    {
        printf("dairenin cevresi:%f",daire_cevre(dairenin_yaricapi));
    }
    else
    {
        printf("yanlis secim yaptiniz");
    }
return 0;
}