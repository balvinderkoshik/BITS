//sample1.c
#include<stdio.h>
#include <omp.h>
int main()
{
	#pragma omp parallel
	{
		int ID=omp_get_thread_num();
		printf("\nHello : ID %d",ID);
		printf("\nWorld : ID %d",ID);
	}

}