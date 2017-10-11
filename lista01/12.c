#include <stdio.h>
#include <math.h>

int main(){
	
	int opcao;
	char c[32];
	printf("Entre com um valor: \n");
	scanf("%s",&c);
	printf("Opção: \n");
	scanf("%d",&opcao);
	if(opcao==1){
		printf("%X",strtol (c,NULL,10));
	} else if(opcao==2){
		printf("%ld",strtol (c,NULL,16));
	}else{
		printf("Erro");
	}
	return 0;
}