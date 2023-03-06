#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

// 1'den n'e kadar olan sayilarin toplamini bulan program
void yazdir (int n)

{
}
int topla (int n)
{

    if(n==0 )
    return n;

    return n + topla(n-1);
}



int main () {
    
    system("color 0a");
    int sayi;
    printf("lütfen bir sayi giriniz: \n");
    scanf("%d", &sayi);
    printf("%d", topla(sayi));


    return 0;
}
