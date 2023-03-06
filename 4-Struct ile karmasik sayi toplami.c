#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<time.h>


struct karmasik
{
    float real;
    float imaginer;
};


int main ()
{

    struct karmasik sayi1, sayi2, toplam;
    char i;

    system("color 74");
    printf("1. karmasik sayiyi giriniz: ");
    scanf("%f %f", &sayi1.real, &sayi1.imaginer,&i);

    // 8+4i , 9+5i

    printf("2. karmasik sayiyi giriniz: ");
    scanf("%f %f", &sayi2.real, &sayi2.imaginer,&i);

    toplam.real = sayi1.real + sayi2.real;
    toplam.imaginer = sayi1.imaginer + sayi2.imaginer;

    printf("Toplam: %.2f + %.2fi", toplam.real, toplam.imaginer);

    return 0;
}

 