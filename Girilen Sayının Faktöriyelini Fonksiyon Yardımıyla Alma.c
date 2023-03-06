#include<stdio.h>
#include<stdlib.h>


int faktoriyel(int sayi)
{

    int faktor;
    faktor = 1;

    int i;

    for(i=1;i<=sayi;i++)
    {
        faktor = faktor * i;
    }
    
    printf("\n");
    printf("faktoriyel: %d",faktor);

}

int main ()
{
    int sayi;
    system("color 0a");
    printf("lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);

    faktoriyel(sayi);

    return 0;
}