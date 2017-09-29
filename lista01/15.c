#include <stdio.h>

int main(){
	int x;
	printf("Entre com um valor: \n");
	scanf("%d",&x);
	for(int i=100;i<=x;i++){
		if(i%2==00){
			printf("%d ",i);
		}
	}
	return 0;
}