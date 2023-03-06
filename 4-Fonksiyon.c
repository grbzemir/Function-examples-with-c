#include<stdio.h>
#include<stdlib.h>

int toplam(int s1,int s2)
{
    int s3;
    s3=s1+s2;
    return s3;
}
int carpim(int s1,int s2)
{
    int s3;
    s3=s1*s2;
    return s3;
}
int main () {
    
    int t;
    t=toplam(5,6);
    printf("toplam:%d",t);
    printf("carpim:%d",carpim(5,6));
    return 0;
}