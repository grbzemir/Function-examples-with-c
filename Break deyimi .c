#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

 // break deyimi DÖNGÜ EĞER BREAK DEYİMİ İLE KARŞILAŞIRSA OTOMATİK OLARAK DÖNGÜDEN ÇIKAR
  
int main () {

    int toplam=0;
    int i;
    int sayi;
    for(i = 0; true;i++) 
    {
        printf("sayi giriniz:");
        scanf("%d",&sayi);
        printf("döngüden cikmak icin -1e basiniz:");
        if(sayi==-1)
        {
            break;
        }
        toplam += sayi;
    }
    printf("toplam:%d",toplam);
    return 0;
}
