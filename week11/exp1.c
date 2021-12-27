#include <stdio.h>

int main () {
    void* p; // Generic type pointer
    
    int i = 7;
    float f = 23.5;
    
    p = &i;
    printf ("i contains: %d\n", *((int*)p) );
    
    p = &f;
    printf ("f contains: %f\n", *((float*)p));
    
    return 0;
}
