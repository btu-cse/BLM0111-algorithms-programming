#include <stdio.h>
#include <stdlib.h>

int main()
{
   printf ("Karakterler: %c %c %c\n", 'a', 65, 68);
   printf ("Decimal Sayilar: %d %ld\n", 1977, 650000L);
   printf ("Oncesinde Bosluk: %10d \n", 1977);
   printf ("Oncesinde 0 yazmak: %010d \n", 1977);
   printf ("Farkli Gosterimler: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   printf ("float Sayilar: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   printf ("%s \n", "Bir String");

 return 0;
}
