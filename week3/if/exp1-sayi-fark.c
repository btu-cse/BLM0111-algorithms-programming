#include <stdio.h>
#include <stdlib.h>

int main() {

    // Cikti ne olur ?

    int A, B, sonuc;
    printf("A degerini giriniz: ");
    scanf("%d", &A);

    printf("\nB degerini giriniz: ");
    scanf("%d", &B);

    printf("\n");
    if (A==B){
        sonuc=A-B;
        printf("Sonuc: %d\n", sonuc);
    } else if (A>B){
        sonuc=A-B;
        printf("Sonuc: %d\n", sonuc);
    } else {
        sonuc=B-A;
        printf("Sonuc: %d\n", sonuc);
    }
    return 0;
}