int *BuyukBul(int a, int b);
int main(){
  int s1, s2;
  int *p;
  
  printf("s1:");
  scanf("%d", &s1);
  
  printf("s2:");
  scanf("%d", &s2);
  
  p = BuyukBul(s1, s2);
  
  printf("Buyuk sayi: %d", *p);
  return 0;
}

int *BuyukBul(int a, int b){
  return (a > b) ? &a : &b;
}
