#include <stdio.h>

int main(void) {

  int a = 0, b = 0;

  //USA VALOR e INCREMENTA R: A = 0
  printf("A = %d\n",  a++);

  //Usa valor incrementado R: A = 1
  printf("A = %d\n",  a);

  //Incrementa e usa o valor R: B = 1
  printf("B = %d\n",  ++b);
  
  return 0;
}
