#include<stdio.h>
#include<stdlib.h>

    // pow fonksiyonunu kullanarak üs alma!

int main () {
    int x,y;
    int sonuc;
    printf("taban sayiyi giriniz:");
    scanf("%d",&x);
    printf("us sayiyi giriniz:");
    scanf("%d",&y);
    sonuc=pow(x,y);
    printf("sonuc:%d",sonuc);
    return 0;
}

