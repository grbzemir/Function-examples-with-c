#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

// 1'den n'e kadar olan sayilari ekrana yazdiran fonksiyonu yaziniz.	

int yazdir(int n)
{
    if( n == 0)
    
        return 0;

    yazdir(n-1);
    printf("%d " , n);
}

    
    int main () {

        int sayi;
        printf("lütfen bir sayi giriniz: \n");
        scanf("%d", &sayi);
        yazdir(sayi);
        

  return 0;

}
