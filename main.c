#include "stdio.h"

int factorial(int n) {
  if(n == 1) return n;
  return factorial(n - 1) * n;
}

int main(void) {
  for(int i = 1; i < 11; i++) {
    printf("%d\n", factorial(i));
  }
  
  return 0;
}
