#include<stdio.h>
#include<stdlib.h>


void saniyecevirme(int saniye)
{
    int saat;
    int dakika;
    int sn;
    int zaman;

    saat = saniye / 3600;
    dakika = (saniye % 3600) / 60;
    sn = (saniye % 3600) % 60;
    zaman = saat + dakika + sn;

    printf("**********************\n");
    printf("saat: %d\n",saat);
    printf("dakika: %d\n",dakika);
    printf("saniye: %d\n",sn);
    printf("zaman: %d\n",zaman);
    printf("**********************\n");

}

int main ()
{
    int saniye;
    system("color 74");
    printf("lutfen saniye degerini giriniz: ");
    scanf("%d",&saniye);

    saniyecevirme(saniye);

    return 0;
}