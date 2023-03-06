#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// Birbirleriyle ilisikili degiskenlerin, bir isim altında toplanmasına yapı adı verilir.
// Bir yapıya tanımlamak için struct anahtar kelimesi kullanılır.

struct kitapbilgi
{
  char kitapad[20];
  char yazarad[20];
  int fiyat;
  float puan;
};

int main () {
    struct kitapbilgi kb={"seker portakali","julio verne",20,4.5};

    printf("kitap adi: %s\n",kb.kitapad);
    printf("yazar adi: %s\n",kb.yazarad);
    printf("kitap fiyati: %d\n",kb.fiyat);
    printf("kitap puan: %f\n",kb.puan);

    return 0;
}
