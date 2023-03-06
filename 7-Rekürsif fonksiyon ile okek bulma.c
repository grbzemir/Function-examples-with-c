#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

int okek(int x , int y)
{
    int kucuk;
    int i;
    kucuk= x<y ? x : y;
    int sonuc;
    sonuc=-1;

    for(i=2;i<kucuk+1;i++)
    {
        if(x%i==0 && y%i==0)
        {
            sonuc=i;
        }
    }
    return sonuc;
}

int main () 
{
    int x,y;
    printf("birinici sayiyi giriniz: \n");
    scanf("%d", &x);
    printf("ikinci sayiyi giriniz: \n");
    scanf("%d", &y);
    system("color b4");
    int sonuc;
    sonuc = okek(x,y);
    printf("%d", sonuc);

return 0;
}