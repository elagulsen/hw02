#include <stdlib.h>
#include <time.h>
#include <stdio.h>

int main() {
  srand(time NULL);
  int arr[10];
  int i;
  printf("Array values:\n");
  for(i = 0; i<10; i++) {
    arr[i] = rand();
    if (i == 9) arr[i] = 0;
    printf("Arr[%d] = %d\n",i,arr[i]); 
  }

  int new[10];
  int * p = & arr[9];
  i = 0;
  printf("New array values:\n");
  while (p >= arr) {
    new[i] = *p;
    p--;
    printf("New[%d] = %d\n",i,new[i]);
    i++;
  }

  return 0;
}
