#include <stdio.h>
#include <stdlib.h>

int main(int argsay, char *argvek[])
{
    // Birden fazla argüman verildiğinde argüman dizisi indeks 1'den sonra atamaya başlar. indeks 0 her zaman programın adıdır. Örn: ./esnek

    int toplam;
    // Argüman sayısı 2 argüman + program adından 3 olmalıdır.
    int argument_count = 3;
    if(argsay < argument_count) {
        printf("Eksik parametre !\n");
        exit(1);
    } else if(argsay > argument_count) {
        printf("Fazla parametre !\n");
        exit(1);
    }

    toplam = atoi(argvek[1]) + atoi(argvek[2]);

    printf("Toplamlar %d\n", toplam);

    return 0;
}
