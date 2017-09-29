#include <stdio.h>

int main(){
	int x,y;
	printf("Escreva primeiro numero:\n");
	scanf("%d",&x);
	printf("Escreva segundo numero:\n");
	scanf("%d",&y);
	int potencia=1;
	for(int i=1;i<=y;i++){
		potencia*=x;
	}
	printf("%d", potencia);
	return 0;
}