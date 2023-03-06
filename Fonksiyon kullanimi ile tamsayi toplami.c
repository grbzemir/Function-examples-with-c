/*iki sayiyi topla ve sonucu ekranda goster*/
#include <stdio.h>

int tamsayi_topla(int x,int y);

/*fonksiyon prototipi*/

int carpim(int sayi);

int main()
{
	int sayi1,sayi2,toplam,sonuc2;

	printf("Birinci sayiyi giriniz: ");
	scanf("%d",&sayi1);

	printf("ikinci sayiyi giriniz: ");
	scanf("%d",&sayi2);

	toplam=tamsayi_topla(sayi1,sayi2);

	printf("%d sayısı ile %d sayısının toplamı: %d dir,\n",sayi1,sayi2,toplam);
	sonuc2=carpim(toplam);


	printf("sayinin 2 kati % dir.",sonuc2);


	return 0;
	
}
 

 // FARKLI BIR ORNEK
 

	int tamsayi_topla(int x, int y){
	int sonuc;
	sonuc=x+y;
	return sonuc; 

	}
	
	int carpim(int sayi)
	{
		return sayi*2;
		
		}

	
    
	
    
    







