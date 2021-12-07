#include <stdio.h>
#include <stdlib.h>



void yerel_degisken();
void yerel_static_degisken();
void global_degisken();

int x=1; 

int main()
{
    int x=10; 
    printf("Main icerisindeki lokal x:\t%d\n",x);
    {
        int x=7; 
        printf("Main icerisindeki scope baslangicta lokal x:\t%d\n",x);
        x++;
        printf("Main icerisindeki scope cikarken lokal x:\t%d\n",x);
    }

    printf("Main icerisindeki lokal x:\t%d\n",x);

    yerel_degisken();
    yerel_static_degisken();
    yerel_degisken();
    global_degisken();
    yerel_static_degisken();
    global_degisken();

    return 0;
}

void yerel_degisken() {
    int x=30;
    printf("yerel_degisken icerisinde baslangicta lokal x:\t%d\n",x);
    x*=20;
    printf("yerel_degisken icerisinde cikarken lokal x:\t%d\n",x); 
}

void yerel_static_degisken() {
    static int x=30;
    printf("yerel_static_degisken icerisinde baslangicta statik x:\t%d\n",x); 
    x++;
    printf("yerel_static_degisken icerisinde baslangicta statik x:\t%d\n",x); 

void global_degisken() {
    printf("global_degisken icerisinde baslangicta global x:\t%d\n",x); 
    x-=100;
    printf("global_degisken icerisinde cikarken global x:\t%d\n",x); 
}

