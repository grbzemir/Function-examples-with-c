#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

void yazdir(int n)
{
}

int faktoriyel(int n)
{
    if(n==1)
    return n;

    return n * faktoriyel(n-1);
}


int main () {
        
        system("color 0a");
        int sayi;
        printf("lütfen bir sayi giriniz: \n");
        scanf("%d", &sayi);
        printf("%d", faktoriyel(sayi));

return 0;
}