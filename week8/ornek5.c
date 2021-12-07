#include<stdio.h>

int ikibasamaktopla(int n);
int sonbasamak(int n);
int sondanikincibasamak(int n);

int main()
{
   int sayi;

   printf("Sayiyi giriniz: ");
   scanf("%d",&sayi);

   int toplam = ikibasamaktopla(sayi); 
   printf("Iki basamagin toplami = %d",toplam);

   return 0;
}

int ikibasamaktopla(int n)
{
   int sonuc = sonbasamak(n) + sondanikincibasamak(n);
   return sonuc; 
}

int sonbasamak(int n)
{
   return (n%10); 
}

int sondanikincibasamak(int n)
{
   return ((n/10)%10); 
}
