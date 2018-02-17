#include "stdio.h"

int factorial(int n) {
  if(n == 1) return n;
  return factorial(n - 1) * n;
}

int main(void) {
  int i = 1;
  
  while(i < 11) {
    printf("%d\n", factorial(i));
    
    i++;
  }
  
  return 0;
}
