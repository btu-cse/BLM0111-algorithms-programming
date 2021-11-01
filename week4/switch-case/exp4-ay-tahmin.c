#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Bir ay giriniz: ");
    scanf("%d",&x);

    switch(x){
    case 12 :
    case 1 :
    case 2 :
        printf("Girdiginiz ay kis mevsimindedir.\n");
        break;
    case 3 :
    case 4 :
    case 5 :
        printf("Girdiginiz ay ilkbahar mevsimindedir.\n");
        break;
    break;
    case 6 :
    case 7 :
    case 8 :
        printf("Girdiginiz ay yaz mevsimindedir.\n");
        break;
    case 9 :
    case 10 :
    case 11 :
        printf("Girdiginiz ay sonbahar mevsimindedir.\n");
        break;
    default :
        printf("Yanlis bir giris yaptiniz\n");
    }
    return 0;
}

