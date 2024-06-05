//hello.c
#include <stdio.h>
 
int main() {
  #pragma omp parallel num_threads(8)
  {
    printf("hello\n");     
  }
  printf("It joins here\n");
  return 0;
}