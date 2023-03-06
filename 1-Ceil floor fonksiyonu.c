#include<stdio.h>
#include<stdlib.h>

// ceil floor fonksiyonu.c yuvarlama işlemi yapma!
// floor alta yuvarlama
// ceil üste yuvarlama

int main() {

    double sayi,sonuc1,sonuc2;

    char devam;

    printf("**********YUVARLAMA ISLEMI**********\n");

    printf("-----------------------------------\n");

    do

     {

        printf("yuvarlayacağiniz sayiyi giriniz:");
        scanf("%lf",&sayi);
        sonuc1=floor(sayi);
        sonuc2=ceil(sayi);
        printf("alt yuvarlama:%f\n",sonuc1);
        printf("üst yuvarlama:%f\n",sonuc2);
        printf("devam etmek istiyor musunuz?(evet ise E, hayir ise H):");
        scanf("%s",&devam);

    }

    while(devam=='E'|| devam=='e');

    
    return 0;
}

