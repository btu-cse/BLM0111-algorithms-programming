#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, toplam=0;

    for(i=1; i<=50; i++)
    {
        if(i%2==0)
        toplam=toplam+i;
    }
    printf("1 ile 50 arasindaki cift sayilarin toplami = %d dir.\n", toplam);
    return 0;
}
