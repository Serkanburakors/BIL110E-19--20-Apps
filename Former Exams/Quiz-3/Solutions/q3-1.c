#include <stdio.h>
int main () {
  float x,y,z,t;
  printf ("Enter four floating-points as strings, for example -12.345:\n");
  scanf("%f%*c%f%*c%f%*c%f",&x,&y,&z,&t);
  printf ("Total of values are %f", x+y+z+t);
  return 0;
}
