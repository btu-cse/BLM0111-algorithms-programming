#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0, toplam=0, n;
    printf("n degerini giriniz: ");
    scanf("%d", &n);
    while(i<=n)
    {
        toplam+=i*i;
        i++;
    }
    printf("\nToplam: %d\n", toplam);
    return 0;
}
