#include<stdio.h>
#include<stdlib.h>

 void fibonacci(int sayi)
 {
    int ilksayi = 0;
    int ikincisayi = 1;

    int toplam = 0;

    printf("%d ",ilksayi);
    printf("%d ",ikincisayi);

    int i;

    for(i=0;i<sayi;i++)
    {
        toplam = ilksayi + ikincisayi;
        printf("%d ",toplam);
        ilksayi = ikincisayi;
        ikincisayi = toplam;
    }

printf("\n");
    }   





 int main ()
 {
    int sayi;
    system("color 0a");
    printf("fibonacci serisini gormek istediginiz sayiyi giriniz: ");
    scanf("%d",&sayi);

    printf("\n");
    fibonacci(sayi);

    return 0;
 }