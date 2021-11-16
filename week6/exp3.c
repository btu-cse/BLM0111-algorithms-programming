#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, A[100], B[100], C[100];
    printf("Dizinin eleman sayisi: ");
    scanf("%d", &n);
    printf("\n");

    for(i=0; i<n; i++){
        printf("A[%d]= ", i);
        scanf("%d", &A[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        printf("B[%d]= ", i);
        scanf("%d", &B[i]);
    }
    printf("\n");
    for(i=0; i<n; i++){
        C[i]=A[i]+B[i];
        printf("C[%d]= %d\n", i, C[i]);
    }
    return 0;
}
