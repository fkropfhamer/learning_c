#include "v.h"

Vector3 createVector(int x, int y, int z) {
  Vector3 v;

  v.x = x;
  v.y = y;
  v.z = z;

  return v;
}

Vector3 addVector(Vector3 v1, Vector3 v2) {
  Vector3 v;

  v.x = v1.x + v2.x;
  v.y = v1.y + v2.y;
  v.z = v1.z + v2.z;

  return v;
}

Vector3 multiplyScalar(int scalar, Vector3 v) {
  Vector3 nv;

  nv.x = v.x * scalar;
  nv.y = v.y * scalar;
  nv.z = v.z * scalar;

  return nv;
} 
