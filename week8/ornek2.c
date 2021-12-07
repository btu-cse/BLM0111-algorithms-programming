#include<stdio.h>
void asal()
{
     int i=2,j,a;
     while(i<=100)
     {
          a=1;
          for(j=2;j<i;j++)
          {

               if( i%j == 0)
               {
                    a=0;
               }
          }
          if(a)
          {
               printf("\t%d\n",i);
          }
     i++;
     }
}
int main()
{
     printf("1 ve 100 Arasindaki Asal Sayilar\n");
     printf("--------------------------------\n");
     asal();
     return 0;
}
