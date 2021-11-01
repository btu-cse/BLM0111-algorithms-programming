#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    printf("Kontrol etmek icin harf giriniz: ");
    scanf("%c",&harf);

    if((harf >= 'a' && harf <= 'z') || (harf >= 'A' && harf <= 'Z'))
    {
        printf("\nGirdiginiz '%c' harfi alfabede mevcuttur...\n",harf);
    }
    else
    {
        printf("\nGirdiginiz '%c' harfi alfabede mevcut degildir...\n",harf);
    }
    return 0;
}
