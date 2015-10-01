
#include <stdio.h>
#include <stdlib.h>



int main(){
  
  char s1[] = "Johnny is a poopy head";

  printf("String: %s\n", s1);

  int x = 0;
  int len = 0;
  while(s1[x] != 0){
    len++;
    x++;
  }

  printf("String length: %d\n",len );

  return 0;
}
