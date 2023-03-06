#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main () {
    double derece,sonucsin,sonuccos;
    printf("dereceyi giriniz:");
    scanf("%lf",&derece);
    sonucsin=sin(derece);
    sonuccos=cos(derece);
    printf("sinus:%f",sonucsin);
    printf("cosünüs:%f",sonuccos);
    return 0;
}