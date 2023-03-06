#include<stdio.h>
#include<stdlib.h>

typedef struct adresDefteri
{
    char ad[20];
    char soyad[20];
    char tel[20];
    char adres[50];
    char postakodu[20];
    char sehir[20];

}defter;

int main ()
{
    char satir;
    int n;
    printf("kac adet kayit tutulcak: ");
    scanf("%d",&n);
    scanf("%c",&satir);
    defter iletisim[n];

    int i;

    for(i=0;i<n;i++)
    {
        printf("ad: ");
        gets(iletisim[i].ad);
        printf("soyad: ");
        gets(iletisim[i].soyad);
        printf("tel: ");
        gets(iletisim[i].tel);
        printf("adres: ");
        gets(iletisim[i].adres);
        printf("postakodu: ");
        gets(iletisim[i].postakodu);
        printf("sehir: ");
        gets(iletisim[i].sehir);
        printf("\n\n");
    }

    printf("ad \t soyad \t tel \t adres \t postakodu \t sehir \n");
    printf("----------------------------------------------------------------------------------------------------------------------------\n");

    for(i=0;i<n;i++)
    {
        printf("%s \t %s \t %s \t %s \t %s \t %s \n",iletisim[i].ad,iletisim[i].soyad,iletisim[i].tel,iletisim[i].adres,iletisim[i].postakodu,iletisim[i].sehir);
    }

    return 0;
}