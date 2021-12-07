#include<stdio.h>
void mukemmel(int n)
{
     int i=1,toplam=0;
      while(i<n)
     {
          if(n%i==0)
               toplam=toplam+i; //toplam=6
          i++;
     }
     if(toplam==n)
          printf("\n%d Mukemmel sayidir.",i);
     else
          printf("\n%d Mukemmel sayi degildir..",i);
}
int main()
{
     int a;
     printf("Sayiyi giriniz : ");
     scanf("%d",&a);
     mukemmel(a);
     return 0;
}
