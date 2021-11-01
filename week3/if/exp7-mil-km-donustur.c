#include <stdio.h>
#define ORAN 1.609344
int main()
{
   char secim;
   float mesafe, sonuc;

   printf("Hangisi? (Mil: M/m veya Kilometre: K/k): ");
   scanf("%c", &secim);
   printf("\n");

   if((secim=='M')||(secim=='m'))
   {
       printf("Kac mil yol aldiniz: ");
       scanf("%f", &mesafe);
       sonuc=mesafe*ORAN;
       printf("\n%6.2f Mil = %6.2f Kilometre\n", mesafe, sonuc);
   }
   else if((secim=='K')||(secim=='k'))
   {
       printf("Kac kilometre yol aldiniz: ");
       scanf("%f", &mesafe);
       sonuc=mesafe/ORAN;
       printf("\n%6.2f Kilometre = %6.2f Mil\n", mesafe, sonuc);
   }
   else
       printf("Yanlis harf girildi...\n");
   return 0;
}
