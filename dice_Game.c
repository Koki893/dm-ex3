#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){

  int x1,x2;

  srand(time(NULL));
  
  x1 = (rand() % 6 + 1);
  x2 = (rand() % 6 + 1);
  
  printf("Rolling dice...\n");
  printf("Die 1: %d\n",x1);
  printf("Die 2: %d\n",x2);
  printf("Total value: %d\n",x1+x2);
  return 0;
}
