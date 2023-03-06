#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int topla(int sayi)
{
    if(sayi>0)

return sayi + topla(sayi-1);

}

int main () {
    int sayi;
    printf("sayi giriniz: \n");
    scanf("%d", &sayi);
    int sonuc;
    sonuc = topla(sayi);
    printf("%d", sonuc);

return 0;
}