//serialprogram.c
#include<stdio.h>
#include<sys/time.h>
int numEle=10000;
int main()
{
	struct timeval begin, end;
	int i, A[numEle], B[numEle];
	unsigned long sum=0;
	
	gettimeofday(&begin,0);

	for(i=0;i<numEle;i++)
	{
		A[i]=i;
		B[i]=i;
		sum += A[i]+B[i];
	}

	gettimeofday(&end,0);
	long seconds = end.tv_sec - begin.tv_sec;
	long microsec = end.tv_usec - begin.tv_usec;
	double elapsed = seconds + microsec * 1e-6;
	
	printf("Time measured = %.6f seconds \n",elapsed);



	printf("\nSum = %lu", sum);
}