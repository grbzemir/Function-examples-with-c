#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// strlen fonksiyonu katar uzunluğunu hesaplar

int main () {
system("color 0a");

char paragraf1[100];
char paragraf2[100];

printf("**** girilen paragrafin uzunluğunu hesaplayan program ****\n\n");
printf("--------------------------------------------\n\n");

printf("paragrafi giriniz: ");
gets(paragraf1);

printf("paragrafi giriniz:(scanf için)");
scanf("%s",paragraf2);

printf("\n");
printf("yazilan paragraf:");
printf("%s",paragraf1);
printf("\n");
printf("paragrafin uzunluğu: %d",strlen(paragraf1));
printf("\n");
printf("paragrafin uzunluğu: %d",strlen(paragraf2));

return 0;
}



