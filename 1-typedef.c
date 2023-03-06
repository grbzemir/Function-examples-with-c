#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// typedef kullanımı yeni bir tam sayı tanımalamadan mevcut tamsayı üzerinden tanımlama işlemi yapma


typedef int tamsayi,carpim,bölüm,küp,kare,toplam,fark,mod;
int main () {

    system("color 0a");

    tamsayi ts;
    ts=10;
    tamsayi ts2;
    tamsayi ts3;
    ts2=20;
    ts3=30;
    printf("ts: %d",ts);
    printf("ts2: %d",ts2);
    printf("ts3: %d",ts3);
    tamsayi carpim=ts*ts2*ts3;
    printf("carpim: %d",carpim);
    tamsayi bölüm=ts/ts2/ts3;
    printf("bölüm: %d",bölüm);
    tamsayi küp=ts*ts*ts;
    printf("küp: %d",küp);
    tamsayi kare=ts*ts;
    printf("kare: %d",kare);
    tamsayi toplam=ts+ts2+ts3;
    printf("toplam: %d",toplam);
    tamsayi fark=ts-ts2-ts3;
    printf("fark: %d",fark);
    tamsayi mod=ts%ts2%ts3;
    printf("mod: %d",mod);

    return 0;
}