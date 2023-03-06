#include<stdio.h>
#include<stdlib.h>

int main () {
    double sayi,sonuc,taban;
    printf("sayiyi giriniz:");
    scanf("%lf",&sayi);
    printf("tabanı giriniz:");
    scanf("%lf",&taban);
    sonuc=log(sayi)/log(taban);
    printf("sonuc:%f",sonuc);
    return 0;
}
