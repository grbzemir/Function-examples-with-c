#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void serihesapla(int sayi)
{
    int hesapla;
    int topla;
    topla=0;

  int i;
  for(i=1;i<=sayi;i++)
  {
      hesapla = (i*i*i)+hesapla;
      topla = hesapla + topla;
      if(i==sayi)
      {
          printf("%d",hesapla);
      }
      else
      {
          printf("%d + ",hesapla);
          printf("Toplam: %d",topla);
      }
  }

}



int main ()
{
    int sayi;
    system("color 0a");
    printf("lutfen hesaplanacak seri sayisini giriniz: ");
    scanf("%d",&sayi);

    serihesapla(sayi);

    return 0;
}