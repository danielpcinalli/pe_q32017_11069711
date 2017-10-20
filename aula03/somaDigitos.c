#include <stdio.h>

unsigned int quantDigitTR(unsigned int n, unsigned int parcial)
{
	if (n<10) return parcial+n;
	return quantDigitTR(n/10,parcial+n%10);
}

unsigned int quantDigit(unsigned int n)
{
	return quantDigitTR(n,0);
}

int main()
{
	unsigned int n;
	scanf("%d",&n);
	printf("%d\n", quantDigit(n));
	return 0;
}
