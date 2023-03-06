#include<stdio.h>
#include<stdlib.h>


 //continue deyimi karşılaşıldığında döngünün sonuna gitmez başa döner
  
    int main () {

        int toplam=0;

        int i=0;

        while(i<=10)

       {

        if(i%2==0)

        {
           
            continue;
        }

        toplam += i;

        i++;

         }
         
            printf("toplam: %d",toplam);

            
        return 0;
    }

