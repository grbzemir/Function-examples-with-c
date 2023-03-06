#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// strcpy'de hepsini kopyalayıp boş alana yapıştırıyor. strncpy'de ise nereye, nereden ve ilave olarak ka� karakteri kopyalayacağını sayı< olarak belirtmelisin.
//strcpy(nereye,nereden);
// strncpy(nereye,nereden,8);
// 1. parametre nereye kopyalancak 2.parametre nereden kopylancak

int main () {

    system("color 0a");
    char kaynak[30]="Merhaba Dünya";
    char hedef[30]="";

    strcpy(hedef,kaynak);
    printf("hedef: %s\n",hedef);

    return 0;
}
