#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    for(i=4; i>=1; i--)
    {
        for(j=1; j<=3; j++)
        {
           printf("%3d", j);
        }
       printf("\n%3d\n", i);
    }
    return 0;
}
