//alphabet.c
#include<omp.h>
#include<stdio.h>
int main(){
int i; 

#pragma omp parallel //for 

for (i='a'; i<='z'; i++) 
	printf ("%c", i);  

return 0;
}