#include<stdio.h>
#include<stdlib.h>

void yerdegistir(int a , int b)
{
    int gecici;
    gecici = a;
    a = b;
    b = gecici;
    printf("\n\t Yer degistirdikten sonra x sayisi = %d ve y sayisi = %d",a,b);
}


int main ()
{
    int x;
    int y;

    system("color 74");
    printf("lutfen x degerini giriniz: ");
    scanf("%d",&x);
    printf("lutfen y degerini giriniz: ");
    scanf("%d",&y);

    printf("\n\t Yer degistirmeden önce x sayisi = %d ve y sayisi = %d",x,y);
    yerdegistir(x,y);

    return 0;
}