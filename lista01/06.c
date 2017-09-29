#include <stdio.h>

int main(){
	int x;
	printf("Digite um numero:\n");
	scanf("%d", &x);
	int fatorial=1;
	for (int i=2;i<=x;i++){
		fatorial*=i;
	}	
	printf("%d", fatorial);
	return 0;
}