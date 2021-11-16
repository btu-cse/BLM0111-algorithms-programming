#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi, i=1;
    printf("Bir sayi giriniz (1-10 arasi): ");
    scanf("%d", &sayi);
    printf("\n");

    if (sayi<1 || sayi>10)
    {
        printf("1 - 10 araliginda bir sayi girmelisiniz!");
        return 0;
    }

    while (i <= 10)
    {
        printf("%2d x %2d = %2d\n", sayi, i, sayi*i);
        i++;
    }
    return 0;
}
