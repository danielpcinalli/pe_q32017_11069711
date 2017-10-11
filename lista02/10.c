#define <stdio.h>

int fibMem[1000];

int possui_fib(int n)
{
	return fibMem[n-1];
}

int fib(int n)
{
	if (!n) return 0;
	if (n<=2) return 1;
	if (possui_fib(n)) return fibMem[n-1];
	return calcula_fib(n);
}

int main()
{

	int n;
	fibMem[1]=1;
	fibMem[2]=1;
	scanf("%d", &n);
	printf("%d\n", fib(n));
	return 0;
}
