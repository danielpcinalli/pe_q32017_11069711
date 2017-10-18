#include <stdio.h>

int fibMem[1000]={};

int fib(int n)
{
if (n==0) return 0;
if (n<=2) return 1;

if (fibMem[n]) return fibMem[n];
else{
	fibMem[n]=fib(n-1)+fib(n-2);
	return fib(n-1)+fib(n-2);
}
}

int main()
{
	int n=1;
	fibMem[1]=1;
	fibMem[2]=1;
	while (n){
		scanf("%d", &n);
		printf("%d\n",fib(n));
	}
}
