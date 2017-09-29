#include <stdio.h>

int main(){
	int x;
	printf("Digite um numero:\n");
	scanf("%d", &x);
	int fib1=0;
	int fib2=1;
	int aux;
	for(int i=0;i<=x;i++){
		printf("%d ", fib1);
		aux=fib1+fib2;
		fib1=fib2;
		fib2=aux;
	}
	return 0;
}