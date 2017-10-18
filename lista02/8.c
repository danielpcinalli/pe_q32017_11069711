#include <stdio.h>

float acrescimos(int sal_b,int extra)
{
	float acr;
	if (extra>=40) extra=40;
	acr=extra*(sal_b/160.0+40);
	return acr;
}

float descontos(int sal_b,int falta)
{
	float desconto;
	desconto=falta;
	desconto*=sal_b;
	desconto/=20;
	return desconto;
}


float salario_final(int sal_b,int falta,int extra)
{
	float sal_final;
	sal_final=sal_b;
	sal_final-=descontos(sal_b,falta);
	sal_final+=acrescimos(sal_b,extra);
	return sal_final;
}


int main(){
	int cargo, falta, extra;
	int salario[5]={10000, 8000, 5000, 3000, 2000};
	scanf("%d %d %d", &cargo, &falta, &extra);
	int salario_base=salario[cargo-1];
	printf("%0.0f\n", salario_final(salario_base, falta, extra));
	return 0;
}
