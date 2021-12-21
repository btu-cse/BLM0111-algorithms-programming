#include <stdio.h>
int main()
{
  int var = 5;
  printf("Value: %d\n", var);
  printf("Address: %p", &var);  //Notice, the ampersand(&) before var.
  return 0;
}
