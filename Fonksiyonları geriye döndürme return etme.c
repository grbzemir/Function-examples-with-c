#include<stdio.h>
#include<stdlib.h>

int toplam(int sayi1,int sayi2)
{
    return (sayi1+sayi2);
}

int main () {
    int sayi1;
    int sayi2;
    int toplam;
    scanf("%d",&sayi1);
    scanf("%d",&sayi2);
    toplam=toplam(sayi1,sayi2);
    printf("toplam:%d",toplam);
    return 0;
}

