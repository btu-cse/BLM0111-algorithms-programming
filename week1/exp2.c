#include <stdio.h>
#include <stdlib.h>

/*
    Hata ayiklama uygulamasi. Oncelikle hata ayiklamaya baslanacak yer, satir numarasinin
    sagindaki alana isaretlenir. Ardindan uygulama hata ayiklama (debug) perspektifinde
    baslatilir. Ust menuden sirasiyla Debug->Debugging windows->Watches secilerek, degisken
    deger gozlemleme penceresi acilir. Daha sonra kod satir satir ilerletilir, her satirda
    degisim gozlemlenerek hata bulunmaya calisilir.
*/

int main()
{
    int i=0;
    i=i+1;
    i=i+5;
    i=8;
    return 0;
}
