#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

// fibonacci serisi rekürsif fonksiyon ile yazdırma :)

void yazdir (int n)
{
}

int fibonacci(int n)
{
    if(n==0 || n==1)
    return n;

    return fibonacci(n-1) + fibonacci(n-2);
}

int main () {
        
        system("color 0a");
        int sayi;
        printf("lütfen bir sayi giriniz: \n");
        scanf("%d", &sayi);
        int sonuc;
        sonuc = fibonacci(sayi);
        printf("%d", sonuc);

return 0;
}