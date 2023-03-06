#include<stdio.h>
#include<stdlib.h>

void hatayazdir(int hata) 
{
    printf("hata:%d",hata);
}


int main() {
    int sayi;
    printf("lütfen negatif olmayan bir sayi giriniz:");
    scanf("%d",&sayi);
    if(sayi<0)
    {
        hatayazdir(1);
    }
    else
    {
        printf("girdiginiz sayi:%d",sayi);
    }
    return 0;
}
