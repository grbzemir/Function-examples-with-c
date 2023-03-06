#include<stdio.h>
#include<stdlib.h>

int main () {
    char tur;

    int saat,ucret;

    printf("otobüsler için: o\n kamyonetler için: k\n motorsikletler için: m\n otomobiller için: x\n");
    printf("taşıt türünü giriniz:");

    scanf("%c",&tur);
    printf("saat giriniz:");
    scanf("%d",&saat);

    switch(tur)
    {
    case 'o':

    ucret=30;
    printf("otobüs girildi");
    printf("odenecek ucret",ucret*saat);
    break;

    case 'k':
    ucret=20;
    printf("kamyonet girildi");
    printf("odenecek ucret",ucret*saat);
    break;

    case 'm':
    ucret=10;
    printf("motorsiklet girildi");
    printf("odenecek ucret",ucret*saat);
    break;

    case 'x':
    ucret=15;
    printf("otomobil girildi");
    printf("odenecek ucret",ucret*saat);
    break;

    default:

    printf("yanlis giris yaptiniz");

}

    return 0;
    
}


