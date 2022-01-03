#include <stdio.h>
#include <stdlib.h>

int* isimsiz(int boyut);

int main()
{
    int boyut;
    printf("Dizi boyutunu giriniz: ");
    scanf("%d",&boyut);

    int* tut=isimsiz(boyut);

    int s;
    for(s=0;s<boyut;s++) {
        printf("[%d]= %d\n",s,tut[s]);
    }

    free(tut);
    return 0;

}

int* isimsiz(int boyut) {
    int *ptr;
    ptr=malloc(boyut*sizeof(int));
    int s;
    for (s=0;s<boyut;s++) {
        ptr[s]=s+1;
    }
    return ptr;

}

