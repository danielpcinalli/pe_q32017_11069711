#include <stdio.h>

int par_ou_impar(unsigned int n)
{
	return n%2;
}

int main()
{
	unsigned int n;
	scanf("%d",&n);
	printf("%d\n",par_ou_impar(n));
	return 0;
}
