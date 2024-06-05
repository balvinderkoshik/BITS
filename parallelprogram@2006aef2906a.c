//parallelprogram.c
#include<stdio.h>
#include<sys/time.h>
#include<omp.h>
int numEle=10000;
#define PAD 8
int main()
{
	struct timeval begin, end;
	int i, A[numEle], B[numEle];
	int n;
	scanf("%d",&n); ///n is numbre of threadss 
	unsigned long sum=0, subSum[n][PAD];
	
	gettimeofday(&begin,0);

	#pragma omp parallel num_threads(n)
       {
		int ID;
		int i;
		ID = omp_get_thread_num();
		subSum[ID][0]=0;

		for(i=ID;i<numEle;i+=n)
		{
			A[i]=i;
			B[i]=i;
			subSum[ID][0] += A[i]+B[i];
		}

	}
	for(i=0;i<n;i++)
	sum += subSum[i][0];
 	gettimeofday(&end,0);
	long seconds = end.tv_sec - begin.tv_sec;
	long microsec = end.tv_usec - begin.tv_usec;
	double elapsed = seconds + microsec * 1e-6;
	
	printf("Time measured = %.6f seconds \n",elapsed);



	printf("\nSum = %lu", sum);
}
