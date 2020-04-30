# include <stdio.h>
# include "a.h"
# include "v.h"

int main() {
  int s = sum(10,2);
  int number = 10;
  int fac = factorial(number);
  printf("Hello World\n");
  printf("sum is: %i\n", s);
  printf("factorial of %i is %i\n", number, fac);

  Vector3 vector1 = createVector(1, 2, 3);
  Vector3 vector2 = createVector(1, 2, 3);
  Vector3 vector3 = addVector(vector1, vector2);
  Vector3 vector4 = multiplyScalar(3, vector1);
  printf("Vector1(%i, %i, %i)\n", vector1.x, vector1.y, vector1.z); 
  printf("Vector2(%i, %i, %i)\n", vector2.x, vector2.y, vector2.z); 
  printf("Vector1 + Vector2 = Vector3(%i, %i, %i)\n", vector3.x, vector3.y, vector3.z); 
  printf("3 * Vector1 = Vector4(%i, %i, %i)\n", vector4.x, vector4.y, vector4.z); 
  return 0;
}
