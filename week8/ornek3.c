#include<stdio.h>
long int fib(long int i)
{
     long int sonuc;
     if(i==0||i==1)
          return (i);
     else
          sonuc=fib(i-1)+fib(i-2);
     return(sonuc);
}
int main()
{
     long int sonuc,n;
     int i;
     printf("/*Kac elemandan olusan Fibonacci Serisi Olusturulsun?*/\n\nLimiti girin : ");
     scanf("%ld",&n);
     printf("\n");
     for(i=0;i<n;i++)
     {
          sonuc=fib(i);
          printf("%ld ",sonuc); //0 1 1
     }
     return 0;
}
