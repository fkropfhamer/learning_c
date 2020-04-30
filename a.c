# include "a.h"


int sum(int a, int b) {
  return a + b;
}

int factorial(int a) {
  if (a == 0) return 1;
  return a * factorial(a - 1);
}

int max(int a, int b) {
  if (a > b) return a;
  return b;
}

int min(int a, int b) {
 if (a < b) return a;
 return b;
}
 
