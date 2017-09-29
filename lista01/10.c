#include <stdio.h>

int main(){
	double temperatura;
	int opcao;
	printf("Entre com um valor: \n");
	scanf("%lf",&temperatura);
	printf("Opção: \n");
	scanf("%d",&opcao);
	if(opcao==1){
		printf("%lf",temperatura+273.15);
	} else if(opcao==2){
		printf("%lf",temperatura-273.15);
	}else{
		printf("Erro");
	}
	return 0;
}