#include <stdio.h>
#include <stdlib.h>

float mediana(int * vetor, int n)
{
	if(n%2) return vetor[(n+1)/2-1];
	float med=0;
	med+=vetor[n/2-1];
	med+=vetor[n/2];
	med/=2;
	return med;
	
}

void scanvetor(int * vetor)
{
	int i=0;
	char temp;
	
	do {
		scanf("%d%c",&vetor[i],&temp);
		i++;
	} while (temp != '\n');
	
}

int cmpfunc(const void * a, const void * b)
{
	return (*(int*)a-*(int*)b);
}

int main()
{
	int n;
	int *vetor;
	scanf("%d",&n);
	vetor=malloc(n*sizeof(int));
	/*
	int i=0;
	char temp;
	
	do {
		scanf("%d%c",&vetor[i],&temp);
		i++;
	} while (temp != '\n');
	*/
	scanvetor(vetor);
	qsort(vetor, n, sizeof(int),cmpfunc);
	
	printf("%0.2f\n",mediana(vetor,n));
	
	free(vetor);
	return 0;
}
