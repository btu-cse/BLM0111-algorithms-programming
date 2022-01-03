#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int *ptr=(int *)malloc(2*sizeof(int));

    printf("2 adet sayi giriniz: \n");
    for(i=0;i<2;i++) {
        scanf("%d",ptr+i);
    }

    ptr=(int *)realloc(ptr,4*sizeof(int));

    printf("2 sayi daha giriniz: \n");
    for(i=2;i<4;i++) {
        scanf("%d",ptr+i);
    }

    for(i=0;i<4;i++) {
        printf("ptr[%d]=%d\n",i,*(ptr+i));
    }

    return 0;
}
