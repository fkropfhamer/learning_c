struct vector3 {
  int x;
  int y;
  int z;
};
typedef struct vector3 Vector3;
Vector3 createVector(int x, int y, int z);
Vector3 addVector(Vector3 v1, Vector3 v2);
Vector3 multiplyScalar(int a, Vector3 v);

