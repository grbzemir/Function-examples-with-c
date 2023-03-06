#include<stdio.h>
#include<stdlib.h>
#include<stack.h>

/*  stack yapısı: son giren eleman ilk olarak çıkıyor LİF10 yapısı içerir
stack'e eklemek için push fonksiyonu
stackten çıkarmak için pop fonksiyonu
stack'in boş olup olmadığını kontrol etmek için ise isEmpty fonksiyonu kullanılır
*/


int dizi[10];
int i=0;
void push(int x)
{
    dizi[i++]=x;
}
int pop()
{
    return dizi[--i];
}
int Empty()
{
    if(i==0)
    return 1;
    else
    return 0;
}




int main ()
{


    return 0;
}