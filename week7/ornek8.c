#include <stdio.h>
#include <string.h>

int main() {
    char ch[]="BurSA TEkniK UniVERSiteSi";

    printf("TOUPPER: ");

    for(int i=0;i<strlen(ch);i++) {
        printf("%c",toupper(ch[i]));
    }

    printf("\n");

    printf("TOLOWER: ");

    for(int i=0;i<strlen(ch);i++) {
        printf("%c",tolower(ch[i]));
    }

    printf("\n");


    return 0;
}
