#include <stdio.h>
#include <math.h>

int main(){
	
	int x,opcao;
	int conv=0;
	printf("Entre com um valor: \n");
	scanf("%d",&x);
	printf("Opção: \n");
	scanf("%d",&opcao);
	if(opcao==1){
		for(int i=0;x;i++){
			conv+=x%2*pow(10,i);
			x/=2;
		}
		printf("%d",conv);
	} else if(opcao==2){
		for(int i=0;x;i++){
			if(x%10){
				conv+=pow(2,i);
			}
			x/=10;
		}
		printf("%d",conv);
	}else{
		printf("Erro");
	}
	return 0;
}