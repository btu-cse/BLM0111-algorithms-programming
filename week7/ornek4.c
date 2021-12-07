#include <stdio.h>
#include <string.h>

int main() {
    char str1[20]="C Programlama";
    char str2[20];
    
    strcpy(str2,str1);
    
    printf("str2nin icerigi: %s",str2);

}
