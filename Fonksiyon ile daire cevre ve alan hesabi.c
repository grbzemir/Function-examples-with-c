#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define pisayisi 3.14


void alanHesapla(float yaricap)
{
    float alan;
    alan = pisayisi * (yaricap * yaricap);
    printf("Dairenin alani: \n%f",alan);
}

void cevreHesapla(float yaricap)
{
    float cevre;
    cevre = 2 * pisayisi * yaricap;
    printf("Dairenin cevresi: \n%f",cevre);
}


int main ()
{
    float yaricap;
    system("color 0a");
    printf("dairenin yaricapini giriniz: ");
    scanf("%f",&yaricap);

    alanHesapla(yaricap);
    cevreHesapla(yaricap);

    return 0;
}