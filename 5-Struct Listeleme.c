#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct isci
{
    int sifre;
    char ad[20];
    char soyad[20];
     int yas;
     float maas;
     char cinsiyet[10];

}kisi;

void sirala(kisi x[] , int m)
{
    int i,j;
    kisi t;
    for(i=0;i<m;i++)
    {
        for(j=1;j<m;j++)
        {
            if(strcmp(x[j-1].ad,x[j].ad)>0)
            {
                t=x[j-1];
                x[j-1]=x[j];
                x[j]=t;
            }
        }
    }

}


void listele(kisi x[] , int m)
{
    int i;
    for(i=0;i<m;i++)
    {
        printf("%d \t %s \t %s \t %d \t %f \t %s \n",x[i].sifre,x[i].ad,x[i].soyad,x[i].yas,x[i].maas,x[i].cinsiyet);
    }
}



int main ()
{
    int N;
    int i;
    
    system("color 0a");
    printf("kac adet isci bilgisi tutulacak: ");
    scanf("%d",&N);
    kisi p[N];
    for(i=0;i<N;i++)
    {
        printf("sifre: ");
        scanf("%d",&p[i].sifre);
        printf("ad: ");
        scanf("%s",p[i].ad);
        printf("soyad: ");
        scanf("%s",p[i].soyad);
        printf("yas: ");
        scanf("%d",&p[i].yas);
        printf("maas: ");
        scanf("%f",&p[i].maas);
        printf("cinsiyet: ");
        scanf("%s",p[i].cinsiyet);
        printf("\n\n");
    }


    sirala(p,N);
    listele(p,N);

    return 0;
}
