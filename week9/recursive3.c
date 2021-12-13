#include <stdio.h>

int naturalSum(int i);

int  main() {
   int i;

   printf("Enter a positive integer: ");
   scanf("%d", &i);

	printf("Sum: %d",naturalSum(i));

   return 0;
}

int naturalSum(int i) {
   if(i == 0) {
      return 0;
   } else {
      return i + naturalSum(i - 1);
   }
}
