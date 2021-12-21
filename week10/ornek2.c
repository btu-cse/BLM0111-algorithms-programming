#include <stdio.h>

void func(int *x){
   for(int i = 0; i < 4; ++i){
      printf("&x[%d] = %p, value: %d\n", i, &*(x+i), *(x+i));
   }
}

int main()
{
   int x[4]={1,3,5,7};

   func(x);

   return 0;
}
