#include <stdio.h>
#include <string.h>

int main() {
    char str1[20]="Program";
    char str2[20]={'P','r','o','g','r','a','m','\0'};

    printf("Str1 stringinin uzunlugu %d\n",strlen(str1));
    printf("Str2 stringinin uzunlugu %d\n",strlen(str2));

    return 0;
}
