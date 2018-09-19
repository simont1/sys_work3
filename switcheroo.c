#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
  srand(time(NULL));
  int ray[10];
  ray[9] = 0; // last value = 0
  for(int i = 0; i < 9; i++){
    ray[i] = rand(); //random values
  }

  printf("Printing values in array1...\n");
  for(int i = 0; i < 10; i++){
    printf("%d\n", ray[i]);
  }

  int xray[10];
  int *xp = xray;
  int *p = ray;
  for(int i = 9; i >= 0; i--){
    *(xp + i) = *(p + (9 - i));
    // assigns values backwards, swaps the position, 9 to 0, 8 to 1, etc...
  }
  printf("Printing values in array2...\n");
  for(int i = 0; i < 10; i++){
    printf("%d\n", xray[i]);
  }
}
