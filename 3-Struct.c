#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct kayit
{
    char ad[30];
    char soyad[30];
    int no;
    int sinif;
    float ort;
};

struct kayit ogr;

int main () {
    
system("color 0a");

printf("ad:");
scanf("%s",&ogr.ad);
printf("soy ad:",&ogr.soyad);
printf("no:");
scanf("%d",&ogr.no);
printf("sinif:");
scanf("%d",&ogr.sinif);
printf("ort:");
scanf("%f",&ogr.ort);

printf("ad: %s",ogr.ad);
printf("soy ad: %s",ogr.soyad);
printf("no: %d",ogr.no);
printf("sinif: %d",ogr.sinif);
printf("ort: %f",ogr.ort);

return 0;
}


