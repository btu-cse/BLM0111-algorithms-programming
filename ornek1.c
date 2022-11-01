#include <stdio.h>
#include <stdlib.h>

int us(int sayi, int ussu);

int main(){
    int a,b;
    printf("\nTaban = ");
    scanf("%d",&a);
    printf("\nUs = ");
    scanf("%d",&b);

    printf("\nUssu = %d\n",us(a,b));
    return 0;
}

int us(int sayi, int ussu){
   int sonuc=1;
   int i;
   for(i = 0; i < ussu; i++)
      sonuc *= sayi;
   return(sonuc);
}
