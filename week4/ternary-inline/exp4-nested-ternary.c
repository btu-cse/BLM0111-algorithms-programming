#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("x sayisini giriniz: ");
    scanf("%d", &x);
    printf("\n");

    x>0 ? printf("Sayi pozitif.\n") : x < 0 ? printf("Sayi negatif.\n") : printf("Sayi sifir.\n");

    return 0;
}
