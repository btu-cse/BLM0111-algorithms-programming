#include <stdio.h>
#include <stdlib.h>

void dizipointer() {

    int v[3]={10,100,200};

    int *ptr;

    ptr=v;

    for(int i=0;i<3;i++)
    {
        printf("ptr degerleri %p\n",ptr);
        printf("*ptr degerleri %d\n",*ptr);
        ptr++;
    }
}
int main()
{
    dizipointer();
    return 0;
}
