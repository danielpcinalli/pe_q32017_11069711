#include <stdio.h>

int main(){
	int cargo, falta, extra;
	int salario[5]={10000, 8000, 5000, 3000, 2000};
	char listaCargos[5][11]={"Diretor\0", "Gerente\0", "Engenheiro\0", "Técnico\0", "Operador\0"};
	printf("\nCargo:");
	scanf("%d",&cargo);
	printf("\nFaltas:");
	scanf("%d",&falta);
	printf("\nHoras extra:");
	scanf("%d",&extra);
	
	if(extra>40){
		extra=40;
	}
	
	printf("\ncargo       : %s",listaCargos[cargo-1]);
	printf("\n# de faltas : %d",falta);
	printf("\n#horas-extra: %d",extra);
	printf("\ndescontos   : %d",falta*salario[cargo-1]/20);
	printf("\nacrescimos  : %0.0lf",1.0*extra*(salario[cargo-1]/160.0+40));
	printf("\nsalario     : %0.0lf",1.0*salario[cargo-1]*(1.0-falta/20.0+extra/160.0) + 40.0*extra);
	return 0;
}
