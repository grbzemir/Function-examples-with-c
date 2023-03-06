#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int topla(int sayi)
{
    if(sayi>0)

return sayi + topla(sayi-1);

}

int basamaktopla(int sayi)
{
    if(sayi>0)
    return sayi%10 + basamaktopla(sayi/10);
}

int main () 
{
    int sayi;

    system("color 0a");
    printf("sayi giriniz: \n");
    scanf("%d", &sayi);

    int sonuc;
    sonuc = basamaktopla(sayi);
    sonuc=topla(sayi);
    printf("0 ile %d arası toplam sonuc: %d",sayi,topla(sayi));
    printf("%d sayisin rakamları toplamı: %d",sayi,basamaktopla(sayi));

return 0;
}