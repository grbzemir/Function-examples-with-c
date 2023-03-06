#include<stdio.h>
#include<stdlib.h>

// geriye deger döndüren fonksiyonlarda islem  yapma!

int toplam(int s1,int s2)
{
    int s3;
    s3=s1+s2;
    return s3;
}
int main () {
   
    int t;
    t=toplam(5,6);
    printf("toplam:%d",t);
    return 0;
}
