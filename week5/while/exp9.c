#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi=0;
    int n=0;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);
    printf("\n");
    do
    {
        n++;
        printf("%d ", n);
    } while (n<sayi);
    printf("\n");
    return 0;
}
