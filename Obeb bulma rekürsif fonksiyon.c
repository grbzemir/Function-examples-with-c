#include<stdio.h>
#include<stdlib.h>

int obeb(int x , int y)
{
    if(y!=0)

    obeb(y, x%y);
else

    return x;

}




int main () {

    int x;
    int y;

    printf("birinici sayiyi giriniz:");
    scanf("%d", &x);
    printf("ikinci sayiyi giriniz:");
    scanf("%d", &y);

    int sonuc;
    sonuc = obeb(x,y);
    printf("%d", sonuc);

return 0;
}