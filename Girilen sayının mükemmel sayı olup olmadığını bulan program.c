#include<stdio.h>
#include<stdlib.h>
 
// Kendisi hariç bütün pozitif bölenlerinin toplamı kendisine eşit olan sayılara mükemmel sayı denir.

int main () {
    int sayi;
    int toplam=0;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    for(int i=1;i<sayi;i++)
    {
        if (sayi%i==0)
        {
            toplam=toplam+i;
        }
    }
    if (toplam==sayi)
    {
        printf("mukemmel sayi");
    }
    else
    {
        printf("mukemmel sayi degil");
    }
    return 0;
}