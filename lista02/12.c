#include <stdio.h>

unsigned int fatorialTR(unsigned int n,unsigned int parcial)
{
	if (!n) return parcial;
	return fatorialTR(n-1,parcial*n);
}

unsigned int fatorial(unsigned int n)
{
	return fatorialTR(n,1);
}

unsigned int binomial(unsigned int n,unsigned int k)
{
	unsigned int termo=1;
	termo*=fatorial(k);
	termo*=fatorial(n-k);
	termo=fatorial(n)/termo;
	return termo;
}

int main()
{
	unsigned int n,k;
	scanf("%d %d",&n,&k);
	printf("%d\n",binomial(n,k));
	return 0;
}
