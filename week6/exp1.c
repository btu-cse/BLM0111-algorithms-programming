#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, N, sayacTek=0, sayacCift=0;
    printf("Bir N degeri giriniz: ");
    scanf("%d", &N);
    printf("\n");

    int dizi[N], tek[N], cift[N];

    for (i=1; i<=N; i++){
        dizi[i] = i;
    }

    for (i=0; i<=N; i++){
        if(dizi[i]%2==0){
            cift[sayacCift]=i;
            sayacCift++;
        }
        else{
            tek[sayacTek]=i;
            sayacTek++;
        }
    }
    printf("Tek Sayilar:\n");
    for(i=0; i<sayacTek;i++){
        printf("%d ", tek[i]);
    }
    printf("\n");
    printf("\nCift Sayilar:\n");
    for(i=0; i<sayacCift;i++){
        printf("%d ", cift[i]);
    }
    printf("\n");
    return 0;
}
