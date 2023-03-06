#include<stdio.h>
#include<stdlib.h>

int asal_mi(int sayi)
{
    int i;
    for(i=2;i<sayi;i++)
    {
        if(sayi%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main ()
{
    int sayi;
    printf("asal sayi olup olmadigini bulmak istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    if(asal_mi(sayi)==1)
    {
        printf("asal sayidir.");
    }
    else
    {
        printf("asal sayi degildir.");
    }
    return 0;
}
