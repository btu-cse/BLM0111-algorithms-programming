#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x,y;
    float toplam=0, cikartma, carpma = 0, bolme = 0;

    printf("Birinci sayiyi giriniz: ");
    scanf("%f",&x);

    printf("Ikinci sayiyi giriniz: ");
    scanf("%f",&y);

    toplam = x + y;
    printf("Toplam: %.2f\n",toplam);

    cikartma = x - y;
    printf("Cikartma: %.2f\n",cikartma);

    carpma = x * y;
    printf("Carpma: %.4f\n",carpma);

    bolme = x / y;
    printf("Bolme: %.6f\n",bolme);

    return 0;
}
