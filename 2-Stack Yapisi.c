#include<stdio.h>
#include<stdlib.h>
#include"stack.c"

// LİFO yapısı içerir son gireni ilk çıkarır

int main ()
{
    int i;
    int sayi;

    for(i=0;i<5;i++)
    {
        printf("lutfen bir sayi giriniz: ");
        scanf("%d",&sayi);
        push(sayi);
    }

    printf("ekleme islemi  tamamlandı,  cıkarma islemine geciliyor \n");

    while( !Empty() )
    {
        printf("%d \n",pop() );
    }

    printf("cıkarma islemi tamamlandı");

    return 0;
}