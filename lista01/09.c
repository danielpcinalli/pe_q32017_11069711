#include <stdio.h>

int main(){
	double temperatura;
	int opcao;
	printf("Entre com um valor: \n");
	scanf("%lf",&temperatura);
	printf("Opção: \n");
	scanf("%d",&opcao);
	if(opcao==1){
		printf("%lf",temperatura*9/5+32);
	} else if(opcao==2){
		printf("%lf",((temperatura-32)*5/9));
	}else{
		printf("Erro");
	}
	return 0;
}