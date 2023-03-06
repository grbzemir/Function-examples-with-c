#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// struct gönderilen verileri birleştirir

struct ogrenci {
    char ad[30];
    char soyad[30];
    int yas;
    int numara;
};

int main () {

    struct ogrenci ogrenci1={"Emircan","gürbüz",18,1724};
    struct ogrenci ogrenci2={"bilge","uzun",17,81};
    struct ogrenci ogrenci3={"mehmet","gürbüz",18,1724};
    
    printf("ogrenci1 ad: %s\n",ogrenci1.ad);
    printf("ogrenci1 soyad: %s\n",ogrenci1.soyad);
    printf("ogrenci1 yas: %d\n",ogrenci1.yas);
    printf("ogrenci1 numara: %d\n",ogrenci1.numara);
    printf("\n\n");
    printf("ogrenci2 ad: %s\n",ogrenci2.ad);
    printf("ogrenci2 soyad: %s\n",ogrenci2.soyad);
    printf("ogrenci2 yas: %d\n",ogrenci2.yas);
    printf("ogrenci2 numara: %d\n",ogrenci2.numara);
    printf("\n\n");
    printf("ogrenci3 ad: %s\n",ogrenci3.ad);
    printf("ogrenci3 soyad: %s\n",ogrenci3.soyad);
    printf("ogrenci3 yas: %d\n",ogrenci3.yas);
    printf("ogrenci3 numara: %d\n",ogrenci3.numara);
    printf("\n\n");

    return 0;
}