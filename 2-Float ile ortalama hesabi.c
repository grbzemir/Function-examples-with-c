#include <stdio.h>
float ortalama(int sayi1, int sayi2);
main() {
int i,j; float ort;
for (i=50;i<=99;i++)
for  (j=49;j>=1;j--);
      {ort=ortalama(i,j); 
	  printf("%d sayisi ile %d sayisinini ortalaması %f dir.\n",i,j,ort);}
	}
float ortalama(int sayi1, int sayi2){
	return (sayi1+sayi2)/2.0; }
	
