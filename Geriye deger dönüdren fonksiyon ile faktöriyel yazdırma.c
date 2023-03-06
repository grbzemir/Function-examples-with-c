#include<stdio.h>
#include<stdlib.h>

int faktoriyel(int sayi)
{
    int fact =1;
    int i;
    for(i=1;i<=sayi;i++)
    {
        fact=fact*i;
    }
    return fact;
}
int main () {
    int fact =1;
    int i;
    int sayi;
    printf("faktöriyelini bulmak istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);
    for(i=1;i<=sayi;i++)
    {
        fact=fact*i;
    }
    printf("faktöriyel:%d",fact);
    return 0;
}
