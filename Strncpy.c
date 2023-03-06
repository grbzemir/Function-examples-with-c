#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main () {
system("color 0a");

char nereden[30]="Merhaba Gürbüz Ailesi";
char nereye[30]="";

strncpy(nereye,nereden,30);
printf("nereye: %s",nereye);

return 0;
}

