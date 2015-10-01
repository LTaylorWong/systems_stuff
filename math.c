#include <stdlib.h>
#include <stdio.h>

int main(){
  //while loop, until number reaches 1000
  int x = 0;
  int sum = 0;
  while (x < 1000){
    if (((x % 3) == 0) || ((x % 5) == 0)){
	sum += x;
	printf("Current sum = %d\n",sum);
	x = x+1;
      }
  }
  printf("Final sum = %d\n", sum);
  //return 0;
}
