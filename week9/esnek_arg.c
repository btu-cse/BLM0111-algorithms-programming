#include <stdarg.h>
#include <stdio.h>

int topla(int, ...);

int main(void){
  printf("toplam: %d", topla(2, 11, 22));
  printf("toplam: %d", topla(3, 11, 22, 33));
  printf("toplam: %d", topla(4, 11, 22, 33, 44));
  printf("toplam: %d", topla(5, 11, 22, 33, 44, 55));
  
  return 0;
}

int topla(int n, ...){
  // va_list ile argümanların tip ataması gerçekleştirilir.
  va_list ap;
  int i, top = 0;
  // va_start ile argümanlar hafızaya alınır.
  va_start(ap, n);
  
  // va_arg ile hafızadaki argümanlar indis değeri kullanılarak okunur.
  for(i = 1; i<=n; i++){
    top += va_arg(ap, int);
  }
  
  va_end(ap);
  return top;
}
