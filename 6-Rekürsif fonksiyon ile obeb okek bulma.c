#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stddef.h>

// obeb bulma rekürsif

int obeb(int x , int y)
{
    int kucuk;
    kucuk= x<y ? x : y;
    int i;
    int sonuc;
    sonuc=-1;
    for(i=1;i<kucuk+1;i++)
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
    system("color 0a");
    int sonuc;
    sonuc = obeb(x,y);
    printf("%d", sonuc);

return 0;
}