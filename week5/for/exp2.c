#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, k=0;
    for(i=20; i>=k; i--)
    {
        printf("%3d %3d \n", i, k);
        k+=3;
    }
    return 0;
}
