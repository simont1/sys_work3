#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
  srand(time(NULL));
  int x = rand();
  int ray[10];
  for(int i = 0; i < 10; i++){
    ray[i] = rand();
  }
  printf("%d\n", x);
  for(int i = 0; i < 10; i++){
    printf("%d\n", ray[i]);
  }
}
