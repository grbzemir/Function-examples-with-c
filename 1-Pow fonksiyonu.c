#include<stdio.h>
#include<stdlib.h>

int main () {
    int i,sayi;
    double sayi1,sayi2,sayi3,sonuc;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    for(i=1;i<=2;i+=2)
    {
        printf("%d sayiyi giriniz:",i);
        scanf("%lf",&sayi1);
        printf("%d sayiyi giriniz:",i+1);
        scanf("%lf",&sayi2);
        sonuc=pow(sayi1,sayi2);
        printf("sonuc:%f",sonuc);
    }
    for(i=1;i<=sayi;i+=1)
    {
        printf("%d sayiyi giriniz:",i);
        scanf("%lf",&sayi3);
        sonuc=pow(sayi3,sonuc);
        printf("sonuc:%f",sonuc);
    }
    return 0;
}