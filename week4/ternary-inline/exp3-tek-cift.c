#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    printf("x sayisini giriniz: ");
    scanf("%d", &x);
    printf("\n");

    x%2==0 ? printf("Sayi cift sayidir.\n") : printf("Sayi tek sayidir.\n");

    return 0;
}
