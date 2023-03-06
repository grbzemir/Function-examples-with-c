#include<stdio.h>
#include<stdlib.h>

// klavyeden girilen sayının karekökünü bulan program sqrt kullanarak!

int main  () {
    int sayi;
    double sonuc;
    printf("sayi giriniz:");
    scanf("%d",&sayi);
    sonuc=sqrt(sayi);
    printf("sayinin karekoku:%.4f",sonuc);  // 4f yazınca virgülden sonra 4 basamak kadar yazdırır
    return 0;
}
    // klavyeden girilen sayının karekökünü bulan program
    #include<stdio.h>
    #include<stdlib.h>
    
    int main () {
        int sayi,i
        double sonuc;
        printf("sayi giriniz:");
        scanf("%d",&sayi);
        if (i*i==sayi)
        {
            printf("sayinin karekoku: %d",i);
        }
        else
        {
            printf("sayinin karekoku yoktur");
        }
        return 0;
    }   