#include <stdio.h>

int main(){
	int x;
	int soma=0;
	for(int i=0;i<10;i++){
		printf("\nValor %d:",i+1);
		scanf("%d",&x);
		soma+=x;
	}
	printf("\nMédia: %f", 1.0*soma/10);
}