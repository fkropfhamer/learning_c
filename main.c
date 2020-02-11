# include <stdio.h>
# include "a.h"

int main() {
  int s = sum(10,2);
  int number = 10;
  int fac = factorial(number);
  printf("Hello World\n");
  printf("sum is: %i\n", s);
  printf("factorial of %i is %i\n", number, fac);
  return 0;
}
