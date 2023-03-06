#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// stract gonderilen verileri birleştirir

int main () {

system("color 0a");
char kitapad[30];
char yazarad[30];
char kitapyazar[60];

printf("kitap adini giriniz: ");
scanf("%s",kitapad);
printf("yazar adini giriniz: ");
scanf("%s",yazarad);

stract(kitapyazar,kitapad);
stract(kitapyazar,yazarad);
stract(kitapyazar," - ");
stract(kitapyazar,"<--->");
printf("\n\n");
printf("kitap adi: %s",kitapyazar);

return 0;
}

