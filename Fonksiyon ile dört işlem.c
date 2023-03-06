#include<stdio.h>
#include<stdlib.h>


int topla(int x , int y)
{
    int sonuc;
    sonuc=x+y;
    return sonuc;
}

int cikar(int x , int y)
{
    int sonuc;
    sonuc=x-y;
    return sonuc;
}

int carp(int x , int y)
{
    int sonuc;
    sonuc=x*y;
    return sonuc;
}

int bol(int x , int y)
{
    float sonuc;
    sonuc=x/y;
    return sonuc;
}


int main ()
{

int sayi1;
int sayi2;
printf("lutfen birinci sayiyi giriniz: ");
scanf("%d",&sayi1);
printf("lutfen ikinci sayiyi giriniz: ");
scanf("%d",&sayi2);

printf("%d\n",topla(sayi1,sayi2));
printf("%d\n",cikar(sayi1,sayi2));
printf("%d\n",carp(sayi1,sayi2));
printf("%d\n",bol(sayi1,sayi2));

return 0;
}
