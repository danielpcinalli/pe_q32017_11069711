#include <stdio.h>

unsigned int somatorioTR(unsigned int n,unsigned int parcial)
{
	if (!n) return parcial;
	return somatorioTR(n-1,parcial+n);
}

unsigned int somatorio(unsigned int n)
{
	return somatorioTR(n,0);
}

int main()
{
	unsigned int n;
	scanf("%d",&n);
	printf("%d\n",somatorio(n));
	return 0;
}
