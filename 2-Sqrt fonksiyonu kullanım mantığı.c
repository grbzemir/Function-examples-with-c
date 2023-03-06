#include<stdio.h>
#include<stdlib.h>
#include<math.h>

     // sqrt fonksiyonu kullanım mantığı

int main () {
    int i;
    double sonuc;
    printf(" sayiyi giriniz:");
    scanf("%d",&i);
    sonuc=sqrt(i);
    printf("sonuc:%f",sonuc);
    return 0;
}