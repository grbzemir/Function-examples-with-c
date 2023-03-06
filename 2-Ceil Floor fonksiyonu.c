#include<stdio.h>   
#include<stdlib.h>

int main () {
    double sayi,sonuc1,sonuc2;
    printf("sayi giriniz:");
    scanf("%lf",&sayi);
    sonuc1=ceil(sayi);
    sonuc2=floor(sayi);
    printf("sonuc: %f",sonuc1);
    printf("sonuc: %f",sonuc2);
    return 0;
}