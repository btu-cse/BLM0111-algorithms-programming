#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int x[3][4] = {11,34,42,60,  /* 1. satir elemanlari */
                   72,99,10,50,  /* 2. satir elemanlari */
                   80,66,21,38}; /* 3. satir elemanlari */
     for(i=0; i<3; i++)
     {
       for(j=0; j<4; j++)
          printf("%4d",x[i][j]);

       printf("\n");
     }
    return 0;
}
