#include<stdio.h>

int main () {

    int sayi1,sayi2,sayi3;
    int sonuc;
    char islem;

    printf("yapmak istediginiz islemi seciniz:");
    printf("toplama icin +, cikarma icin -, carpma icin *, bolme icin /, mod alma icin %%:");
    scanf("%c",&islem);

    printf("1.sayiyi giriniz:");
    scanf("%d",&sayi1);
    printf("2.sayiyi giriniz:");
    scanf("%d",&sayi2);
    printf("3.sayiyi giriniz:");
    scanf("%d",&sayi3);

    switch (islem)
    {
    case '+':
        sonuc=sayi1+sayi2+sayi3;
        printf("sonuc:%d",sonuc);
        break;
    case '-':
        sonuc=sayi1-sayi2-sayi3;
        printf("sonuc:%d",sonuc);
        break;
    case '*' :  
        sonuc=sayi1*sayi2*sayi3;
        printf("sonuc:%d",sonuc);
        break;
    case '/':
        sonuc=sayi1/sayi2/sayi3;
        printf("sonuc:%d",sonuc);
        break;
    case '%':
        sonuc=sayi1%sayi2%sayi3;
        printf("sonuc:%d",sonuc);
        break;
    default:
        printf("yanlis islem secimi yaptiniz");
        break;
    }
    return 0;
}