#include <stdio.h>
#include <stdlib.h>

int main()
{

    int a = 1, b = 10, c = 100; // tam sayilar tutan degiskenler
    double d = 1.0, e = 10.0, f = 100.0; // ondalikli sayilar tutan degiskenler
    char *str = "Algoritma ve Programlama"; // karakter dizisini

    // %d, tam sayi
    printf("%d\n",a);
    //printf("%d\n",b);
    //printf("%d\n",c);

    printf("\n");

    // (%n, n degiskene ayrilan alan)
    //printf("%3d\n",a);
    //printf("%3d\n",b);
    //printf("%3d\n",c);

    printf("\n");
    // (%.n, n keskinlik)
    //printf("%.3d\n",a);
    //printf("%.3d\n",b);
    //printf("%.3d\n",c);

    printf("\n");
    // %f, ondalikli sayilar
    //printf("%f\n",d);
    //printf("%f\n",e);
    //printf("%f\n",f);

    printf("\n");
    // (%.n, n keskinlik)
    //printf("%.3f\n",d);
    //printf("%.3f\n",e);
    //printf("%.3f\n",f);

    printf("\n");
    // (%t.n, t degiskene ayrilan alan, n keskinlik)
    //printf("%7.3f\n",d);
    //printf("%7.3f\n",e);
    //printf("%7.3f\n",f);

    printf("\n");
    // %s, karakter dizileri
    //printf("*%s*\n",str);
    //printf("*%.9s*\n",str);
    //printf("*%-40s*\n",str);
    //printf("*%-40.9s*\n",str);
    //printf("*%20.9s*\n",str);

    printf("\n");

    return 0;
}
