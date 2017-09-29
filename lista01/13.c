#include <stdio.h>

int main(){
	int x;
	int gauss=0;
	printf("Entre com um valor: \n");
	scanf("%d",&x);
	for(int i=0;i<=x;i++){
		gauss+=i;
	}
	printf("%d",gauss);
	return 0;
}