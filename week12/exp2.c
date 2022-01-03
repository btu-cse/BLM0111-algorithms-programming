#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a=malloc(10*sizeof(int)); //ayirdigi alanlardaki degerler rastgele-calloc'tan daha hýzlý
    int *b=calloc(10,sizeof(int)); //ayirdigi alanlardaki tum degerler sifir

    int s;
    for(s=0;s<10;s++) {
        printf("b[%d] = %d \t\t a[%d] = %d\n ",s,b[s],s,a[s]);
    }

    free(a);
    free(b);
    return 0;
}
