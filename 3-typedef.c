#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef int tamsayi;

int main () {
system("color 0a");

tamsayi ts;
ts=10;
tamsayi ts2,ts3;
ts2=20;
ts3=30;
printf("ts: %d",ts);
printf("ts2: %d",ts2);
printf("ts3: %d",ts3);
tamsayi carpim=ts*ts2*ts3;
printf("carpim: %d",carpim);
tamsayi toplam=ts+ts2+ts3;
printf("toplam: %d",toplam);
tamsayi fark=ts3-ts2-ts;
printf("fark: %d",fark);
tamsayi mod=ts%ts2%ts3;
printf("mod: %d",mod);

return 0;
}