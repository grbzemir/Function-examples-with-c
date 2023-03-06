#include<stdio.h>
#include<stdlib.h>

int main ()
{

    int sayi1;
    int sayi2;
    
    system("color 0a");
    printf("Birinci sayiyi giriniz: ");
    scanf("%d",&sayi1);
    printf("Ikinci sayiyi giriniz: ");
    scanf("%d",&sayi2);

    if(sayi1>0 && sayi2>0)
    {
       printf("carpimları pozitiftir.");
    }
    else if(sayi1==0 && sayi2>0 || sayi2==0 && sayi1>0)
    {
        printf("carpimları sifirdir.");
    }
    else if(sayi1<0 && sayi2==0 || sayi2<0 && sayi1==0)
    {
        printf("carpimları sifirdir.");
    }
    else if(sayi1<0 && sayi2>0 || sayi2<0 && sayi1>0)
    {
        printf("carpimları negatiftir.");
    }
    else if(sayi1<0 && sayi2<0)
    {
        printf("carpimları pozitiftir.");
    }
    else if(sayi1==0 && sayi2==0)
    {
        printf("carpimları sifirdir.");
    }

    return 0;
}
