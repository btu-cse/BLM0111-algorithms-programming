#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *pc,c;

    c=22;
    printf("c'nin adresi: %p\n",&c);
    printf("c'nin degeri: %d\n\n",c);

    pc=&c;
    printf("pc'nin adresi: %p\n",pc);
    printf("pc'nin icerigi: %d\n\n",*pc);

    c=11;
    printf("pc'nin adresi: %p\n",pc);
    printf("pc'nin icerigi: %d\n\n",*pc);

    *pc=2;
    printf("c'nin adresi: %p\n",&c);
    printf("c'nin degeri: %d\n\n",c);

    return 0;
}
