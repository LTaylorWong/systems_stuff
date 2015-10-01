
#include <stdio.h>
#include <stdlib.h>



int main(){
  float bob =7;
  int a[5];
  int fred = 86;
  int *pfred = &fred;
  double d;
  int v;

  printf("bob = %lf\n", bob);
  a[0]=10;
  printf("a[0]=%d\n", a[0]);
  printf("a[-1]=%d\n", a[-1]);
  a[-1] = 246;

  printf("fred = %d\n", fred);
  printf("address of fred: %lu\n", &fred);
  printf("pfred = %lu\n", pfred);
  printf("address of pfred = %lu\n", &pfred);
  printf("address of v: %lu\n", &v);
  printf("address of d: %lu\n", &d);
  return 0;
}
