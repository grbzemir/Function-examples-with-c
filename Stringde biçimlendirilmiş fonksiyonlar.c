#include<stdio.h>
#include<stdlib.h>

   // String kullanımı ve string fonksiyonları ile ilgili örnekler
   // karakter boşluk bırakarak yazdırma" "

 int main () {

    system("color 0a");
   
    char kitap[40];
    printf("ad:");
    scanf("%s",kitap);

    printf("kitap adi: %s\n",kitap);

    printf("\n");

    printf("%18s",kitap);
    printf("\n");

    printf("%20.5s",kitap);
    printf("\n");

    printf("%-20.5s",kitap);
    printf("\n");

    printf("%-20.10s",kitap);
    printf("\n");

    printf("%-20.15s",kitap);
    printf("\n");

    printf("%-20.20s",kitap);
    printf("\n");


    return 0;
}
