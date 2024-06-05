//thread_interleaving.c
#include <stdio.h>
#include <omp.h>
 
int main() {
int data;  
#pragma omp parallel num_threads(4)
  {
    int id = omp_get_thread_num();
    data = id;
    int total = omp_get_num_threads();
    printf("Greetings from process %d out of %d with Data %d\n", id, total, data);
  }
  printf("parallel for ends.\n");
  return 0;
}