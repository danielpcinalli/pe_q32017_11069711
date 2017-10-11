#include <stdio.h>

int fatorialTR(int x, int base)
{
	if (!x) return base;
	return fatorialTR(x-1,base*x);
}

int fatorial(int x)
{	
	return fatorialTR(x,1);
}

int binomial(int n, int k)
{
	int bin;
	bin=fatorial(k);
	bin*=fatorial(n-k);
	bin = fatorial(n)/bin;
	return bin;
}


int main()
{
	int n,k;
	scanf("%d %d", &n, &k);
	printf("%d\n", binomial(n,k));
	return 0;
}
