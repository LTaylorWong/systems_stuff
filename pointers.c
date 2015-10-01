
#include <stdio.h>
#include <stdlib.h>



int main(){
  int fred;
  double d;
  char c;
  int *pfred = &fred;
  double *pd = &pd;
  char *pc = &c;

  // printf("pointer size: %lu\n", sizeof(int *));
  //printf("pfred: %lu\n",&fred);
  printf("pfred: %lu\n", pfred);
  printf("pd: %lu\n", pd);
  printf("pc: %lu\n\n", pc);

  pc+=1;
  pd+=1;
  pfred+=1;

  printf("pfred: %lu\n", pfred);
  printf("pd: %lu\n", pd);
  printf("pc: %lu\n", pc);
  return 0;
}
