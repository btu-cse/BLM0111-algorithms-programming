#include <stdio.h>
#include <string.h>

int main() {
    char str1[]="Bilgisayar";
    char str2[]="Programlama";
    
    strcat(str1,str2);
    
    printf("str1in bellek icerigi %s\n",str1);
    
    return 0;
}
